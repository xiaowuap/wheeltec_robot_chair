#include "web_video_server/libav_streamer.h"
#include "async_web_server_cpp/http_reply.hpp"

#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(58, 9, 100)
#define AV_CODEC_FLAG_GLOBAL_HEADER (1 << 22)
#define CODEC_FLAG_GLOBAL_HEADER AV_CODEC_FLAG_GLOBAL_HEADER
#endif

namespace web_video_server
{

LibavStreamer::LibavStreamer(const async_web_server_cpp::HttpRequest &request,
                             async_web_server_cpp::HttpConnectionPtr connection, rclcpp::Node::SharedPtr nh,
                             const std::string &format_name, const std::string &codec_name,
                             const std::string &content_type) :
    ImageTransportImageStreamer(request, connection, nh), output_format_(nullptr), format_context_(nullptr), codec_(nullptr), codec_context_(nullptr), video_stream_(
        nullptr), frame_(nullptr), sws_context_(nullptr), first_image_timestamp_(rclcpp::Time(0, 0, RCL_ROS_TIME)), format_name_(
        format_name), codec_name_(codec_name), content_type_(content_type), opt_(nullptr), io_buffer_(nullptr)
{
  bitrate_ = request.get_query_param_value_or_default<int>("bitrate", 100000);
  qmin_ = request.get_query_param_value_or_default<int>("qmin", 10);
  qmax_ = request.get_query_param_value_or_default<int>("qmax", 42);
  gop_ = request.get_query_param_value_or_default<int>("gop", 250);
}

LibavStreamer::~LibavStreamer()
{
  uninitialize();
}

void LibavStreamer::uninitialize() {
  if (codec_context_)
    avcodec_free_context(&codec_context_);
  if (frame_)
    av_frame_free(&frame_);
  if (format_context_) {
    if (format_context_->pb)
      avio_context_free(&format_context_->pb);
    avformat_free_context(format_context_);
  }
  if (sws_context_)
    sws_freeContext(sws_context_);
  if (io_buffer_)
    delete[] io_buffer_;
  av_dict_free(&opt_);

  codec_context_ = nullptr;
  frame_ = nullptr;
  format_context_ = nullptr;
  sws_context_ = nullptr;
  io_buffer_ = nullptr;
  opt_ = nullptr;
}

// output callback for ffmpeg IO context
static int dispatch_output_packet(void* opaque, const uint8_t* buffer, int buffer_size)
{
  async_web_server_cpp::HttpConnectionPtr connection = *((async_web_server_cpp::HttpConnectionPtr*) opaque);
  std::vector<uint8_t> encoded_frame;
  encoded_frame.assign(buffer, buffer + buffer_size);
  connection->write_and_clear(encoded_frame);
  return buffer_size;
}

void LibavStreamer::initialize(const cv::Mat &img)
{
  // Load format
  avformat_alloc_output_context2(&format_context_, NULL, format_name_.c_str(), NULL);
  if (!format_context_)
  {
    throw std::runtime_error("Error allocating ffmpeg format context");
  }
  output_format_ = format_context_->oformat;

  // Load codec
  codec_ = avcodec_find_encoder_by_name(codec_name_.c_str());
  if (!codec_)
  {
    throw std::runtime_error("Error looking up codec: " + codec_name_);
  }

  video_stream_ = avformat_new_stream(format_context_, codec_);
  if (!video_stream_)
  {
    throw std::runtime_error("Error creating video stream");
  }
  video_stream_->id = format_context_->nb_streams - 1;

  codec_context_ = avcodec_alloc_context3(codec_);
  if (!codec_context_)
  {
    throw std::runtime_error("Could not allocate video codec context");
  }

  // Set options
  codec_context_->codec_id = codec_->id;
  codec_context_->bit_rate = bitrate_;
  codec_context_->width = output_width_;
  codec_context_->height = output_height_;
  video_stream_->time_base = (AVRational){1, 1000};
  codec_context_->time_base = (AVRational){1, 25};
  codec_context_->gop_size = gop_;
  codec_context_->max_b_frames = 1;
  codec_context_->pix_fmt = AV_PIX_FMT_YUV420P;

  if (codec_->id == AV_CODEC_ID_H264) {
      av_opt_set(codec_context_->priv_data, "preset", "ultrafast", 0);
  }

  // Quality settings
  codec_context_->qmin = qmin_;
  codec_context_->qmax = qmax_;

  // Some formats want stream headers to be separate
  if (output_format_->flags & AVFMT_GLOBALHEADER)
    codec_context_->flags |= AV_CODEC_FLAG_GLOBAL_HEADER;

  // Open Codec
  if (avcodec_open2(codec_context_, codec_, &opt_) < 0)
  {
    throw std::runtime_error("Could not open video codec");
  }

  if (avcodec_parameters_from_context(video_stream_->codecpar, codec_context_) < 0) {
      throw std::runtime_error("Could not copy codec parameters");
  }

  // Set up custom IO callback.
  size_t io_buffer_size = 32 * 1024;
  io_buffer_ = new unsigned char[io_buffer_size];
  AVIOContext* io_ctx = avio_alloc_context(io_buffer_, io_buffer_size, 1, &connection_, NULL, NULL, NULL);
  if (!io_ctx)
  {
    throw std::runtime_error("Error setting up IO context");
  }
  io_ctx->write_packet = dispatch_output_packet;
  format_context_->pb = io_ctx;

  // Send response headers
  async_web_server_cpp::HttpReply::builder(async_web_server_cpp::HttpReply::ok).header("Connection", "close").header(
      "Server", "web_video_server").header("Cache-Control",
                                           "no-cache, no-store, must-revalidate, pre-check=0, post-check=0, max-age=0").header(
      "Pragma", "no-cache").header("Expires", "0").header("Max-Age", "0").header("Trailer", "Expires").header(
      "Content-type", content_type_).header("Access-Control-Allow-Origin", "*").write(connection_);

  // Send video stream header
  if (avformat_write_header(format_context_, &opt_) < 0)
  {
    throw std::runtime_error("Error writing header");
  }

  // Allocate frame buffers
  frame_ = av_frame_alloc();
  frame_->format = codec_context_->pix_fmt;
  frame_->width  = output_width_;
  frame_->height = output_height_;
  if (av_frame_get_buffer(frame_, 32) < 0) {
      throw std::runtime_error("Could not allocate the video frame data");
  }
}

void LibavStreamer::initializeEncoder()
{
}

void LibavStreamer::sendImage(const cv::Mat &img, const rclcpp::Time &time)
{
  boost::mutex::scoped_lock lock(encode_mutex_);
  if (!isInitialized()) {
    try {
      this->initialize(img);
    } catch(const std::runtime_error& e) {
      RCLCPP_ERROR(nh_->get_logger(), "Error initializing video stream: %s", e.what());
      this->uninitialize();
      return;
    }
  }

  if (first_image_timestamp_.seconds() == 0)
  {
    first_image_timestamp_ = time;
  }

  // Make sure frame is writable
  if (av_frame_make_writable(frame_) < 0) {
      RCLCPP_ERROR(nh_->get_logger(), "Could not make frame writable");
      return;
  }

  // Convert from opencv to libav
  if (!sws_context_)
  {
    sws_context_ = sws_getContext(output_width_, output_height_, AV_PIX_FMT_BGR24, output_width_, output_height_,
                                  codec_context_->pix_fmt, SWS_BICUBIC, NULL, NULL, NULL);
    if (!sws_context_)
    {
      RCLCPP_ERROR(nh_->get_logger(), "Could not initialize the conversion context");
      return;
    }
  }

  const int stride[] = { static_cast<int>(img.step[0]) };
  sws_scale(sws_context_, &img.data, stride, 0, output_height_, frame_->data, frame_->linesize);

  double seconds = (time - first_image_timestamp_).seconds();
  frame_->pts = (int64_t)(seconds * 1000);

  // Encode the frame
  AVPacket* pkt = av_packet_alloc();
  if (!pkt) {
      RCLCPP_ERROR(nh_->get_logger(), "Could not allocate packet");
      return;
  }

  int ret = avcodec_send_frame(codec_context_, frame_);
  if (ret < 0) {
      RCLCPP_ERROR(nh_->get_logger(), "Error sending a frame for encoding");
      av_packet_free(&pkt);
      return;
  }

  while (ret >= 0) {
      ret = avcodec_receive_packet(codec_context_, pkt);
      if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF) {
          av_packet_free(&pkt);
          return;
      } else if (ret < 0) {
          RCLCPP_ERROR(nh_->get_logger(), "Error during encoding");
          av_packet_free(&pkt);
          return;
      }

      av_packet_rescale_ts(pkt, codec_context_->time_base, video_stream_->time_base);
      pkt->stream_index = video_stream_->index;

      if (av_interleaved_write_frame(format_context_, pkt) < 0)
      {
        // It is possible that the client has disconnected.
        // Log an error and stop the stream.
        RCLCPP_DEBUG(nh_->get_logger(), "Error writing frame, client may have disconnected");
        this->uninitialize();
        av_packet_free(&pkt);
        return;
      }
      av_packet_unref(pkt);
  }
  av_packet_free(&pkt);
}

LibavStreamerType::LibavStreamerType(const std::string &format_name, const std::string &codec_name,
                                     const std::string &content_type) :
    format_name_(format_name), codec_name_(codec_name), content_type_(content_type)
{
}

boost::shared_ptr<ImageStreamer> LibavStreamerType::create_streamer(const async_web_server_cpp::HttpRequest &request,
                                                                    async_web_server_cpp::HttpConnectionPtr connection,
                                                                    rclcpp::Node::SharedPtr nh)
{
  return boost::shared_ptr<ImageStreamer>(
      new LibavStreamer(request, connection, nh, format_name_, codec_name_, content_type_));
}

std::string LibavStreamerType::create_viewer(const async_web_server_cpp::HttpRequest &request)
{
  std::stringstream ss;
  ss << "<video src=\"/stream?";
  ss << request.query;
  ss << "\" autoplay=\"true\" preload=\"none\"></video>";
  return ss.str();
}

} // namespace web_video_server

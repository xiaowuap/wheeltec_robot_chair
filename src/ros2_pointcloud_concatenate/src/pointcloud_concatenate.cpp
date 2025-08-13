#include "pointcloud_concatenate/pointcloud_concatenate.hpp"

// Constructor
PointcloudConcatenate::PointcloudConcatenate() : Node("pointcloud_concatenate")
{
  // Initialise variables / parameters to class variables
  handleParams();

  // Initialization tf2 listener
  tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

  // Initialise publishers and subscribers
  // Queues size of 1 to only keep the most recent message
  sub_cloud_in1_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(cloud_in1_topic_, 1, std::bind(&PointcloudConcatenate::subCallbackCloudIn1, this, std::placeholders::_1));
  sub_cloud_in2_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(cloud_in2_topic_, 1, std::bind(&PointcloudConcatenate::subCallbackCloudIn2, this, std::placeholders::_1));
  sub_cloud_in3_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(cloud_in3_topic_, 1, std::bind(&PointcloudConcatenate::subCallbackCloudIn3, this, std::placeholders::_1));
  sub_cloud_in4_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(cloud_in4_topic_, 1, std::bind(&PointcloudConcatenate::subCallbackCloudIn4, this, std::placeholders::_1));
  pub_cloud_out_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(cloud_out_topic_, 1);
}

// Destructor
PointcloudConcatenate::~PointcloudConcatenate()
{
  // Free up allocated memory
  RCLCPP_INFO(this->get_logger(), "Destructing PointcloudConcatenate...");
  // delete pointer_name;
}

void PointcloudConcatenate::subCallbackCloudIn1(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
{
  cloud_in1_ = *msg;
  cloud_in1_received_ = true;
  cloud_in1_received_recent_ = true;
}

void PointcloudConcatenate::subCallbackCloudIn2(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
{
  cloud_in2_ = *msg;
  cloud_in2_received_ = true;
  cloud_in2_received_recent_ = true;
}

void PointcloudConcatenate::subCallbackCloudIn3(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
{
  cloud_in3_ = *msg;
  cloud_in3_received_ = true;
  cloud_in3_received_recent_ = true;
}

void PointcloudConcatenate::subCallbackCloudIn4(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
{
  cloud_in4_ = *msg;
  cloud_in4_received_ = true;
  cloud_in4_received_recent_ = true;
}

void PointcloudConcatenate::handleParams()
{
  this->declare_parameter("target_frame", "base_link");
  this->declare_parameter("clouds", 2);
  this->declare_parameter("hz", 10.0);
  this->declare_parameter("cloud_in1_topic", "/cloud_in1");
  this->declare_parameter("cloud_in2_topic", "/cloud_in2");
  this->declare_parameter("cloud_in3_topic", "/cloud_in3");
  this->declare_parameter("cloud_in4_topic", "/cloud_in4");
  this->declare_parameter("cloud_out_topic", "/cloud_out");

  this->get_parameter("target_frame", param_frame_target_);
  this->get_parameter("clouds", param_clouds_);
  this->get_parameter("hz", param_hz_);
  this->get_parameter("cloud_in1_topic", cloud_in1_topic_);
  this->get_parameter("cloud_in2_topic", cloud_in2_topic_);
  this->get_parameter("cloud_in3_topic", cloud_in3_topic_);
  this->get_parameter("cloud_in4_topic", cloud_in4_topic_);
  this->get_parameter("cloud_out_topic", cloud_out_topic_);

  RCLCPP_INFO(this->get_logger(), "Parameters loaded.");
}

double PointcloudConcatenate::getHz()
{
  return param_hz_;
}

void PointcloudConcatenate::update()
{
  // Is run periodically and handles calling the different methods
  if (pub_cloud_out_->get_subscription_count() == 0)
  {
    return;
  }

  if ((!cloud_in1_received_) && (!cloud_in2_received_) && (!cloud_in3_received_) && (!cloud_in4_received_))
  {
    RCLCPP_WARN(this->get_logger(), "No pointclouds received yet. Sleeping 1s...");
    return;
  }

  // Initialise pointclouds
  sensor_msgs::msg::PointCloud2 cloud_to_concat;
  cloud_out_ = sensor_msgs::msg::PointCloud2(); // Clear the output pointcloud

  // Track success of transforms
  bool success = true;

  // Concatenate the first pointcloud
  if (param_clouds_ >= 1 && success && cloud_in1_received_)
  {
    // Warn if cloud was not received since last update
    if (!cloud_in1_received_recent_)
    {
      RCLCPP_WARN(this->get_logger(), "Cloud 1 was not received since last update, reusing last received message...");
    }
    cloud_in1_received_recent_ = false;

    // Transform pointcloud to the target frame
    // Here we just assign the pointcloud directly to the output to ensure the secondary
    // data is inherited correctly.
    success = pcl_ros::transformPointCloud(param_frame_target_, cloud_in1_, cloud_out_, *tf_buffer_);
    if (!success)
    {
      RCLCPP_WARN(this->get_logger(), "Transforming cloud 1 from %s to %s failed!", cloud_in1_.header.frame_id.c_str(), param_frame_target_.c_str());
    }
  }

  // Concatenate the second pointcloud
  if (param_clouds_ >= 2 && success && cloud_in2_received_)
  {
    // Warn if cloud was not received since last update
    if (!cloud_in2_received_recent_)
    {
      RCLCPP_WARN(this->get_logger(), "Cloud 2 was not received since last update, reusing last received message...");
    }
    cloud_in2_received_recent_ = false;

    // Transform pointcloud to the target frame
    success = pcl_ros::transformPointCloud(param_frame_target_, cloud_in2_, cloud_to_concat, *tf_buffer_);
    if (!success)
    {
      RCLCPP_WARN(this->get_logger(), "Transforming cloud 2 from %s to %s failed!", cloud_in2_.header.frame_id.c_str(), param_frame_target_.c_str());
    }

    // Concatenate the pointcloud
    if (success)
    {
      pcl::concatenatePointCloud(cloud_out_, cloud_to_concat, cloud_out_);
    }
  }

  // Concatenate the third pointcloud
  if (param_clouds_ >= 3 && success && cloud_in3_received_)
  {
    // Warn if cloud was not received since last update
    if (!cloud_in3_received_recent_)
    {
      RCLCPP_WARN(this->get_logger(), "Cloud 3 was not received since last update, reusing last received message...");
    }
    cloud_in3_received_recent_ = false;

    // Transform pointcloud to the target frame
    // Here we just assign the pointcloud directly to the output to ensure the secondary
    // data is inherited correctly.
    success = pcl_ros::transformPointCloud(param_frame_target_, cloud_in3_, cloud_out_, *tf_buffer_);
    if (!success)
    {
      RCLCPP_WARN(this->get_logger(), "Transforming cloud 3 from %s to %s failed!", cloud_in3_.header.frame_id.c_str(), param_frame_target_.c_str());
    }
  }

  // Concatenate the third pointcloud
  if (param_clouds_ >= 4 && success && cloud_in4_received_)
  {
    // Warn if cloud was not received since last update
    if (!cloud_in4_received_recent_)
    {
      RCLCPP_WARN(this->get_logger(), "Cloud 4 was not received since last update, reusing last received message...");
    }
    cloud_in4_received_recent_ = false;

    // Transform pointcloud to the target frame
    // Here we just assign the pointcloud directly to the output to ensure the secondary
    // data is inherited correctly.
    success = pcl_ros::transformPointCloud(param_frame_target_, cloud_in4_, cloud_out_, *tf_buffer_);
    if (!success)
    {
      RCLCPP_WARN(this->get_logger(), "Transforming cloud 4 from %s to %s failed!", cloud_in4_.header.frame_id.c_str(), param_frame_target_.c_str());
    }
  }

  // Publish the concatenated pointcloud
  if (success)
  {
    publishPointcloud(cloud_out_);
  }
}

void PointcloudConcatenate::publishPointcloud(sensor_msgs::msg::PointCloud2 &cloud)
{
  // Publishes the combined pointcloud

  // Update the timestamp
  cloud.header.stamp = this->now();
  cloud.header.frame_id = param_frame_target_;
  // Publish
  pub_cloud_out_->publish(cloud);
}
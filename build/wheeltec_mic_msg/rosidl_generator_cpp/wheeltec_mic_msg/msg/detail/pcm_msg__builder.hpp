// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__BUILDER_HPP_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheeltec_mic_msg/msg/detail/pcm_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheeltec_mic_msg
{

namespace msg
{

namespace builder
{

class Init_PcmMsg_pcm_buf
{
public:
  explicit Init_PcmMsg_pcm_buf(::wheeltec_mic_msg::msg::PcmMsg & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::msg::PcmMsg pcm_buf(::wheeltec_mic_msg::msg::PcmMsg::_pcm_buf_type arg)
  {
    msg_.pcm_buf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::PcmMsg msg_;
};

class Init_PcmMsg_length
{
public:
  Init_PcmMsg_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PcmMsg_pcm_buf length(::wheeltec_mic_msg::msg::PcmMsg::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_PcmMsg_pcm_buf(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::PcmMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::msg::PcmMsg>()
{
  return wheeltec_mic_msg::msg::builder::Init_PcmMsg_length();
}

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheeltec_mic_msg:srv/SetMajorMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__BUILDER_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheeltec_mic_msg/srv/detail/set_major_mic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_SetMajorMic_Request_mic_id
{
public:
  Init_SetMajorMic_Request_mic_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wheeltec_mic_msg::srv::SetMajorMic_Request mic_id(::wheeltec_mic_msg::srv::SetMajorMic_Request::_mic_id_type arg)
  {
    msg_.mic_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetMajorMic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::SetMajorMic_Request>()
{
  return wheeltec_mic_msg::srv::builder::Init_SetMajorMic_Request_mic_id();
}

}  // namespace wheeltec_mic_msg


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_SetMajorMic_Response_fail_reason
{
public:
  explicit Init_SetMajorMic_Response_fail_reason(::wheeltec_mic_msg::srv::SetMajorMic_Response & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::srv::SetMajorMic_Response fail_reason(::wheeltec_mic_msg::srv::SetMajorMic_Response::_fail_reason_type arg)
  {
    msg_.fail_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetMajorMic_Response msg_;
};

class Init_SetMajorMic_Response_result
{
public:
  Init_SetMajorMic_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMajorMic_Response_fail_reason result(::wheeltec_mic_msg::srv::SetMajorMic_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SetMajorMic_Response_fail_reason(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetMajorMic_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::SetMajorMic_Response>()
{
  return wheeltec_mic_msg::srv::builder::Init_SetMajorMic_Response_result();
}

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__BUILDER_HPP_

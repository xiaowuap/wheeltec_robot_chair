// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheeltec_mic_msg:srv/SwitchMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__BUILDER_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheeltec_mic_msg/srv/detail/switch_mic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_SwitchMic_Request_mic_name
{
public:
  Init_SwitchMic_Request_mic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wheeltec_mic_msg::srv::SwitchMic_Request mic_name(::wheeltec_mic_msg::srv::SwitchMic_Request::_mic_name_type arg)
  {
    msg_.mic_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SwitchMic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::SwitchMic_Request>()
{
  return wheeltec_mic_msg::srv::builder::Init_SwitchMic_Request_mic_name();
}

}  // namespace wheeltec_mic_msg


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_SwitchMic_Response_result
{
public:
  explicit Init_SwitchMic_Response_result(::wheeltec_mic_msg::srv::SwitchMic_Response & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::srv::SwitchMic_Response result(::wheeltec_mic_msg::srv::SwitchMic_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SwitchMic_Response msg_;
};

class Init_SwitchMic_Response_success
{
public:
  Init_SwitchMic_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchMic_Response_result success(::wheeltec_mic_msg::srv::SwitchMic_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SwitchMic_Response_result(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SwitchMic_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::SwitchMic_Response>()
{
  return wheeltec_mic_msg::srv::builder::Init_SwitchMic_Response_success();
}

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__BUILDER_HPP_

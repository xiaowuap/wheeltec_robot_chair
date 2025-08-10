// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheeltec_mic_msg:srv/SetAwakeWord.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SET_AWAKE_WORD__BUILDER_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SET_AWAKE_WORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheeltec_mic_msg/srv/detail/set_awake_word__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_SetAwakeWord_Request_threshold
{
public:
  explicit Init_SetAwakeWord_Request_threshold(::wheeltec_mic_msg::srv::SetAwakeWord_Request & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::srv::SetAwakeWord_Request threshold(::wheeltec_mic_msg::srv::SetAwakeWord_Request::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetAwakeWord_Request msg_;
};

class Init_SetAwakeWord_Request_awake_word
{
public:
  Init_SetAwakeWord_Request_awake_word()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAwakeWord_Request_threshold awake_word(::wheeltec_mic_msg::srv::SetAwakeWord_Request::_awake_word_type arg)
  {
    msg_.awake_word = std::move(arg);
    return Init_SetAwakeWord_Request_threshold(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetAwakeWord_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::SetAwakeWord_Request>()
{
  return wheeltec_mic_msg::srv::builder::Init_SetAwakeWord_Request_awake_word();
}

}  // namespace wheeltec_mic_msg


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_SetAwakeWord_Response_result
{
public:
  explicit Init_SetAwakeWord_Response_result(::wheeltec_mic_msg::srv::SetAwakeWord_Response & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::srv::SetAwakeWord_Response result(::wheeltec_mic_msg::srv::SetAwakeWord_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetAwakeWord_Response msg_;
};

class Init_SetAwakeWord_Response_success
{
public:
  Init_SetAwakeWord_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAwakeWord_Response_result success(::wheeltec_mic_msg::srv::SetAwakeWord_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetAwakeWord_Response_result(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::SetAwakeWord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::SetAwakeWord_Response>()
{
  return wheeltec_mic_msg::srv::builder::Init_SetAwakeWord_Response_success();
}

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SET_AWAKE_WORD__BUILDER_HPP_

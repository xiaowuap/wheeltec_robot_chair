// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__BUILDER_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_GetOfflineResult_Request_time_per_order
{
public:
  explicit Init_GetOfflineResult_Request_time_per_order(::wheeltec_mic_msg::srv::GetOfflineResult_Request & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::srv::GetOfflineResult_Request time_per_order(::wheeltec_mic_msg::srv::GetOfflineResult_Request::_time_per_order_type arg)
  {
    msg_.time_per_order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::GetOfflineResult_Request msg_;
};

class Init_GetOfflineResult_Request_confidence_threshold
{
public:
  explicit Init_GetOfflineResult_Request_confidence_threshold(::wheeltec_mic_msg::srv::GetOfflineResult_Request & msg)
  : msg_(msg)
  {}
  Init_GetOfflineResult_Request_time_per_order confidence_threshold(::wheeltec_mic_msg::srv::GetOfflineResult_Request::_confidence_threshold_type arg)
  {
    msg_.confidence_threshold = std::move(arg);
    return Init_GetOfflineResult_Request_time_per_order(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::GetOfflineResult_Request msg_;
};

class Init_GetOfflineResult_Request_offline_recognise_start
{
public:
  Init_GetOfflineResult_Request_offline_recognise_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetOfflineResult_Request_confidence_threshold offline_recognise_start(::wheeltec_mic_msg::srv::GetOfflineResult_Request::_offline_recognise_start_type arg)
  {
    msg_.offline_recognise_start = std::move(arg);
    return Init_GetOfflineResult_Request_confidence_threshold(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::GetOfflineResult_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::GetOfflineResult_Request>()
{
  return wheeltec_mic_msg::srv::builder::Init_GetOfflineResult_Request_offline_recognise_start();
}

}  // namespace wheeltec_mic_msg


namespace wheeltec_mic_msg
{

namespace srv
{

namespace builder
{

class Init_GetOfflineResult_Response_text
{
public:
  explicit Init_GetOfflineResult_Response_text(::wheeltec_mic_msg::srv::GetOfflineResult_Response & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::srv::GetOfflineResult_Response text(::wheeltec_mic_msg::srv::GetOfflineResult_Response::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::GetOfflineResult_Response msg_;
};

class Init_GetOfflineResult_Response_fail_reason
{
public:
  explicit Init_GetOfflineResult_Response_fail_reason(::wheeltec_mic_msg::srv::GetOfflineResult_Response & msg)
  : msg_(msg)
  {}
  Init_GetOfflineResult_Response_text fail_reason(::wheeltec_mic_msg::srv::GetOfflineResult_Response::_fail_reason_type arg)
  {
    msg_.fail_reason = std::move(arg);
    return Init_GetOfflineResult_Response_text(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::GetOfflineResult_Response msg_;
};

class Init_GetOfflineResult_Response_result
{
public:
  Init_GetOfflineResult_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetOfflineResult_Response_fail_reason result(::wheeltec_mic_msg::srv::GetOfflineResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetOfflineResult_Response_fail_reason(msg_);
  }

private:
  ::wheeltec_mic_msg::srv::GetOfflineResult_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::srv::GetOfflineResult_Response>()
{
  return wheeltec_mic_msg::srv::builder::Init_GetOfflineResult_Response_result();
}

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__GET_OFFLINE_RESULT__BUILDER_HPP_

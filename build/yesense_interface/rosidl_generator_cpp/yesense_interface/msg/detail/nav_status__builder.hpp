// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/NavStatus.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/nav_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_NavStatus_gnss_status
{
public:
  explicit Init_NavStatus_gnss_status(::yesense_interface::msg::NavStatus & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::NavStatus gnss_status(::yesense_interface::msg::NavStatus::_gnss_status_type arg)
  {
    msg_.gnss_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::NavStatus msg_;
};

class Init_NavStatus_fusion_status
{
public:
  Init_NavStatus_fusion_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavStatus_gnss_status fusion_status(::yesense_interface::msg::NavStatus::_fusion_status_type arg)
  {
    msg_.fusion_status = std::move(arg);
    return Init_NavStatus_gnss_status(msg_);
  }

private:
  ::yesense_interface::msg::NavStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::NavStatus>()
{
  return yesense_interface::msg::builder::Init_NavStatus_fusion_status();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__BUILDER_HPP_

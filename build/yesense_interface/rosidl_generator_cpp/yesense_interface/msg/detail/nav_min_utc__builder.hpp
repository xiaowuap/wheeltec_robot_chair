// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/NavMinUtc.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/nav_min_utc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_NavMinUtc_utc
{
public:
  explicit Init_NavMinUtc_utc(::yesense_interface::msg::NavMinUtc & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::NavMinUtc utc(::yesense_interface::msg::NavMinUtc::_utc_type arg)
  {
    msg_.utc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::NavMinUtc msg_;
};

class Init_NavMinUtc_nav_basic
{
public:
  Init_NavMinUtc_nav_basic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavMinUtc_utc nav_basic(::yesense_interface::msg::NavMinUtc::_nav_basic_type arg)
  {
    msg_.nav_basic = std::move(arg);
    return Init_NavMinUtc_utc(msg_);
  }

private:
  ::yesense_interface::msg::NavMinUtc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::NavMinUtc>()
{
  return yesense_interface::msg::builder::Init_NavMinUtc_nav_basic();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__BUILDER_HPP_

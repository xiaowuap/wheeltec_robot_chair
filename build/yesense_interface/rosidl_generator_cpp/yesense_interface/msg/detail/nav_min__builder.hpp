// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/NavMin.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/nav_min__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_NavMin_euler
{
public:
  explicit Init_NavMin_euler(::yesense_interface::msg::NavMin & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::NavMin euler(::yesense_interface::msg::NavMin::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::NavMin msg_;
};

class Init_NavMin_pos
{
public:
  Init_NavMin_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavMin_euler pos(::yesense_interface::msg::NavMin::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_NavMin_euler(msg_);
  }

private:
  ::yesense_interface::msg::NavMin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::NavMin>()
{
  return yesense_interface::msg::builder::Init_NavMin_pos();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__BUILDER_HPP_

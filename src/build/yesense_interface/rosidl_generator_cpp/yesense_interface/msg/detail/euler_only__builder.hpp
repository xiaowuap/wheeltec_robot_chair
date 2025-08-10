// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/EulerOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/euler_only__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_EulerOnly_euler
{
public:
  explicit Init_EulerOnly_euler(::yesense_interface::msg::EulerOnly & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::EulerOnly euler(::yesense_interface::msg::EulerOnly::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::EulerOnly msg_;
};

class Init_EulerOnly_tid
{
public:
  Init_EulerOnly_tid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerOnly_euler tid(::yesense_interface::msg::EulerOnly::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return Init_EulerOnly_euler(msg_);
  }

private:
  ::yesense_interface::msg::EulerOnly msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::EulerOnly>()
{
  return yesense_interface::msg::builder::Init_EulerOnly_tid();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__BUILDER_HPP_

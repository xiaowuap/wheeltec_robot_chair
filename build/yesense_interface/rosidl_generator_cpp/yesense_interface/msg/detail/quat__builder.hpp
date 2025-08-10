// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/Quat.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__QUAT__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__QUAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/quat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_Quat_q3
{
public:
  explicit Init_Quat_q3(::yesense_interface::msg::Quat & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::Quat q3(::yesense_interface::msg::Quat::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::Quat msg_;
};

class Init_Quat_q2
{
public:
  explicit Init_Quat_q2(::yesense_interface::msg::Quat & msg)
  : msg_(msg)
  {}
  Init_Quat_q3 q2(::yesense_interface::msg::Quat::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_Quat_q3(msg_);
  }

private:
  ::yesense_interface::msg::Quat msg_;
};

class Init_Quat_q1
{
public:
  explicit Init_Quat_q1(::yesense_interface::msg::Quat & msg)
  : msg_(msg)
  {}
  Init_Quat_q2 q1(::yesense_interface::msg::Quat::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_Quat_q2(msg_);
  }

private:
  ::yesense_interface::msg::Quat msg_;
};

class Init_Quat_q0
{
public:
  Init_Quat_q0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quat_q1 q0(::yesense_interface::msg::Quat::_q0_type arg)
  {
    msg_.q0 = std::move(arg);
    return Init_Quat_q1(msg_);
  }

private:
  ::yesense_interface::msg::Quat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::Quat>()
{
  return yesense_interface::msg::builder::Init_Quat_q0();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__QUAT__BUILDER_HPP_

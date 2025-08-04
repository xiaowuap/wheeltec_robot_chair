// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/RobotLord.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/robot_lord__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_RobotLord_quat
{
public:
  explicit Init_RobotLord_quat(::yesense_interface::msg::RobotLord & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::RobotLord quat(::yesense_interface::msg::RobotLord::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::RobotLord msg_;
};

class Init_RobotLord_gyro
{
public:
  explicit Init_RobotLord_gyro(::yesense_interface::msg::RobotLord & msg)
  : msg_(msg)
  {}
  Init_RobotLord_quat gyro(::yesense_interface::msg::RobotLord::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_RobotLord_quat(msg_);
  }

private:
  ::yesense_interface::msg::RobotLord msg_;
};

class Init_RobotLord_acc
{
public:
  explicit Init_RobotLord_acc(::yesense_interface::msg::RobotLord & msg)
  : msg_(msg)
  {}
  Init_RobotLord_gyro acc(::yesense_interface::msg::RobotLord::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_RobotLord_gyro(msg_);
  }

private:
  ::yesense_interface::msg::RobotLord msg_;
};

class Init_RobotLord_tid
{
public:
  Init_RobotLord_tid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotLord_acc tid(::yesense_interface::msg::RobotLord::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return Init_RobotLord_acc(msg_);
  }

private:
  ::yesense_interface::msg::RobotLord msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::RobotLord>()
{
  return yesense_interface::msg::builder::Init_RobotLord_tid();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__BUILDER_HPP_

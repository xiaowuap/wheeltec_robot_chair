// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/EulerAngle.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/euler_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_EulerAngle_yaw
{
public:
  explicit Init_EulerAngle_yaw(::yesense_interface::msg::EulerAngle & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::EulerAngle yaw(::yesense_interface::msg::EulerAngle::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::EulerAngle msg_;
};

class Init_EulerAngle_roll
{
public:
  explicit Init_EulerAngle_roll(::yesense_interface::msg::EulerAngle & msg)
  : msg_(msg)
  {}
  Init_EulerAngle_yaw roll(::yesense_interface::msg::EulerAngle::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EulerAngle_yaw(msg_);
  }

private:
  ::yesense_interface::msg::EulerAngle msg_;
};

class Init_EulerAngle_pitch
{
public:
  Init_EulerAngle_pitch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerAngle_roll pitch(::yesense_interface::msg::EulerAngle::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EulerAngle_roll(msg_);
  }

private:
  ::yesense_interface::msg::EulerAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::EulerAngle>()
{
  return yesense_interface::msg::builder::Init_EulerAngle_pitch();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__BUILDER_HPP_

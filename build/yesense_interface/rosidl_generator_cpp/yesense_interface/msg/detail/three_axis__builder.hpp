// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/ThreeAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__THREE_AXIS__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__THREE_AXIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/three_axis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_ThreeAxis_z
{
public:
  explicit Init_ThreeAxis_z(::yesense_interface::msg::ThreeAxis & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::ThreeAxis z(::yesense_interface::msg::ThreeAxis::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::ThreeAxis msg_;
};

class Init_ThreeAxis_y
{
public:
  explicit Init_ThreeAxis_y(::yesense_interface::msg::ThreeAxis & msg)
  : msg_(msg)
  {}
  Init_ThreeAxis_z y(::yesense_interface::msg::ThreeAxis::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ThreeAxis_z(msg_);
  }

private:
  ::yesense_interface::msg::ThreeAxis msg_;
};

class Init_ThreeAxis_x
{
public:
  Init_ThreeAxis_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThreeAxis_y x(::yesense_interface::msg::ThreeAxis::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ThreeAxis_y(msg_);
  }

private:
  ::yesense_interface::msg::ThreeAxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::ThreeAxis>()
{
  return yesense_interface::msg::builder::Init_ThreeAxis_x();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__THREE_AXIS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__VEL__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_Vel_vel_u
{
public:
  explicit Init_Vel_vel_u(::yesense_interface::msg::Vel & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::Vel vel_u(::yesense_interface::msg::Vel::_vel_u_type arg)
  {
    msg_.vel_u = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::Vel msg_;
};

class Init_Vel_vel_n
{
public:
  explicit Init_Vel_vel_n(::yesense_interface::msg::Vel & msg)
  : msg_(msg)
  {}
  Init_Vel_vel_u vel_n(::yesense_interface::msg::Vel::_vel_n_type arg)
  {
    msg_.vel_n = std::move(arg);
    return Init_Vel_vel_u(msg_);
  }

private:
  ::yesense_interface::msg::Vel msg_;
};

class Init_Vel_vel_e
{
public:
  Init_Vel_vel_e()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vel_vel_n vel_e(::yesense_interface::msg::Vel::_vel_e_type arg)
  {
    msg_.vel_e = std::move(arg);
    return Init_Vel_vel_n(msg_);
  }

private:
  ::yesense_interface::msg::Vel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::Vel>()
{
  return yesense_interface::msg::builder::Init_Vel_vel_e();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__VEL__BUILDER_HPP_

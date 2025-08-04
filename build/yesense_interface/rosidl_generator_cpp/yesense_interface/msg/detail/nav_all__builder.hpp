// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/NavAll.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/nav_all__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_NavAll_pressure
{
public:
  explicit Init_NavAll_pressure(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::NavAll pressure(::yesense_interface::msg::NavAll::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_utc
{
public:
  explicit Init_NavAll_utc(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_pressure utc(::yesense_interface::msg::NavAll::_utc_type arg)
  {
    msg_.utc = std::move(arg);
    return Init_NavAll_pressure(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_vel
{
public:
  explicit Init_NavAll_vel(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_utc vel(::yesense_interface::msg::NavAll::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_NavAll_utc(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_status
{
public:
  explicit Init_NavAll_status(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_vel status(::yesense_interface::msg::NavAll::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavAll_vel(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_pos
{
public:
  explicit Init_NavAll_pos(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_status pos(::yesense_interface::msg::NavAll::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_NavAll_status(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_temp
{
public:
  explicit Init_NavAll_temp(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_pos temp(::yesense_interface::msg::NavAll::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_NavAll_pos(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_quat
{
public:
  explicit Init_NavAll_quat(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_temp quat(::yesense_interface::msg::NavAll::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return Init_NavAll_temp(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_euler
{
public:
  explicit Init_NavAll_euler(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_quat euler(::yesense_interface::msg::NavAll::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return Init_NavAll_quat(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_gyro
{
public:
  explicit Init_NavAll_gyro(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_euler gyro(::yesense_interface::msg::NavAll::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_NavAll_euler(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_acc
{
public:
  explicit Init_NavAll_acc(::yesense_interface::msg::NavAll & msg)
  : msg_(msg)
  {}
  Init_NavAll_gyro acc(::yesense_interface::msg::NavAll::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_NavAll_gyro(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

class Init_NavAll_tid
{
public:
  Init_NavAll_tid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavAll_acc tid(::yesense_interface::msg::NavAll::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return Init_NavAll_acc(msg_);
  }

private:
  ::yesense_interface::msg::NavAll msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::NavAll>()
{
  return yesense_interface::msg::builder::Init_NavAll_tid();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__BUILDER_HPP_

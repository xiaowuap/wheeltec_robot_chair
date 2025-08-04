// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__BUILDER_HPP_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheeltec_mic_msg/msg/detail/motion_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheeltec_mic_msg
{

namespace msg
{

namespace builder
{

class Init_MotionControl_goal_reached_flag
{
public:
  explicit Init_MotionControl_goal_reached_flag(::wheeltec_mic_msg::msg::MotionControl & msg)
  : msg_(msg)
  {}
  ::wheeltec_mic_msg::msg::MotionControl goal_reached_flag(::wheeltec_mic_msg::msg::MotionControl::_goal_reached_flag_type arg)
  {
    msg_.goal_reached_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::MotionControl msg_;
};

class Init_MotionControl_follow_flag
{
public:
  explicit Init_MotionControl_follow_flag(::wheeltec_mic_msg::msg::MotionControl & msg)
  : msg_(msg)
  {}
  Init_MotionControl_goal_reached_flag follow_flag(::wheeltec_mic_msg::msg::MotionControl::_follow_flag_type arg)
  {
    msg_.follow_flag = std::move(arg);
    return Init_MotionControl_goal_reached_flag(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::MotionControl msg_;
};

class Init_MotionControl_cmd_vel_flag
{
public:
  explicit Init_MotionControl_cmd_vel_flag(::wheeltec_mic_msg::msg::MotionControl & msg)
  : msg_(msg)
  {}
  Init_MotionControl_follow_flag cmd_vel_flag(::wheeltec_mic_msg::msg::MotionControl::_cmd_vel_flag_type arg)
  {
    msg_.cmd_vel_flag = std::move(arg);
    return Init_MotionControl_follow_flag(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::MotionControl msg_;
};

class Init_MotionControl_angular_z
{
public:
  explicit Init_MotionControl_angular_z(::wheeltec_mic_msg::msg::MotionControl & msg)
  : msg_(msg)
  {}
  Init_MotionControl_cmd_vel_flag angular_z(::wheeltec_mic_msg::msg::MotionControl::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_MotionControl_cmd_vel_flag(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::MotionControl msg_;
};

class Init_MotionControl_linear_y
{
public:
  explicit Init_MotionControl_linear_y(::wheeltec_mic_msg::msg::MotionControl & msg)
  : msg_(msg)
  {}
  Init_MotionControl_angular_z linear_y(::wheeltec_mic_msg::msg::MotionControl::_linear_y_type arg)
  {
    msg_.linear_y = std::move(arg);
    return Init_MotionControl_angular_z(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::MotionControl msg_;
};

class Init_MotionControl_linear_x
{
public:
  Init_MotionControl_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionControl_linear_y linear_x(::wheeltec_mic_msg::msg::MotionControl::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_MotionControl_linear_y(msg_);
  }

private:
  ::wheeltec_mic_msg::msg::MotionControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheeltec_mic_msg::msg::MotionControl>()
{
  return wheeltec_mic_msg::msg::builder::Init_MotionControl_linear_x();
}

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__BUILDER_HPP_

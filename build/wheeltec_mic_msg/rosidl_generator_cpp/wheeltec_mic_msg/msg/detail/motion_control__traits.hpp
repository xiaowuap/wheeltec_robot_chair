// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/msg/detail/motion_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_x
  {
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << ", ";
  }

  // member: linear_y
  {
    out << "linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_y, out);
    out << ", ";
  }

  // member: angular_z
  {
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << ", ";
  }

  // member: cmd_vel_flag
  {
    out << "cmd_vel_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_flag, out);
    out << ", ";
  }

  // member: follow_flag
  {
    out << "follow_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.follow_flag, out);
    out << ", ";
  }

  // member: goal_reached_flag
  {
    out << "goal_reached_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_reached_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << "\n";
  }

  // member: linear_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_y, out);
    out << "\n";
  }

  // member: angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << "\n";
  }

  // member: cmd_vel_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_flag, out);
    out << "\n";
  }

  // member: follow_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "follow_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.follow_flag, out);
    out << "\n";
  }

  // member: goal_reached_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_reached_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_reached_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wheeltec_mic_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_mic_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_mic_msg::msg::MotionControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::msg::MotionControl & msg)
{
  return wheeltec_mic_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::msg::MotionControl>()
{
  return "wheeltec_mic_msg::msg::MotionControl";
}

template<>
inline const char * name<wheeltec_mic_msg::msg::MotionControl>()
{
  return "wheeltec_mic_msg/msg/MotionControl";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::msg::MotionControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::msg::MotionControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wheeltec_mic_msg::msg::MotionControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__TRAITS_HPP_

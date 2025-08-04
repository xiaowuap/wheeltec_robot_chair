// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/RobotLord.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/robot_lord__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__traits.hpp"
// Member 'acc'
// Member 'gyro'
#include "yesense_interface/msg/detail/three_axis__traits.hpp"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotLord & msg,
  std::ostream & out)
{
  out << "{";
  // member: tid
  {
    out << "tid: ";
    to_flow_style_yaml(msg.tid, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    to_flow_style_yaml(msg.acc, out);
    out << ", ";
  }

  // member: gyro
  {
    out << "gyro: ";
    to_flow_style_yaml(msg.gyro, out);
    out << ", ";
  }

  // member: quat
  {
    out << "quat: ";
    to_flow_style_yaml(msg.quat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotLord & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tid:\n";
    to_block_style_yaml(msg.tid, out, indentation + 2);
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc:\n";
    to_block_style_yaml(msg.acc, out, indentation + 2);
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro:\n";
    to_block_style_yaml(msg.gyro, out, indentation + 2);
  }

  // member: quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quat:\n";
    to_block_style_yaml(msg.quat, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotLord & msg, bool use_flow_style = false)
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

}  // namespace yesense_interface

namespace rosidl_generator_traits
{

[[deprecated("use yesense_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yesense_interface::msg::RobotLord & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::RobotLord & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::RobotLord>()
{
  return "yesense_interface::msg::RobotLord";
}

template<>
inline const char * name<yesense_interface::msg::RobotLord>()
{
  return "yesense_interface/msg/RobotLord";
}

template<>
struct has_fixed_size<yesense_interface::msg::RobotLord>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::Quat>::value && has_fixed_size<yesense_interface::msg::ThreeAxis>::value && has_fixed_size<yesense_interface::msg::Tid>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::RobotLord>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::Quat>::value && has_bounded_size<yesense_interface::msg::ThreeAxis>::value && has_bounded_size<yesense_interface::msg::Tid>::value> {};

template<>
struct is_message<yesense_interface::msg::RobotLord>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__TRAITS_HPP_

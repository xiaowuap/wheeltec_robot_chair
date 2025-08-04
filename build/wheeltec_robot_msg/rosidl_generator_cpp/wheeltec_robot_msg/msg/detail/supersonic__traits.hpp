// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_robot_msg:msg/Supersonic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__TRAITS_HPP_
#define WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_robot_msg/msg/detail/supersonic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace wheeltec_robot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Supersonic & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: distance_a
  {
    out << "distance_a: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_a, out);
    out << ", ";
  }

  // member: distance_b
  {
    out << "distance_b: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_b, out);
    out << ", ";
  }

  // member: distance_c
  {
    out << "distance_c: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_c, out);
    out << ", ";
  }

  // member: distance_d
  {
    out << "distance_d: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_d, out);
    out << ", ";
  }

  // member: distance_e
  {
    out << "distance_e: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_e, out);
    out << ", ";
  }

  // member: distance_f
  {
    out << "distance_f: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_f, out);
    out << ", ";
  }

  // member: distance_g
  {
    out << "distance_g: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_g, out);
    out << ", ";
  }

  // member: distance_h
  {
    out << "distance_h: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_h, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Supersonic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: distance_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_a: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_a, out);
    out << "\n";
  }

  // member: distance_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_b: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_b, out);
    out << "\n";
  }

  // member: distance_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_c: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_c, out);
    out << "\n";
  }

  // member: distance_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_d: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_d, out);
    out << "\n";
  }

  // member: distance_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_e: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_e, out);
    out << "\n";
  }

  // member: distance_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_f: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_f, out);
    out << "\n";
  }

  // member: distance_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_g: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_g, out);
    out << "\n";
  }

  // member: distance_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_h: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_h, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Supersonic & msg, bool use_flow_style = false)
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

}  // namespace wheeltec_robot_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_robot_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_robot_msg::msg::Supersonic & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_robot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_robot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_robot_msg::msg::Supersonic & msg)
{
  return wheeltec_robot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_robot_msg::msg::Supersonic>()
{
  return "wheeltec_robot_msg::msg::Supersonic";
}

template<>
inline const char * name<wheeltec_robot_msg::msg::Supersonic>()
{
  return "wheeltec_robot_msg/msg/Supersonic";
}

template<>
struct has_fixed_size<wheeltec_robot_msg::msg::Supersonic>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<wheeltec_robot_msg::msg::Supersonic>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<wheeltec_robot_msg::msg::Supersonic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__TRAITS_HPP_

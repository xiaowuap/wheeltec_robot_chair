// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Vector3f.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__VECTOR3F__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__VECTOR3F__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/vector3f__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vector3f & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vector3f & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vector3f & msg, bool use_flow_style = false)
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

}  // namespace bodyreader_msg

namespace rosidl_generator_traits
{

[[deprecated("use bodyreader_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyreader_msg::msg::Vector3f & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Vector3f & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Vector3f>()
{
  return "bodyreader_msg::msg::Vector3f";
}

template<>
inline const char * name<bodyreader_msg::msg::Vector3f>()
{
  return "bodyreader_msg/msg/Vector3f";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Vector3f>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Vector3f>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyreader_msg::msg::Vector3f>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__VECTOR3F__TRAITS_HPP_

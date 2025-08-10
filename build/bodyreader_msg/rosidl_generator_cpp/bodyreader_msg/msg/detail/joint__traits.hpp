// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__JOINT__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'depthposition'
#include "bodyreader_msg/msg/detail/vector2f__traits.hpp"
// Member 'worldposition'
#include "bodyreader_msg/msg/detail/vector3f__traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joint & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: depthposition
  {
    out << "depthposition: ";
    to_flow_style_yaml(msg.depthposition, out);
    out << ", ";
  }

  // member: worldposition
  {
    out << "worldposition: ";
    to_flow_style_yaml(msg.worldposition, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: depthposition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depthposition:\n";
    to_block_style_yaml(msg.depthposition, out, indentation + 2);
  }

  // member: worldposition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "worldposition:\n";
    to_block_style_yaml(msg.worldposition, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joint & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Joint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Joint & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Joint>()
{
  return "bodyreader_msg::msg::Joint";
}

template<>
inline const char * name<bodyreader_msg::msg::Joint>()
{
  return "bodyreader_msg/msg/Joint";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Joint>
  : std::integral_constant<bool, has_fixed_size<bodyreader_msg::msg::Vector2f>::value && has_fixed_size<bodyreader_msg::msg::Vector3f>::value> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Joint>
  : std::integral_constant<bool, has_bounded_size<bodyreader_msg::msg::Vector2f>::value && has_bounded_size<bodyreader_msg::msg::Vector3f>::value> {};

template<>
struct is_message<bodyreader_msg::msg::Joint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__JOINT__TRAITS_HPP_

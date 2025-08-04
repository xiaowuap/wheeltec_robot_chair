// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Lockedcharrgb.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/lockedcharrgb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lockedcharrgb & msg,
  std::ostream & out)
{
  out << "{";
  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lockedcharrgb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lockedcharrgb & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Lockedcharrgb & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Lockedcharrgb & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Lockedcharrgb>()
{
  return "bodyreader_msg::msg::Lockedcharrgb";
}

template<>
inline const char * name<bodyreader_msg::msg::Lockedcharrgb>()
{
  return "bodyreader_msg/msg/Lockedcharrgb";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Lockedcharrgb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Lockedcharrgb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyreader_msg::msg::Lockedcharrgb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__TRAITS_HPP_

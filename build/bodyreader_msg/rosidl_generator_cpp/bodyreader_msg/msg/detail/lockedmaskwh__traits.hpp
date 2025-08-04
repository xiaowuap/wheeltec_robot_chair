// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/lockedmaskwh__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lockedmaskwh & msg,
  std::ostream & out)
{
  out << "{";
  // member: width_l
  {
    out << "width_l: ";
    rosidl_generator_traits::value_to_yaml(msg.width_l, out);
    out << ", ";
  }

  // member: width_r
  {
    out << "width_r: ";
    rosidl_generator_traits::value_to_yaml(msg.width_r, out);
    out << ", ";
  }

  // member: height_t
  {
    out << "height_t: ";
    rosidl_generator_traits::value_to_yaml(msg.height_t, out);
    out << ", ";
  }

  // member: height_b
  {
    out << "height_b: ";
    rosidl_generator_traits::value_to_yaml(msg.height_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lockedmaskwh & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width_l: ";
    rosidl_generator_traits::value_to_yaml(msg.width_l, out);
    out << "\n";
  }

  // member: width_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width_r: ";
    rosidl_generator_traits::value_to_yaml(msg.width_r, out);
    out << "\n";
  }

  // member: height_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_t: ";
    rosidl_generator_traits::value_to_yaml(msg.height_t, out);
    out << "\n";
  }

  // member: height_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_b: ";
    rosidl_generator_traits::value_to_yaml(msg.height_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lockedmaskwh & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Lockedmaskwh & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Lockedmaskwh & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Lockedmaskwh>()
{
  return "bodyreader_msg::msg::Lockedmaskwh";
}

template<>
inline const char * name<bodyreader_msg::msg::Lockedmaskwh>()
{
  return "bodyreader_msg/msg/Lockedmaskwh";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Lockedmaskwh>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Lockedmaskwh>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyreader_msg::msg::Lockedmaskwh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__TRAITS_HPP_

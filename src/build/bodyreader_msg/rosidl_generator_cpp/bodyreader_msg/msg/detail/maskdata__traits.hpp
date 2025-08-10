// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Maskdata.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__MASKDATA__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__MASKDATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/maskdata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Maskdata & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Maskdata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Maskdata & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Maskdata & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Maskdata & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Maskdata>()
{
  return "bodyreader_msg::msg::Maskdata";
}

template<>
inline const char * name<bodyreader_msg::msg::Maskdata>()
{
  return "bodyreader_msg/msg/Maskdata";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Maskdata>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Maskdata>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyreader_msg::msg::Maskdata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__MASKDATA__TRAITS_HPP_

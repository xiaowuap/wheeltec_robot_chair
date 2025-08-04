// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Bodylist.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYLIST__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODYLIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/bodylist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bodies'
#include "bodyreader_msg/msg/detail/body__traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bodylist & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: bodies
  {
    if (msg.bodies.size() == 0) {
      out << "bodies: []";
    } else {
      out << "bodies: [";
      size_t pending_items = msg.bodies.size();
      for (auto item : msg.bodies) {
        to_flow_style_yaml(item, out);
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
  const Bodylist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: bodies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bodies.size() == 0) {
      out << "bodies: []\n";
    } else {
      out << "bodies:\n";
      for (auto item : msg.bodies) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bodylist & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Bodylist & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Bodylist & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Bodylist>()
{
  return "bodyreader_msg::msg::Bodylist";
}

template<>
inline const char * name<bodyreader_msg::msg::Bodylist>()
{
  return "bodyreader_msg/msg/Bodylist";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Bodylist>
  : std::integral_constant<bool, has_fixed_size<bodyreader_msg::msg::Body>::value> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Bodylist>
  : std::integral_constant<bool, has_bounded_size<bodyreader_msg::msg::Body>::value> {};

template<>
struct is_message<bodyreader_msg::msg::Bodylist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYLIST__TRAITS_HPP_

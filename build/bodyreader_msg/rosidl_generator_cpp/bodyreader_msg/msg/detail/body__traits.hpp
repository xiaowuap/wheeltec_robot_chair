// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODY__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/body__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centerofmass'
#include "bodyreader_msg/msg/detail/vector3f__traits.hpp"
// Member 'joints'
#include "bodyreader_msg/msg/detail/joint__traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Body & msg,
  std::ostream & out)
{
  out << "{";
  // member: bodyid
  {
    out << "bodyid: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyid, out);
    out << ", ";
  }

  // member: centerofmass
  {
    out << "centerofmass: ";
    to_flow_style_yaml(msg.centerofmass, out);
    out << ", ";
  }

  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
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
  const Body & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bodyid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bodyid: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyid, out);
    out << "\n";
  }

  // member: centerofmass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centerofmass:\n";
    to_block_style_yaml(msg.centerofmass, out, indentation + 2);
  }

  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Body & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Body & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Body & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Body>()
{
  return "bodyreader_msg::msg::Body";
}

template<>
inline const char * name<bodyreader_msg::msg::Body>()
{
  return "bodyreader_msg/msg/Body";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Body>
  : std::integral_constant<bool, has_fixed_size<bodyreader_msg::msg::Joint>::value && has_fixed_size<bodyreader_msg::msg::Vector3f>::value> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Body>
  : std::integral_constant<bool, has_bounded_size<bodyreader_msg::msg::Joint>::value && has_bounded_size<bodyreader_msg::msg::Vector3f>::value> {};

template<>
struct is_message<bodyreader_msg::msg::Body>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__BODY__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/PosOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/pos_only__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__traits.hpp"
// Member 'pos'
#include "yesense_interface/msg/detail/gnss_pos__traits.hpp"
// Member 'status'
#include "yesense_interface/msg/detail/nav_status__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PosOnly & msg,
  std::ostream & out)
{
  out << "{";
  // member: tid
  {
    out << "tid: ";
    to_flow_style_yaml(msg.tid, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosOnly & msg,
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

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosOnly & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::PosOnly & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::PosOnly & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::PosOnly>()
{
  return "yesense_interface::msg::PosOnly";
}

template<>
inline const char * name<yesense_interface::msg::PosOnly>()
{
  return "yesense_interface/msg/PosOnly";
}

template<>
struct has_fixed_size<yesense_interface::msg::PosOnly>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::GnssPos>::value && has_fixed_size<yesense_interface::msg::NavStatus>::value && has_fixed_size<yesense_interface::msg::Tid>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::PosOnly>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::GnssPos>::value && has_bounded_size<yesense_interface::msg::NavStatus>::value && has_bounded_size<yesense_interface::msg::Tid>::value> {};

template<>
struct is_message<yesense_interface::msg::PosOnly>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__TRAITS_HPP_

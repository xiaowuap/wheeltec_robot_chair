// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/NavMinUtc.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/nav_min_utc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nav_basic'
#include "yesense_interface/msg/detail/nav_min__traits.hpp"
// Member 'utc'
#include "yesense_interface/msg/detail/utc__traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavMinUtc & msg,
  std::ostream & out)
{
  out << "{";
  // member: nav_basic
  {
    out << "nav_basic: ";
    to_flow_style_yaml(msg.nav_basic, out);
    out << ", ";
  }

  // member: utc
  {
    out << "utc: ";
    to_flow_style_yaml(msg.utc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavMinUtc & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav_basic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_basic:\n";
    to_block_style_yaml(msg.nav_basic, out, indentation + 2);
  }

  // member: utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc:\n";
    to_block_style_yaml(msg.utc, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavMinUtc & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::NavMinUtc & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::NavMinUtc & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::NavMinUtc>()
{
  return "yesense_interface::msg::NavMinUtc";
}

template<>
inline const char * name<yesense_interface::msg::NavMinUtc>()
{
  return "yesense_interface/msg/NavMinUtc";
}

template<>
struct has_fixed_size<yesense_interface::msg::NavMinUtc>
  : std::integral_constant<bool, has_fixed_size<yesense_interface::msg::NavMin>::value && has_fixed_size<yesense_interface::msg::Utc>::value> {};

template<>
struct has_bounded_size<yesense_interface::msg::NavMinUtc>
  : std::integral_constant<bool, has_bounded_size<yesense_interface::msg::NavMin>::value && has_bounded_size<yesense_interface::msg::Utc>::value> {};

template<>
struct is_message<yesense_interface::msg::NavMinUtc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__TRAITS_HPP_

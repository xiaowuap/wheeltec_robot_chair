// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/NavStatus.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/nav_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: fusion_status
  {
    out << "fusion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_status, out);
    out << ", ";
  }

  // member: gnss_status
  {
    out << "gnss_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fusion_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_status, out);
    out << "\n";
  }

  // member: gnss_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavStatus & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::NavStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::NavStatus & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::NavStatus>()
{
  return "yesense_interface::msg::NavStatus";
}

template<>
inline const char * name<yesense_interface::msg::NavStatus>()
{
  return "yesense_interface/msg/NavStatus";
}

template<>
struct has_fixed_size<yesense_interface::msg::NavStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yesense_interface::msg::NavStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yesense_interface::msg::NavStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__TRAITS_HPP_

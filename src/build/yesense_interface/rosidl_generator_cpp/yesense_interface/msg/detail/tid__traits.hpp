// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/Tid.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__TID__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__TID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/tid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Tid & msg,
  std::ostream & out)
{
  out << "{";
  // member: tid
  {
    out << "tid: ";
    rosidl_generator_traits::value_to_yaml(msg.tid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tid: ";
    rosidl_generator_traits::value_to_yaml(msg.tid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tid & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::Tid & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::Tid & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::Tid>()
{
  return "yesense_interface::msg::Tid";
}

template<>
inline const char * name<yesense_interface::msg::Tid>()
{
  return "yesense_interface/msg/Tid";
}

template<>
struct has_fixed_size<yesense_interface::msg::Tid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yesense_interface::msg::Tid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yesense_interface::msg::Tid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__TID__TRAITS_HPP_

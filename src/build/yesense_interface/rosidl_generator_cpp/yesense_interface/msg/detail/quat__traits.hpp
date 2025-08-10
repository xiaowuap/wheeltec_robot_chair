// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yesense_interface:msg/Quat.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__QUAT__TRAITS_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__QUAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yesense_interface/msg/detail/quat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yesense_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Quat & msg,
  std::ostream & out)
{
  out << "{";
  // member: q0
  {
    out << "q0: ";
    rosidl_generator_traits::value_to_yaml(msg.q0, out);
    out << ", ";
  }

  // member: q1
  {
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << ", ";
  }

  // member: q2
  {
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << ", ";
  }

  // member: q3
  {
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Quat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q0: ";
    rosidl_generator_traits::value_to_yaml(msg.q0, out);
    out << "\n";
  }

  // member: q1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << "\n";
  }

  // member: q2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << "\n";
  }

  // member: q3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Quat & msg, bool use_flow_style = false)
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
  const yesense_interface::msg::Quat & msg,
  std::ostream & out, size_t indentation = 0)
{
  yesense_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yesense_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const yesense_interface::msg::Quat & msg)
{
  return yesense_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yesense_interface::msg::Quat>()
{
  return "yesense_interface::msg::Quat";
}

template<>
inline const char * name<yesense_interface::msg::Quat>()
{
  return "yesense_interface/msg/Quat";
}

template<>
struct has_fixed_size<yesense_interface::msg::Quat>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yesense_interface::msg::Quat>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yesense_interface::msg::Quat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YESENSE_INTERFACE__MSG__DETAIL__QUAT__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__TRAITS_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyreader_msg/msg/detail/bodyposture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyreader_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bodyposture & msg,
  std::ostream & out)
{
  out << "{";
  // member: bodyid
  {
    out << "bodyid: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyid, out);
    out << ", ";
  }

  // member: centerofmass_x
  {
    out << "centerofmass_x: ";
    rosidl_generator_traits::value_to_yaml(msg.centerofmass_x, out);
    out << ", ";
  }

  // member: centerofmass_y
  {
    out << "centerofmass_y: ";
    rosidl_generator_traits::value_to_yaml(msg.centerofmass_y, out);
    out << ", ";
  }

  // member: centerofmass_z
  {
    out << "centerofmass_z: ";
    rosidl_generator_traits::value_to_yaml(msg.centerofmass_z, out);
    out << ", ";
  }

  // member: left_arm_out
  {
    out << "left_arm_out: ";
    rosidl_generator_traits::value_to_yaml(msg.left_arm_out, out);
    out << ", ";
  }

  // member: right_arm_out
  {
    out << "right_arm_out: ";
    rosidl_generator_traits::value_to_yaml(msg.right_arm_out, out);
    out << ", ";
  }

  // member: left_hand_raised
  {
    out << "left_hand_raised: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hand_raised, out);
    out << ", ";
  }

  // member: right_hand_raised
  {
    out << "right_hand_raised: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hand_raised, out);
    out << ", ";
  }

  // member: akimibo
  {
    out << "akimibo: ";
    rosidl_generator_traits::value_to_yaml(msg.akimibo, out);
    out << ", ";
  }

  // member: left_foot_up
  {
    out << "left_foot_up: ";
    rosidl_generator_traits::value_to_yaml(msg.left_foot_up, out);
    out << ", ";
  }

  // member: right_foot_up
  {
    out << "right_foot_up: ";
    rosidl_generator_traits::value_to_yaml(msg.right_foot_up, out);
    out << ", ";
  }

  // member: fall
  {
    out << "fall: ";
    rosidl_generator_traits::value_to_yaml(msg.fall, out);
    out << ", ";
  }

  // member: tips
  {
    out << "tips: ";
    rosidl_generator_traits::value_to_yaml(msg.tips, out);
    out << ", ";
  }

  // member: lock_status
  {
    out << "lock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bodyposture & msg,
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

  // member: centerofmass_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centerofmass_x: ";
    rosidl_generator_traits::value_to_yaml(msg.centerofmass_x, out);
    out << "\n";
  }

  // member: centerofmass_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centerofmass_y: ";
    rosidl_generator_traits::value_to_yaml(msg.centerofmass_y, out);
    out << "\n";
  }

  // member: centerofmass_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centerofmass_z: ";
    rosidl_generator_traits::value_to_yaml(msg.centerofmass_z, out);
    out << "\n";
  }

  // member: left_arm_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_arm_out: ";
    rosidl_generator_traits::value_to_yaml(msg.left_arm_out, out);
    out << "\n";
  }

  // member: right_arm_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_arm_out: ";
    rosidl_generator_traits::value_to_yaml(msg.right_arm_out, out);
    out << "\n";
  }

  // member: left_hand_raised
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hand_raised: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hand_raised, out);
    out << "\n";
  }

  // member: right_hand_raised
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hand_raised: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hand_raised, out);
    out << "\n";
  }

  // member: akimibo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "akimibo: ";
    rosidl_generator_traits::value_to_yaml(msg.akimibo, out);
    out << "\n";
  }

  // member: left_foot_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_foot_up: ";
    rosidl_generator_traits::value_to_yaml(msg.left_foot_up, out);
    out << "\n";
  }

  // member: right_foot_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_foot_up: ";
    rosidl_generator_traits::value_to_yaml(msg.right_foot_up, out);
    out << "\n";
  }

  // member: fall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fall: ";
    rosidl_generator_traits::value_to_yaml(msg.fall, out);
    out << "\n";
  }

  // member: tips
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tips: ";
    rosidl_generator_traits::value_to_yaml(msg.tips, out);
    out << "\n";
  }

  // member: lock_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bodyposture & msg, bool use_flow_style = false)
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
  const bodyreader_msg::msg::Bodyposture & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyreader_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyreader_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyreader_msg::msg::Bodyposture & msg)
{
  return bodyreader_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyreader_msg::msg::Bodyposture>()
{
  return "bodyreader_msg::msg::Bodyposture";
}

template<>
inline const char * name<bodyreader_msg::msg::Bodyposture>()
{
  return "bodyreader_msg/msg/Bodyposture";
}

template<>
struct has_fixed_size<bodyreader_msg::msg::Bodyposture>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyreader_msg::msg::Bodyposture>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyreader_msg::msg::Bodyposture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__TRAITS_HPP_

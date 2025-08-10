// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/msg/detail/pcm_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PcmMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: pcm_buf
  {
    if (msg.pcm_buf.size() == 0) {
      out << "pcm_buf: []";
    } else {
      out << "pcm_buf: [";
      size_t pending_items = msg.pcm_buf.size();
      for (auto item : msg.pcm_buf) {
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
  const PcmMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: pcm_buf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pcm_buf.size() == 0) {
      out << "pcm_buf: []\n";
    } else {
      out << "pcm_buf:\n";
      for (auto item : msg.pcm_buf) {
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

inline std::string to_yaml(const PcmMsg & msg, bool use_flow_style = false)
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

}  // namespace wheeltec_mic_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_mic_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_mic_msg::msg::PcmMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::msg::PcmMsg & msg)
{
  return wheeltec_mic_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::msg::PcmMsg>()
{
  return "wheeltec_mic_msg::msg::PcmMsg";
}

template<>
inline const char * name<wheeltec_mic_msg::msg::PcmMsg>()
{
  return "wheeltec_mic_msg/msg/PcmMsg";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::msg::PcmMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::msg::PcmMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::msg::PcmMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__TRAITS_HPP_

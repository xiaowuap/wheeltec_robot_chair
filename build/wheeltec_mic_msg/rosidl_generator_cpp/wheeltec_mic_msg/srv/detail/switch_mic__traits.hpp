// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:srv/SwitchMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/srv/detail/switch_mic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchMic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mic_name
  {
    out << "mic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mic_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchMic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mic_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchMic_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_mic_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_mic_msg::srv::SwitchMic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::SwitchMic_Request & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SwitchMic_Request>()
{
  return "wheeltec_mic_msg::srv::SwitchMic_Request";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SwitchMic_Request>()
{
  return "wheeltec_mic_msg/srv/SwitchMic_Request";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SwitchMic_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SwitchMic_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::SwitchMic_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchMic_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchMic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchMic_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_generator_traits
{

[[deprecated("use wheeltec_mic_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheeltec_mic_msg::srv::SwitchMic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::SwitchMic_Response & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SwitchMic_Response>()
{
  return "wheeltec_mic_msg::srv::SwitchMic_Response";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SwitchMic_Response>()
{
  return "wheeltec_mic_msg/srv/SwitchMic_Response";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SwitchMic_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SwitchMic_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::SwitchMic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SwitchMic>()
{
  return "wheeltec_mic_msg::srv::SwitchMic";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SwitchMic>()
{
  return "wheeltec_mic_msg/srv/SwitchMic";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SwitchMic>
  : std::integral_constant<
    bool,
    has_fixed_size<wheeltec_mic_msg::srv::SwitchMic_Request>::value &&
    has_fixed_size<wheeltec_mic_msg::srv::SwitchMic_Response>::value
  >
{
};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SwitchMic>
  : std::integral_constant<
    bool,
    has_bounded_size<wheeltec_mic_msg::srv::SwitchMic_Request>::value &&
    has_bounded_size<wheeltec_mic_msg::srv::SwitchMic_Response>::value
  >
{
};

template<>
struct is_service<wheeltec_mic_msg::srv::SwitchMic>
  : std::true_type
{
};

template<>
struct is_service_request<wheeltec_mic_msg::srv::SwitchMic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wheeltec_mic_msg::srv::SwitchMic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__TRAITS_HPP_

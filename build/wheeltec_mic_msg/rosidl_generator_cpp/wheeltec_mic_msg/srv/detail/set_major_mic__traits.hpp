// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:srv/SetMajorMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/srv/detail/set_major_mic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMajorMic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mic_id
  {
    out << "mic_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mic_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMajorMic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mic_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mic_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mic_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMajorMic_Request & msg, bool use_flow_style = false)
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
  const wheeltec_mic_msg::srv::SetMajorMic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::SetMajorMic_Request & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SetMajorMic_Request>()
{
  return "wheeltec_mic_msg::srv::SetMajorMic_Request";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SetMajorMic_Request>()
{
  return "wheeltec_mic_msg/srv/SetMajorMic_Request";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SetMajorMic_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SetMajorMic_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wheeltec_mic_msg::srv::SetMajorMic_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMajorMic_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: fail_reason
  {
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMajorMic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: fail_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMajorMic_Response & msg, bool use_flow_style = false)
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
  const wheeltec_mic_msg::srv::SetMajorMic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::SetMajorMic_Response & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SetMajorMic_Response>()
{
  return "wheeltec_mic_msg::srv::SetMajorMic_Response";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SetMajorMic_Response>()
{
  return "wheeltec_mic_msg/srv/SetMajorMic_Response";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SetMajorMic_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SetMajorMic_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::SetMajorMic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SetMajorMic>()
{
  return "wheeltec_mic_msg::srv::SetMajorMic";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SetMajorMic>()
{
  return "wheeltec_mic_msg/srv/SetMajorMic";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SetMajorMic>
  : std::integral_constant<
    bool,
    has_fixed_size<wheeltec_mic_msg::srv::SetMajorMic_Request>::value &&
    has_fixed_size<wheeltec_mic_msg::srv::SetMajorMic_Response>::value
  >
{
};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SetMajorMic>
  : std::integral_constant<
    bool,
    has_bounded_size<wheeltec_mic_msg::srv::SetMajorMic_Request>::value &&
    has_bounded_size<wheeltec_mic_msg::srv::SetMajorMic_Response>::value
  >
{
};

template<>
struct is_service<wheeltec_mic_msg::srv::SetMajorMic>
  : std::true_type
{
};

template<>
struct is_service_request<wheeltec_mic_msg::srv::SetMajorMic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wheeltec_mic_msg::srv::SetMajorMic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__TRAITS_HPP_

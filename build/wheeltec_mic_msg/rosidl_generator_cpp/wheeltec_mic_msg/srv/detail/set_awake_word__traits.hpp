// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheeltec_mic_msg:srv/SetAwakeWord.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SET_AWAKE_WORD__TRAITS_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SET_AWAKE_WORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheeltec_mic_msg/srv/detail/set_awake_word__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAwakeWord_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: awake_word
  {
    out << "awake_word: ";
    rosidl_generator_traits::value_to_yaml(msg.awake_word, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAwakeWord_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: awake_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "awake_word: ";
    rosidl_generator_traits::value_to_yaml(msg.awake_word, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAwakeWord_Request & msg, bool use_flow_style = false)
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
  const wheeltec_mic_msg::srv::SetAwakeWord_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::SetAwakeWord_Request & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SetAwakeWord_Request>()
{
  return "wheeltec_mic_msg::srv::SetAwakeWord_Request";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SetAwakeWord_Request>()
{
  return "wheeltec_mic_msg/srv/SetAwakeWord_Request";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SetAwakeWord_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SetAwakeWord_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::SetAwakeWord_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wheeltec_mic_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAwakeWord_Response & msg,
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
  const SetAwakeWord_Response & msg,
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

inline std::string to_yaml(const SetAwakeWord_Response & msg, bool use_flow_style = false)
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
  const wheeltec_mic_msg::srv::SetAwakeWord_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheeltec_mic_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheeltec_mic_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const wheeltec_mic_msg::srv::SetAwakeWord_Response & msg)
{
  return wheeltec_mic_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SetAwakeWord_Response>()
{
  return "wheeltec_mic_msg::srv::SetAwakeWord_Response";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SetAwakeWord_Response>()
{
  return "wheeltec_mic_msg/srv/SetAwakeWord_Response";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SetAwakeWord_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SetAwakeWord_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wheeltec_mic_msg::srv::SetAwakeWord_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wheeltec_mic_msg::srv::SetAwakeWord>()
{
  return "wheeltec_mic_msg::srv::SetAwakeWord";
}

template<>
inline const char * name<wheeltec_mic_msg::srv::SetAwakeWord>()
{
  return "wheeltec_mic_msg/srv/SetAwakeWord";
}

template<>
struct has_fixed_size<wheeltec_mic_msg::srv::SetAwakeWord>
  : std::integral_constant<
    bool,
    has_fixed_size<wheeltec_mic_msg::srv::SetAwakeWord_Request>::value &&
    has_fixed_size<wheeltec_mic_msg::srv::SetAwakeWord_Response>::value
  >
{
};

template<>
struct has_bounded_size<wheeltec_mic_msg::srv::SetAwakeWord>
  : std::integral_constant<
    bool,
    has_bounded_size<wheeltec_mic_msg::srv::SetAwakeWord_Request>::value &&
    has_bounded_size<wheeltec_mic_msg::srv::SetAwakeWord_Response>::value
  >
{
};

template<>
struct is_service<wheeltec_mic_msg::srv::SetAwakeWord>
  : std::true_type
{
};

template<>
struct is_service_request<wheeltec_mic_msg::srv::SetAwakeWord_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wheeltec_mic_msg::srv::SetAwakeWord_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SET_AWAKE_WORD__TRAITS_HPP_

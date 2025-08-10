// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wheeltec_mic_msg:srv/SetMajorMic.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/srv/detail/set_major_mic__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wheeltec_mic_msg/srv/detail/set_major_mic__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wheeltec_mic_msg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_serialize(
  const wheeltec_mic_msg::srv::SetMajorMic_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mic_id
  cdr << ros_message.mic_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wheeltec_mic_msg::srv::SetMajorMic_Request & ros_message)
{
  // Member: mic_id
  cdr >> ros_message.mic_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
get_serialized_size(
  const wheeltec_mic_msg::srv::SetMajorMic_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mic_id
  {
    size_t item_size = sizeof(ros_message.mic_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
max_serialized_size_SetMajorMic_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: mic_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wheeltec_mic_msg::srv::SetMajorMic_Request;
    is_plain =
      (
      offsetof(DataType, mic_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetMajorMic_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wheeltec_mic_msg::srv::SetMajorMic_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMajorMic_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wheeltec_mic_msg::srv::SetMajorMic_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMajorMic_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wheeltec_mic_msg::srv::SetMajorMic_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMajorMic_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetMajorMic_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetMajorMic_Request__callbacks = {
  "wheeltec_mic_msg::srv",
  "SetMajorMic_Request",
  _SetMajorMic_Request__cdr_serialize,
  _SetMajorMic_Request__cdr_deserialize,
  _SetMajorMic_Request__get_serialized_size,
  _SetMajorMic_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMajorMic_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMajorMic_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wheeltec_mic_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<wheeltec_mic_msg::srv::SetMajorMic_Request>()
{
  return &wheeltec_mic_msg::srv::typesupport_fastrtps_cpp::_SetMajorMic_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, SetMajorMic_Request)() {
  return &wheeltec_mic_msg::srv::typesupport_fastrtps_cpp::_SetMajorMic_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wheeltec_mic_msg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_serialize(
  const wheeltec_mic_msg::srv::SetMajorMic_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << ros_message.result;
  // Member: fail_reason
  cdr << ros_message.fail_reason;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wheeltec_mic_msg::srv::SetMajorMic_Response & ros_message)
{
  // Member: result
  cdr >> ros_message.result;

  // Member: fail_reason
  cdr >> ros_message.fail_reason;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
get_serialized_size(
  const wheeltec_mic_msg::srv::SetMajorMic_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.result.size() + 1);
  // Member: fail_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.fail_reason.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wheeltec_mic_msg
max_serialized_size_SetMajorMic_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: result
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: fail_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wheeltec_mic_msg::srv::SetMajorMic_Response;
    is_plain =
      (
      offsetof(DataType, fail_reason) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetMajorMic_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wheeltec_mic_msg::srv::SetMajorMic_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMajorMic_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wheeltec_mic_msg::srv::SetMajorMic_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMajorMic_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wheeltec_mic_msg::srv::SetMajorMic_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMajorMic_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetMajorMic_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetMajorMic_Response__callbacks = {
  "wheeltec_mic_msg::srv",
  "SetMajorMic_Response",
  _SetMajorMic_Response__cdr_serialize,
  _SetMajorMic_Response__cdr_deserialize,
  _SetMajorMic_Response__get_serialized_size,
  _SetMajorMic_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMajorMic_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMajorMic_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wheeltec_mic_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<wheeltec_mic_msg::srv::SetMajorMic_Response>()
{
  return &wheeltec_mic_msg::srv::typesupport_fastrtps_cpp::_SetMajorMic_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, SetMajorMic_Response)() {
  return &wheeltec_mic_msg::srv::typesupport_fastrtps_cpp::_SetMajorMic_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace wheeltec_mic_msg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetMajorMic__callbacks = {
  "wheeltec_mic_msg::srv",
  "SetMajorMic",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, SetMajorMic_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, SetMajorMic_Response)(),
};

static rosidl_service_type_support_t _SetMajorMic__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMajorMic__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wheeltec_mic_msg
const rosidl_service_type_support_t *
get_service_type_support_handle<wheeltec_mic_msg::srv::SetMajorMic>()
{
  return &wheeltec_mic_msg::srv::typesupport_fastrtps_cpp::_SetMajorMic__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wheeltec_mic_msg, srv, SetMajorMic)() {
  return &wheeltec_mic_msg::srv::typesupport_fastrtps_cpp::_SetMajorMic__handle;
}

#ifdef __cplusplus
}
#endif

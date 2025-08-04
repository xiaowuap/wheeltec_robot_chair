// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wheeltec_mic_msg:srv/SetAwakeWord.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/srv/detail/set_awake_word__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wheeltec_mic_msg/srv/detail/set_awake_word__struct.h"
#include "wheeltec_mic_msg/srv/detail/set_awake_word__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // awake_word, threshold
#include "rosidl_runtime_c/string_functions.h"  // awake_word, threshold

// forward declare type support functions


using _SetAwakeWord_Request__ros_msg_type = wheeltec_mic_msg__srv__SetAwakeWord_Request;

static bool _SetAwakeWord_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetAwakeWord_Request__ros_msg_type * ros_message = static_cast<const _SetAwakeWord_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: awake_word
  {
    const rosidl_runtime_c__String * str = &ros_message->awake_word;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: threshold
  {
    const rosidl_runtime_c__String * str = &ros_message->threshold;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetAwakeWord_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetAwakeWord_Request__ros_msg_type * ros_message = static_cast<_SetAwakeWord_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: awake_word
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->awake_word.data) {
      rosidl_runtime_c__String__init(&ros_message->awake_word);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->awake_word,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'awake_word'\n");
      return false;
    }
  }

  // Field name: threshold
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->threshold.data) {
      rosidl_runtime_c__String__init(&ros_message->threshold);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->threshold,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'threshold'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t get_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetAwakeWord_Request__ros_msg_type * ros_message = static_cast<const _SetAwakeWord_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name awake_word
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->awake_word.size + 1);
  // field.name threshold
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->threshold.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetAwakeWord_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t max_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Request(
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

  // member: awake_word
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
  // member: threshold
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
    using DataType = wheeltec_mic_msg__srv__SetAwakeWord_Request;
    is_plain =
      (
      offsetof(DataType, threshold) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetAwakeWord_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetAwakeWord_Request = {
  "wheeltec_mic_msg::srv",
  "SetAwakeWord_Request",
  _SetAwakeWord_Request__cdr_serialize,
  _SetAwakeWord_Request__cdr_deserialize,
  _SetAwakeWord_Request__get_serialized_size,
  _SetAwakeWord_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetAwakeWord_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetAwakeWord_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, srv, SetAwakeWord_Request)() {
  return &_SetAwakeWord_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/set_awake_word__struct.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/set_awake_word__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // result
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // result

// forward declare type support functions


using _SetAwakeWord_Response__ros_msg_type = wheeltec_mic_msg__srv__SetAwakeWord_Response;

static bool _SetAwakeWord_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetAwakeWord_Response__ros_msg_type * ros_message = static_cast<const _SetAwakeWord_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: result
  {
    const rosidl_runtime_c__String * str = &ros_message->result;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetAwakeWord_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetAwakeWord_Response__ros_msg_type * ros_message = static_cast<_SetAwakeWord_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: result
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result.data) {
      rosidl_runtime_c__String__init(&ros_message->result);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t get_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetAwakeWord_Response__ros_msg_type * ros_message = static_cast<const _SetAwakeWord_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetAwakeWord_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wheeltec_mic_msg
size_t max_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
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
    using DataType = wheeltec_mic_msg__srv__SetAwakeWord_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetAwakeWord_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wheeltec_mic_msg__srv__SetAwakeWord_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetAwakeWord_Response = {
  "wheeltec_mic_msg::srv",
  "SetAwakeWord_Response",
  _SetAwakeWord_Response__cdr_serialize,
  _SetAwakeWord_Response__cdr_deserialize,
  _SetAwakeWord_Response__get_serialized_size,
  _SetAwakeWord_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetAwakeWord_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetAwakeWord_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, srv, SetAwakeWord_Response)() {
  return &_SetAwakeWord_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "wheeltec_mic_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wheeltec_mic_msg/srv/set_awake_word.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetAwakeWord__callbacks = {
  "wheeltec_mic_msg::srv",
  "SetAwakeWord",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, srv, SetAwakeWord_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, srv, SetAwakeWord_Response)(),
};

static rosidl_service_type_support_t SetAwakeWord__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetAwakeWord__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wheeltec_mic_msg, srv, SetAwakeWord)() {
  return &SetAwakeWord__handle;
}

#if defined(__cplusplus)
}
#endif

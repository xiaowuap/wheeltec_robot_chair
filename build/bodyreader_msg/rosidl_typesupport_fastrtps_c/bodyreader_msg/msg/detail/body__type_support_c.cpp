// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/body__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "bodyreader_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bodyreader_msg/msg/detail/body__struct.h"
#include "bodyreader_msg/msg/detail/body__functions.h"
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

#include "bodyreader_msg/msg/detail/joint__functions.h"  // joints
#include "bodyreader_msg/msg/detail/vector3f__functions.h"  // centerofmass

// forward declare type support functions
size_t get_serialized_size_bodyreader_msg__msg__Joint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_bodyreader_msg__msg__Joint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Joint)();
size_t get_serialized_size_bodyreader_msg__msg__Vector3f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_bodyreader_msg__msg__Vector3f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Vector3f)();


using _Body__ros_msg_type = bodyreader_msg__msg__Body;

static bool _Body__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Body__ros_msg_type * ros_message = static_cast<const _Body__ros_msg_type *>(untyped_ros_message);
  // Field name: bodyid
  {
    cdr << ros_message->bodyid;
  }

  // Field name: centerofmass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Vector3f
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->centerofmass, cdr))
    {
      return false;
    }
  }

  // Field name: joints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Joint
      )()->data);
    size_t size = 19;
    auto array_ptr = ros_message->joints;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Body__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Body__ros_msg_type * ros_message = static_cast<_Body__ros_msg_type *>(untyped_ros_message);
  // Field name: bodyid
  {
    cdr >> ros_message->bodyid;
  }

  // Field name: centerofmass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Vector3f
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->centerofmass))
    {
      return false;
    }
  }

  // Field name: joints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Joint
      )()->data);
    size_t size = 19;
    auto array_ptr = ros_message->joints;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bodyreader_msg
size_t get_serialized_size_bodyreader_msg__msg__Body(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Body__ros_msg_type * ros_message = static_cast<const _Body__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bodyid
  {
    size_t item_size = sizeof(ros_message->bodyid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name centerofmass

  current_alignment += get_serialized_size_bodyreader_msg__msg__Vector3f(
    &(ros_message->centerofmass), current_alignment);
  // field.name joints
  {
    size_t array_size = 19;
    auto array_ptr = ros_message->joints;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_bodyreader_msg__msg__Joint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Body__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bodyreader_msg__msg__Body(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bodyreader_msg
size_t max_serialized_size_bodyreader_msg__msg__Body(
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

  // member: bodyid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: centerofmass
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_bodyreader_msg__msg__Vector3f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joints
  {
    size_t array_size = 19;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_bodyreader_msg__msg__Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bodyreader_msg__msg__Body;
    is_plain =
      (
      offsetof(DataType, joints) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Body__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bodyreader_msg__msg__Body(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Body = {
  "bodyreader_msg::msg",
  "Body",
  _Body__cdr_serialize,
  _Body__cdr_deserialize,
  _Body__get_serialized_size,
  _Body__max_serialized_size
};

static rosidl_message_type_support_t _Body__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Body,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bodyreader_msg, msg, Body)() {
  return &_Body__type_support;
}

#if defined(__cplusplus)
}
#endif

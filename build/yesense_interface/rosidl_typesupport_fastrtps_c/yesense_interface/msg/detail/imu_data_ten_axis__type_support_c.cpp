// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/imu_data_ten_axis__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yesense_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yesense_interface/msg/detail/imu_data_ten_axis__struct.h"
#include "yesense_interface/msg/detail/imu_data_ten_axis__functions.h"
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

#include "yesense_interface/msg/detail/imu_data__functions.h"  // imu_basic
#include "yesense_interface/msg/detail/pressure__functions.h"  // pressure
#include "yesense_interface/msg/detail/three_axis__functions.h"  // mag_norm, mag_raw

// forward declare type support functions
size_t get_serialized_size_yesense_interface__msg__ImuData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yesense_interface__msg__ImuData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, ImuData)();
size_t get_serialized_size_yesense_interface__msg__Pressure(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yesense_interface__msg__Pressure(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, Pressure)();
size_t get_serialized_size_yesense_interface__msg__ThreeAxis(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yesense_interface__msg__ThreeAxis(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, ThreeAxis)();


using _ImuDataTenAxis__ros_msg_type = yesense_interface__msg__ImuDataTenAxis;

static bool _ImuDataTenAxis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImuDataTenAxis__ros_msg_type * ros_message = static_cast<const _ImuDataTenAxis__ros_msg_type *>(untyped_ros_message);
  // Field name: imu_basic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, ImuData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->imu_basic, cdr))
    {
      return false;
    }
  }

  // Field name: mag_norm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, ThreeAxis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mag_norm, cdr))
    {
      return false;
    }
  }

  // Field name: mag_raw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, ThreeAxis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mag_raw, cdr))
    {
      return false;
    }
  }

  // Field name: pressure
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, Pressure
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pressure, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ImuDataTenAxis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImuDataTenAxis__ros_msg_type * ros_message = static_cast<_ImuDataTenAxis__ros_msg_type *>(untyped_ros_message);
  // Field name: imu_basic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, ImuData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->imu_basic))
    {
      return false;
    }
  }

  // Field name: mag_norm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, ThreeAxis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mag_norm))
    {
      return false;
    }
  }

  // Field name: mag_raw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, ThreeAxis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mag_raw))
    {
      return false;
    }
  }

  // Field name: pressure
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yesense_interface, msg, Pressure
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pressure))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yesense_interface
size_t get_serialized_size_yesense_interface__msg__ImuDataTenAxis(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImuDataTenAxis__ros_msg_type * ros_message = static_cast<const _ImuDataTenAxis__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name imu_basic

  current_alignment += get_serialized_size_yesense_interface__msg__ImuData(
    &(ros_message->imu_basic), current_alignment);
  // field.name mag_norm

  current_alignment += get_serialized_size_yesense_interface__msg__ThreeAxis(
    &(ros_message->mag_norm), current_alignment);
  // field.name mag_raw

  current_alignment += get_serialized_size_yesense_interface__msg__ThreeAxis(
    &(ros_message->mag_raw), current_alignment);
  // field.name pressure

  current_alignment += get_serialized_size_yesense_interface__msg__Pressure(
    &(ros_message->pressure), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ImuDataTenAxis__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yesense_interface__msg__ImuDataTenAxis(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yesense_interface
size_t max_serialized_size_yesense_interface__msg__ImuDataTenAxis(
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

  // member: imu_basic
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yesense_interface__msg__ImuData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mag_norm
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yesense_interface__msg__ThreeAxis(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mag_raw
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yesense_interface__msg__ThreeAxis(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pressure
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yesense_interface__msg__Pressure(
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
    using DataType = yesense_interface__msg__ImuDataTenAxis;
    is_plain =
      (
      offsetof(DataType, pressure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImuDataTenAxis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yesense_interface__msg__ImuDataTenAxis(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImuDataTenAxis = {
  "yesense_interface::msg",
  "ImuDataTenAxis",
  _ImuDataTenAxis__cdr_serialize,
  _ImuDataTenAxis__cdr_deserialize,
  _ImuDataTenAxis__get_serialized_size,
  _ImuDataTenAxis__max_serialized_size
};

static rosidl_message_type_support_t _ImuDataTenAxis__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImuDataTenAxis,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yesense_interface, msg, ImuDataTenAxis)() {
  return &_ImuDataTenAxis__type_support;
}

#if defined(__cplusplus)
}
#endif

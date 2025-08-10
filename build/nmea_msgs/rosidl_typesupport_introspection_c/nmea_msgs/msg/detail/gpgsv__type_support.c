// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nmea_msgs/msg/detail/gpgsv__rosidl_typesupport_introspection_c.h"
#include "nmea_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nmea_msgs/msg/detail/gpgsv__functions.h"
#include "nmea_msgs/msg/detail/gpgsv__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `message_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `satellites`
#include "nmea_msgs/msg/gpgsv_satellite.h"
// Member `satellites`
#include "nmea_msgs/msg/detail/gpgsv_satellite__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nmea_msgs__msg__Gpgsv__init(message_memory);
}

void nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_fini_function(void * message_memory)
{
  nmea_msgs__msg__Gpgsv__fini(message_memory);
}

size_t nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__size_function__Gpgsv__satellites(
  const void * untyped_member)
{
  const nmea_msgs__msg__GpgsvSatellite__Sequence * member =
    (const nmea_msgs__msg__GpgsvSatellite__Sequence *)(untyped_member);
  return member->size;
}

const void * nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__get_const_function__Gpgsv__satellites(
  const void * untyped_member, size_t index)
{
  const nmea_msgs__msg__GpgsvSatellite__Sequence * member =
    (const nmea_msgs__msg__GpgsvSatellite__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__get_function__Gpgsv__satellites(
  void * untyped_member, size_t index)
{
  nmea_msgs__msg__GpgsvSatellite__Sequence * member =
    (nmea_msgs__msg__GpgsvSatellite__Sequence *)(untyped_member);
  return &member->data[index];
}

void nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__fetch_function__Gpgsv__satellites(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nmea_msgs__msg__GpgsvSatellite * item =
    ((const nmea_msgs__msg__GpgsvSatellite *)
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__get_const_function__Gpgsv__satellites(untyped_member, index));
  nmea_msgs__msg__GpgsvSatellite * value =
    (nmea_msgs__msg__GpgsvSatellite *)(untyped_value);
  *value = *item;
}

void nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__assign_function__Gpgsv__satellites(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nmea_msgs__msg__GpgsvSatellite * item =
    ((nmea_msgs__msg__GpgsvSatellite *)
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__get_function__Gpgsv__satellites(untyped_member, index));
  const nmea_msgs__msg__GpgsvSatellite * value =
    (const nmea_msgs__msg__GpgsvSatellite *)(untyped_value);
  *item = *value;
}

bool nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__resize_function__Gpgsv__satellites(
  void * untyped_member, size_t size)
{
  nmea_msgs__msg__GpgsvSatellite__Sequence * member =
    (nmea_msgs__msg__GpgsvSatellite__Sequence *)(untyped_member);
  nmea_msgs__msg__GpgsvSatellite__Sequence__fini(member);
  return nmea_msgs__msg__GpgsvSatellite__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsv, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsv, message_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsv, n_msgs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsv, msg_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_satellites",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsv, n_satellites),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "satellites",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsv, satellites),  // bytes offset in struct
    NULL,  // default value
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__size_function__Gpgsv__satellites,  // size() function pointer
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__get_const_function__Gpgsv__satellites,  // get_const(index) function pointer
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__get_function__Gpgsv__satellites,  // get(index) function pointer
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__fetch_function__Gpgsv__satellites,  // fetch(index, &value) function pointer
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__assign_function__Gpgsv__satellites,  // assign(index, value) function pointer
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__resize_function__Gpgsv__satellites  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_members = {
  "nmea_msgs__msg",  // message namespace
  "Gpgsv",  // message name
  6,  // number of fields
  sizeof(nmea_msgs__msg__Gpgsv),
  nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_member_array,  // message members
  nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_init_function,  // function to initialize message memory (memory has to be allocated)
  nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_type_support_handle = {
  0,
  &nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, Gpgsv)() {
  nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, GpgsvSatellite)();
  if (!nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_type_support_handle.typesupport_identifier) {
    nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nmea_msgs__msg__Gpgsv__rosidl_typesupport_introspection_c__Gpgsv_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

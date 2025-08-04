// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yesense_interface:msg/Utc.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yesense_interface/msg/detail/utc__rosidl_typesupport_introspection_c.h"
#include "yesense_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yesense_interface/msg/detail/utc__functions.h"
#include "yesense_interface/msg/detail/utc__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yesense_interface__msg__Utc__init(message_memory);
}

void yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_fini_function(void * message_memory)
{
  yesense_interface__msg__Utc__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_member_array[7] = {
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, hour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface__msg__Utc, ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_members = {
  "yesense_interface__msg",  // message namespace
  "Utc",  // message name
  7,  // number of fields
  sizeof(yesense_interface__msg__Utc),
  yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_member_array,  // message members
  yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_init_function,  // function to initialize message memory (memory has to be allocated)
  yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_type_support_handle = {
  0,
  &yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yesense_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yesense_interface, msg, Utc)() {
  if (!yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_type_support_handle.typesupport_identifier) {
    yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yesense_interface__msg__Utc__rosidl_typesupport_introspection_c__Utc_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

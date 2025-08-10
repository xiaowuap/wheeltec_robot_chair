// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wheeltec_mic_msg/msg/detail/motion_control__rosidl_typesupport_introspection_c.h"
#include "wheeltec_mic_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wheeltec_mic_msg/msg/detail/motion_control__functions.h"
#include "wheeltec_mic_msg/msg/detail/motion_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wheeltec_mic_msg__msg__MotionControl__init(message_memory);
}

void wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_fini_function(void * message_memory)
{
  wheeltec_mic_msg__msg__MotionControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_member_array[6] = {
  {
    "linear_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__msg__MotionControl, linear_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__msg__MotionControl, linear_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__msg__MotionControl, angular_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_vel_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__msg__MotionControl, cmd_vel_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "follow_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__msg__MotionControl, follow_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_reached_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheeltec_mic_msg__msg__MotionControl, goal_reached_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_members = {
  "wheeltec_mic_msg__msg",  // message namespace
  "MotionControl",  // message name
  6,  // number of fields
  sizeof(wheeltec_mic_msg__msg__MotionControl),
  wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_member_array,  // message members
  wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_init_function,  // function to initialize message memory (memory has to be allocated)
  wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle = {
  0,
  &wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wheeltec_mic_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheeltec_mic_msg, msg, MotionControl)() {
  if (!wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle.typesupport_identifier) {
    wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wheeltec_mic_msg__msg__MotionControl__rosidl_typesupport_introspection_c__MotionControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

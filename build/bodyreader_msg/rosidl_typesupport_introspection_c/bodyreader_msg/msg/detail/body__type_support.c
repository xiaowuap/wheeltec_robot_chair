// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyreader_msg/msg/detail/body__rosidl_typesupport_introspection_c.h"
#include "bodyreader_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyreader_msg/msg/detail/body__functions.h"
#include "bodyreader_msg/msg/detail/body__struct.h"


// Include directives for member types
// Member `centerofmass`
#include "bodyreader_msg/msg/vector3f.h"
// Member `centerofmass`
#include "bodyreader_msg/msg/detail/vector3f__rosidl_typesupport_introspection_c.h"
// Member `joints`
#include "bodyreader_msg/msg/joint.h"
// Member `joints`
#include "bodyreader_msg/msg/detail/joint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyreader_msg__msg__Body__init(message_memory);
}

void bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_fini_function(void * message_memory)
{
  bodyreader_msg__msg__Body__fini(message_memory);
}

size_t bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__size_function__Body__joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 19;
}

const void * bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__get_const_function__Body__joints(
  const void * untyped_member, size_t index)
{
  const bodyreader_msg__msg__Joint * member =
    (const bodyreader_msg__msg__Joint *)(untyped_member);
  return &member[index];
}

void * bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__get_function__Body__joints(
  void * untyped_member, size_t index)
{
  bodyreader_msg__msg__Joint * member =
    (bodyreader_msg__msg__Joint *)(untyped_member);
  return &member[index];
}

void bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__fetch_function__Body__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bodyreader_msg__msg__Joint * item =
    ((const bodyreader_msg__msg__Joint *)
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__get_const_function__Body__joints(untyped_member, index));
  bodyreader_msg__msg__Joint * value =
    (bodyreader_msg__msg__Joint *)(untyped_value);
  *value = *item;
}

void bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__assign_function__Body__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bodyreader_msg__msg__Joint * item =
    ((bodyreader_msg__msg__Joint *)
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__get_function__Body__joints(untyped_member, index));
  const bodyreader_msg__msg__Joint * value =
    (const bodyreader_msg__msg__Joint *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_member_array[3] = {
  {
    "bodyid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Body, bodyid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centerofmass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Body, centerofmass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    19,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Body, joints),  // bytes offset in struct
    NULL,  // default value
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__size_function__Body__joints,  // size() function pointer
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__get_const_function__Body__joints,  // get_const(index) function pointer
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__get_function__Body__joints,  // get(index) function pointer
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__fetch_function__Body__joints,  // fetch(index, &value) function pointer
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__assign_function__Body__joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_members = {
  "bodyreader_msg__msg",  // message namespace
  "Body",  // message name
  3,  // number of fields
  sizeof(bodyreader_msg__msg__Body),
  bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_member_array,  // message members
  bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle = {
  0,
  &bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyreader_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Body)() {
  bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Vector3f)();
  bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Joint)();
  if (!bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle.typesupport_identifier) {
    bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyreader_msg__msg__Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

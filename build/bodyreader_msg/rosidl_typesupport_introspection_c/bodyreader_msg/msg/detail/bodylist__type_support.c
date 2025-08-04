// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyreader_msg:msg/Bodylist.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyreader_msg/msg/detail/bodylist__rosidl_typesupport_introspection_c.h"
#include "bodyreader_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyreader_msg/msg/detail/bodylist__functions.h"
#include "bodyreader_msg/msg/detail/bodylist__struct.h"


// Include directives for member types
// Member `bodies`
#include "bodyreader_msg/msg/body.h"
// Member `bodies`
#include "bodyreader_msg/msg/detail/body__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyreader_msg__msg__Bodylist__init(message_memory);
}

void bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_fini_function(void * message_memory)
{
  bodyreader_msg__msg__Bodylist__fini(message_memory);
}

size_t bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__size_function__Bodylist__bodies(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__get_const_function__Bodylist__bodies(
  const void * untyped_member, size_t index)
{
  const bodyreader_msg__msg__Body * member =
    (const bodyreader_msg__msg__Body *)(untyped_member);
  return &member[index];
}

void * bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__get_function__Bodylist__bodies(
  void * untyped_member, size_t index)
{
  bodyreader_msg__msg__Body * member =
    (bodyreader_msg__msg__Body *)(untyped_member);
  return &member[index];
}

void bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__fetch_function__Bodylist__bodies(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bodyreader_msg__msg__Body * item =
    ((const bodyreader_msg__msg__Body *)
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__get_const_function__Bodylist__bodies(untyped_member, index));
  bodyreader_msg__msg__Body * value =
    (bodyreader_msg__msg__Body *)(untyped_value);
  *value = *item;
}

void bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__assign_function__Bodylist__bodies(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bodyreader_msg__msg__Body * item =
    ((bodyreader_msg__msg__Body *)
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__get_function__Bodylist__bodies(untyped_member, index));
  const bodyreader_msg__msg__Body * value =
    (const bodyreader_msg__msg__Body *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_member_array[2] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Bodylist, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bodies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Bodylist, bodies),  // bytes offset in struct
    NULL,  // default value
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__size_function__Bodylist__bodies,  // size() function pointer
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__get_const_function__Bodylist__bodies,  // get_const(index) function pointer
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__get_function__Bodylist__bodies,  // get(index) function pointer
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__fetch_function__Bodylist__bodies,  // fetch(index, &value) function pointer
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__assign_function__Bodylist__bodies,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_members = {
  "bodyreader_msg__msg",  // message namespace
  "Bodylist",  // message name
  2,  // number of fields
  sizeof(bodyreader_msg__msg__Bodylist),
  bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_member_array,  // message members
  bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_type_support_handle = {
  0,
  &bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyreader_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Bodylist)() {
  bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Body)();
  if (!bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_type_support_handle.typesupport_identifier) {
    bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyreader_msg__msg__Bodylist__rosidl_typesupport_introspection_c__Bodylist_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

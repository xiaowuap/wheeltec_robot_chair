// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyreader_msg:msg/Joint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyreader_msg/msg/detail/joint__rosidl_typesupport_introspection_c.h"
#include "bodyreader_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyreader_msg/msg/detail/joint__functions.h"
#include "bodyreader_msg/msg/detail/joint__struct.h"


// Include directives for member types
// Member `depthposition`
#include "bodyreader_msg/msg/vector2f.h"
// Member `depthposition`
#include "bodyreader_msg/msg/detail/vector2f__rosidl_typesupport_introspection_c.h"
// Member `worldposition`
#include "bodyreader_msg/msg/vector3f.h"
// Member `worldposition`
#include "bodyreader_msg/msg/detail/vector3f__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyreader_msg__msg__Joint__init(message_memory);
}

void bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_fini_function(void * message_memory)
{
  bodyreader_msg__msg__Joint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Joint, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depthposition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Joint, depthposition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "worldposition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg__msg__Joint, worldposition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_members = {
  "bodyreader_msg__msg",  // message namespace
  "Joint",  // message name
  3,  // number of fields
  sizeof(bodyreader_msg__msg__Joint),
  bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array,  // message members
  bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle = {
  0,
  &bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyreader_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Joint)() {
  bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Vector2f)();
  bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyreader_msg, msg, Vector3f)();
  if (!bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle.typesupport_identifier) {
    bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyreader_msg__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

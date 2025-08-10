// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyreader_msg/msg/detail/lockedmaskwh__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bodyreader_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Lockedmaskwh_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyreader_msg::msg::Lockedmaskwh(_init);
}

void Lockedmaskwh_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyreader_msg::msg::Lockedmaskwh *>(message_memory);
  typed_message->~Lockedmaskwh();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Lockedmaskwh_message_member_array[4] = {
  {
    "width_l",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedmaskwh, width_l),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width_r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedmaskwh, width_r),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedmaskwh, height_t),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height_b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedmaskwh, height_b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Lockedmaskwh_message_members = {
  "bodyreader_msg::msg",  // message namespace
  "Lockedmaskwh",  // message name
  4,  // number of fields
  sizeof(bodyreader_msg::msg::Lockedmaskwh),
  Lockedmaskwh_message_member_array,  // message members
  Lockedmaskwh_init_function,  // function to initialize message memory (memory has to be allocated)
  Lockedmaskwh_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Lockedmaskwh_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Lockedmaskwh_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bodyreader_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyreader_msg::msg::Lockedmaskwh>()
{
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Lockedmaskwh_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyreader_msg, msg, Lockedmaskwh)() {
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Lockedmaskwh_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

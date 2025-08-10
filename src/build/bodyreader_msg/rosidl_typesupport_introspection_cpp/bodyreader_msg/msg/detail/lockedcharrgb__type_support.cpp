// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Lockedcharrgb.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyreader_msg/msg/detail/lockedcharrgb__struct.hpp"
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

void Lockedcharrgb_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyreader_msg::msg::Lockedcharrgb(_init);
}

void Lockedcharrgb_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyreader_msg::msg::Lockedcharrgb *>(message_memory);
  typed_message->~Lockedcharrgb();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Lockedcharrgb_message_member_array[3] = {
  {
    "r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedcharrgb, r),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "g",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedcharrgb, g),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Lockedcharrgb, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Lockedcharrgb_message_members = {
  "bodyreader_msg::msg",  // message namespace
  "Lockedcharrgb",  // message name
  3,  // number of fields
  sizeof(bodyreader_msg::msg::Lockedcharrgb),
  Lockedcharrgb_message_member_array,  // message members
  Lockedcharrgb_init_function,  // function to initialize message memory (memory has to be allocated)
  Lockedcharrgb_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Lockedcharrgb_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Lockedcharrgb_message_members,
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
get_message_type_support_handle<bodyreader_msg::msg::Lockedcharrgb>()
{
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Lockedcharrgb_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyreader_msg, msg, Lockedcharrgb)() {
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Lockedcharrgb_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

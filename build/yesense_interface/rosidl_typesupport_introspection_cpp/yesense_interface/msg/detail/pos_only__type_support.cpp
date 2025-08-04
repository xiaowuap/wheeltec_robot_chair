// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yesense_interface:msg/PosOnly.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yesense_interface/msg/detail/pos_only__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yesense_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PosOnly_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yesense_interface::msg::PosOnly(_init);
}

void PosOnly_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yesense_interface::msg::PosOnly *>(message_memory);
  typed_message->~PosOnly();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PosOnly_message_member_array[3] = {
  {
    "tid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yesense_interface::msg::Tid>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface::msg::PosOnly, tid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yesense_interface::msg::GnssPos>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface::msg::PosOnly, pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yesense_interface::msg::NavStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yesense_interface::msg::PosOnly, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PosOnly_message_members = {
  "yesense_interface::msg",  // message namespace
  "PosOnly",  // message name
  3,  // number of fields
  sizeof(yesense_interface::msg::PosOnly),
  PosOnly_message_member_array,  // message members
  PosOnly_init_function,  // function to initialize message memory (memory has to be allocated)
  PosOnly_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PosOnly_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PosOnly_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yesense_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yesense_interface::msg::PosOnly>()
{
  return &::yesense_interface::msg::rosidl_typesupport_introspection_cpp::PosOnly_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yesense_interface, msg, PosOnly)() {
  return &::yesense_interface::msg::rosidl_typesupport_introspection_cpp::PosOnly_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyreader_msg/msg/detail/body__struct.hpp"
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

void Body_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyreader_msg::msg::Body(_init);
}

void Body_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyreader_msg::msg::Body *>(message_memory);
  typed_message->~Body();
}

size_t size_function__Body__joints(const void * untyped_member)
{
  (void)untyped_member;
  return 19;
}

const void * get_const_function__Body__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bodyreader_msg::msg::Joint, 19> *>(untyped_member);
  return &member[index];
}

void * get_function__Body__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bodyreader_msg::msg::Joint, 19> *>(untyped_member);
  return &member[index];
}

void fetch_function__Body__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bodyreader_msg::msg::Joint *>(
    get_const_function__Body__joints(untyped_member, index));
  auto & value = *reinterpret_cast<bodyreader_msg::msg::Joint *>(untyped_value);
  value = item;
}

void assign_function__Body__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bodyreader_msg::msg::Joint *>(
    get_function__Body__joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const bodyreader_msg::msg::Joint *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Body_message_member_array[3] = {
  {
    "bodyid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Body, bodyid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "centerofmass",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bodyreader_msg::msg::Vector3f>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Body, centerofmass),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bodyreader_msg::msg::Joint>(),  // members of sub message
    true,  // is array
    19,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Body, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Body__joints,  // size() function pointer
    get_const_function__Body__joints,  // get_const(index) function pointer
    get_function__Body__joints,  // get(index) function pointer
    fetch_function__Body__joints,  // fetch(index, &value) function pointer
    assign_function__Body__joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Body_message_members = {
  "bodyreader_msg::msg",  // message namespace
  "Body",  // message name
  3,  // number of fields
  sizeof(bodyreader_msg::msg::Body),
  Body_message_member_array,  // message members
  Body_init_function,  // function to initialize message memory (memory has to be allocated)
  Body_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Body_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Body_message_members,
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
get_message_type_support_handle<bodyreader_msg::msg::Body>()
{
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Body_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyreader_msg, msg, Body)() {
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Body_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

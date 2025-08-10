// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Maskdata.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyreader_msg/msg/detail/maskdata__struct.hpp"
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

void Maskdata_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyreader_msg::msg::Maskdata(_init);
}

void Maskdata_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyreader_msg::msg::Maskdata *>(message_memory);
  typed_message->~Maskdata();
}

size_t size_function__Maskdata__data(const void * untyped_member)
{
  (void)untyped_member;
  return 76800;
}

const void * get_const_function__Maskdata__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 76800> *>(untyped_member);
  return &member[index];
}

void * get_function__Maskdata__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 76800> *>(untyped_member);
  return &member[index];
}

void fetch_function__Maskdata__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Maskdata__data(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Maskdata__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Maskdata__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Maskdata_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    76800,  // array size
    false,  // is upper bound
    offsetof(bodyreader_msg::msg::Maskdata, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Maskdata__data,  // size() function pointer
    get_const_function__Maskdata__data,  // get_const(index) function pointer
    get_function__Maskdata__data,  // get(index) function pointer
    fetch_function__Maskdata__data,  // fetch(index, &value) function pointer
    assign_function__Maskdata__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Maskdata_message_members = {
  "bodyreader_msg::msg",  // message namespace
  "Maskdata",  // message name
  1,  // number of fields
  sizeof(bodyreader_msg::msg::Maskdata),
  Maskdata_message_member_array,  // message members
  Maskdata_init_function,  // function to initialize message memory (memory has to be allocated)
  Maskdata_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Maskdata_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Maskdata_message_members,
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
get_message_type_support_handle<bodyreader_msg::msg::Maskdata>()
{
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Maskdata_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyreader_msg, msg, Maskdata)() {
  return &::bodyreader_msg::msg::rosidl_typesupport_introspection_cpp::Maskdata_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

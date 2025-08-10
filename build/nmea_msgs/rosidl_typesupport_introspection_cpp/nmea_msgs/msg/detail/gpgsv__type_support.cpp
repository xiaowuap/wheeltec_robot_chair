// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nmea_msgs/msg/detail/gpgsv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nmea_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Gpgsv_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nmea_msgs::msg::Gpgsv(_init);
}

void Gpgsv_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nmea_msgs::msg::Gpgsv *>(message_memory);
  typed_message->~Gpgsv();
}

size_t size_function__Gpgsv__satellites(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nmea_msgs::msg::GpgsvSatellite> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Gpgsv__satellites(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nmea_msgs::msg::GpgsvSatellite> *>(untyped_member);
  return &member[index];
}

void * get_function__Gpgsv__satellites(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nmea_msgs::msg::GpgsvSatellite> *>(untyped_member);
  return &member[index];
}

void fetch_function__Gpgsv__satellites(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nmea_msgs::msg::GpgsvSatellite *>(
    get_const_function__Gpgsv__satellites(untyped_member, index));
  auto & value = *reinterpret_cast<nmea_msgs::msg::GpgsvSatellite *>(untyped_value);
  value = item;
}

void assign_function__Gpgsv__satellites(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nmea_msgs::msg::GpgsvSatellite *>(
    get_function__Gpgsv__satellites(untyped_member, index));
  const auto & value = *reinterpret_cast<const nmea_msgs::msg::GpgsvSatellite *>(untyped_value);
  item = value;
}

void resize_function__Gpgsv__satellites(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nmea_msgs::msg::GpgsvSatellite> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Gpgsv_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Gpgsv, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Gpgsv, message_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_msgs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Gpgsv, n_msgs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Gpgsv, msg_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_satellites",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Gpgsv, n_satellites),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "satellites",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nmea_msgs::msg::GpgsvSatellite>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Gpgsv, satellites),  // bytes offset in struct
    nullptr,  // default value
    size_function__Gpgsv__satellites,  // size() function pointer
    get_const_function__Gpgsv__satellites,  // get_const(index) function pointer
    get_function__Gpgsv__satellites,  // get(index) function pointer
    fetch_function__Gpgsv__satellites,  // fetch(index, &value) function pointer
    assign_function__Gpgsv__satellites,  // assign(index, value) function pointer
    resize_function__Gpgsv__satellites  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Gpgsv_message_members = {
  "nmea_msgs::msg",  // message namespace
  "Gpgsv",  // message name
  6,  // number of fields
  sizeof(nmea_msgs::msg::Gpgsv),
  Gpgsv_message_member_array,  // message members
  Gpgsv_init_function,  // function to initialize message memory (memory has to be allocated)
  Gpgsv_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Gpgsv_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Gpgsv_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nmea_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nmea_msgs::msg::Gpgsv>()
{
  return &::nmea_msgs::msg::rosidl_typesupport_introspection_cpp::Gpgsv_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nmea_msgs, msg, Gpgsv)() {
  return &::nmea_msgs::msg::rosidl_typesupport_introspection_cpp::Gpgsv_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

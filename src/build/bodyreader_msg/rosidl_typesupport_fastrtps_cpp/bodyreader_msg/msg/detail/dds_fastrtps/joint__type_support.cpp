// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bodyreader_msg:msg/Joint.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/joint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bodyreader_msg/msg/detail/joint__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace bodyreader_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const bodyreader_msg::msg::Vector2f &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  bodyreader_msg::msg::Vector2f &);
size_t get_serialized_size(
  const bodyreader_msg::msg::Vector2f &,
  size_t current_alignment);
size_t
max_serialized_size_Vector2f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace bodyreader_msg

namespace bodyreader_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const bodyreader_msg::msg::Vector3f &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  bodyreader_msg::msg::Vector3f &);
size_t get_serialized_size(
  const bodyreader_msg::msg::Vector3f &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace bodyreader_msg


namespace bodyreader_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
cdr_serialize(
  const bodyreader_msg::msg::Joint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: depthposition
  bodyreader_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.depthposition,
    cdr);
  // Member: worldposition
  bodyreader_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.worldposition,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bodyreader_msg::msg::Joint & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: depthposition
  bodyreader_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.depthposition);

  // Member: worldposition
  bodyreader_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.worldposition);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
get_serialized_size(
  const bodyreader_msg::msg::Joint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depthposition

  current_alignment +=
    bodyreader_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.depthposition, current_alignment);
  // Member: worldposition

  current_alignment +=
    bodyreader_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.worldposition, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bodyreader_msg
max_serialized_size_Joint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: depthposition
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        bodyreader_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector2f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: worldposition
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        bodyreader_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bodyreader_msg::msg::Joint;
    is_plain =
      (
      offsetof(DataType, worldposition) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Joint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bodyreader_msg::msg::Joint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Joint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bodyreader_msg::msg::Joint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Joint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bodyreader_msg::msg::Joint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Joint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Joint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Joint__callbacks = {
  "bodyreader_msg::msg",
  "Joint",
  _Joint__cdr_serialize,
  _Joint__cdr_deserialize,
  _Joint__get_serialized_size,
  _Joint__max_serialized_size
};

static rosidl_message_type_support_t _Joint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Joint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bodyreader_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bodyreader_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyreader_msg::msg::Joint>()
{
  return &bodyreader_msg::msg::typesupport_fastrtps_cpp::_Joint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bodyreader_msg, msg, Joint)() {
  return &bodyreader_msg::msg::typesupport_fastrtps_cpp::_Joint__handle;
}

#ifdef __cplusplus
}
#endif

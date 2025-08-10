// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ollama_ros_msgs:srv/Chat.idl
// generated code does not contain a copyright notice

#ifndef OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__STRUCT_H_
#define OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Chat in the package ollama_ros_msgs.
typedef struct ollama_ros_msgs__srv__Chat_Request
{
  rosidl_runtime_c__String content;
} ollama_ros_msgs__srv__Chat_Request;

// Struct for a sequence of ollama_ros_msgs__srv__Chat_Request.
typedef struct ollama_ros_msgs__srv__Chat_Request__Sequence
{
  ollama_ros_msgs__srv__Chat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ollama_ros_msgs__srv__Chat_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'content'
// Member 'model'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Chat in the package ollama_ros_msgs.
typedef struct ollama_ros_msgs__srv__Chat_Response
{
  rosidl_runtime_c__String content;
  rosidl_runtime_c__String model;
  bool is_done;
} ollama_ros_msgs__srv__Chat_Response;

// Struct for a sequence of ollama_ros_msgs__srv__Chat_Response.
typedef struct ollama_ros_msgs__srv__Chat_Response__Sequence
{
  ollama_ros_msgs__srv__Chat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ollama_ros_msgs__srv__Chat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__STRUCT_H_

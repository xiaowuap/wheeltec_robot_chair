// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from orb_slam2_ros:srv/SaveCloud.idl
// generated code does not contain a copyright notice

#ifndef ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__STRUCT_H_
#define ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveCloud in the package orb_slam2_ros.
typedef struct orb_slam2_ros__srv__SaveCloud_Request
{
  rosidl_runtime_c__String name;
} orb_slam2_ros__srv__SaveCloud_Request;

// Struct for a sequence of orb_slam2_ros__srv__SaveCloud_Request.
typedef struct orb_slam2_ros__srv__SaveCloud_Request__Sequence
{
  orb_slam2_ros__srv__SaveCloud_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orb_slam2_ros__srv__SaveCloud_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SaveCloud in the package orb_slam2_ros.
typedef struct orb_slam2_ros__srv__SaveCloud_Response
{
  bool success;
} orb_slam2_ros__srv__SaveCloud_Response;

// Struct for a sequence of orb_slam2_ros__srv__SaveCloud_Response.
typedef struct orb_slam2_ros__srv__SaveCloud_Response__Sequence
{
  orb_slam2_ros__srv__SaveCloud_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orb_slam2_ros__srv__SaveCloud_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORB_SLAM2_ROS__SRV__DETAIL__SAVE_CLOUD__STRUCT_H_

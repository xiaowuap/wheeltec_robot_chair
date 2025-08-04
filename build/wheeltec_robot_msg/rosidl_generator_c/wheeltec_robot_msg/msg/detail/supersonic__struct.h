// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wheeltec_robot_msg:msg/Supersonic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__STRUCT_H_
#define WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Supersonic in the package wheeltec_robot_msg.
typedef struct wheeltec_robot_msg__msg__Supersonic
{
  std_msgs__msg__Header header;
  float distance_a;
  float distance_b;
  float distance_c;
  float distance_d;
  float distance_e;
  float distance_f;
  float distance_g;
  float distance_h;
} wheeltec_robot_msg__msg__Supersonic;

// Struct for a sequence of wheeltec_robot_msg__msg__Supersonic.
typedef struct wheeltec_robot_msg__msg__Supersonic__Sequence
{
  wheeltec_robot_msg__msg__Supersonic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_robot_msg__msg__Supersonic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/RobotLord.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__struct.h"
// Member 'acc'
// Member 'gyro'
#include "yesense_interface/msg/detail/three_axis__struct.h"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__struct.h"

/// Struct defined in msg/RobotLord in the package yesense_interface.
typedef struct yesense_interface__msg__RobotLord
{
  yesense_interface__msg__Tid tid;
  yesense_interface__msg__ThreeAxis acc;
  yesense_interface__msg__ThreeAxis gyro;
  yesense_interface__msg__Quat quat;
} yesense_interface__msg__RobotLord;

// Struct for a sequence of yesense_interface__msg__RobotLord.
typedef struct yesense_interface__msg__RobotLord__Sequence
{
  yesense_interface__msg__RobotLord * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__RobotLord__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__STRUCT_H_

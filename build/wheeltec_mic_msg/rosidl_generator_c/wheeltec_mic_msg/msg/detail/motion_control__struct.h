// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__STRUCT_H_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotionControl in the package wheeltec_mic_msg.
typedef struct wheeltec_mic_msg__msg__MotionControl
{
  float linear_x;
  float linear_y;
  float angular_z;
  int8_t cmd_vel_flag;
  int8_t follow_flag;
  int8_t goal_reached_flag;
} wheeltec_mic_msg__msg__MotionControl;

// Struct for a sequence of wheeltec_mic_msg__msg__MotionControl.
typedef struct wheeltec_mic_msg__msg__MotionControl__Sequence
{
  wheeltec_mic_msg__msg__MotionControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_mic_msg__msg__MotionControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__STRUCT_H_

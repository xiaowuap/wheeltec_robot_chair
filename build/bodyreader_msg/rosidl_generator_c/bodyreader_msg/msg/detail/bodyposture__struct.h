// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Bodyposture in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Bodyposture
{
  int16_t bodyid;
  float centerofmass_x;
  float centerofmass_y;
  float centerofmass_z;
  int8_t left_arm_out;
  int8_t right_arm_out;
  int8_t left_hand_raised;
  int8_t right_hand_raised;
  int8_t akimibo;
  int8_t left_foot_up;
  int8_t right_foot_up;
  int8_t fall;
  int8_t tips;
  int8_t lock_status;
} bodyreader_msg__msg__Bodyposture;

// Struct for a sequence of bodyreader_msg__msg__Bodyposture.
typedef struct bodyreader_msg__msg__Bodyposture__Sequence
{
  bodyreader_msg__msg__Bodyposture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Bodyposture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__STRUCT_H_

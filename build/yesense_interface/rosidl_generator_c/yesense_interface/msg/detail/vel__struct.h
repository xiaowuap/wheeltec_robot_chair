// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__VEL__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vel in the package yesense_interface.
typedef struct yesense_interface__msg__Vel
{
  float vel_e;
  float vel_n;
  float vel_u;
} yesense_interface__msg__Vel;

// Struct for a sequence of yesense_interface__msg__Vel.
typedef struct yesense_interface__msg__Vel__Sequence
{
  yesense_interface__msg__Vel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__Vel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__VEL__STRUCT_H_

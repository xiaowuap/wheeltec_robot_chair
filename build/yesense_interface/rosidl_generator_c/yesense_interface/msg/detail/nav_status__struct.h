// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/NavStatus.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NavStatus in the package yesense_interface.
typedef struct yesense_interface__msg__NavStatus
{
  uint8_t fusion_status;
  uint8_t gnss_status;
} yesense_interface__msg__NavStatus;

// Struct for a sequence of yesense_interface__msg__NavStatus.
typedef struct yesense_interface__msg__NavStatus__Sequence
{
  yesense_interface__msg__NavStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__NavStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__STRUCT_H_

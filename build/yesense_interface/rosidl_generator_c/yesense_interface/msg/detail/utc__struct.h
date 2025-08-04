// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/Utc.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__UTC__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__UTC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Utc in the package yesense_interface.
typedef struct yesense_interface__msg__Utc
{
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t min;
  uint8_t sec;
  uint32_t ms;
} yesense_interface__msg__Utc;

// Struct for a sequence of yesense_interface__msg__Utc.
typedef struct yesense_interface__msg__Utc__Sequence
{
  yesense_interface__msg__Utc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__Utc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__UTC__STRUCT_H_

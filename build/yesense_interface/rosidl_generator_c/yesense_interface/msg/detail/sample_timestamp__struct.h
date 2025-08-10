// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yesense_interface:msg/SampleTimestamp.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__SAMPLE_TIMESTAMP__STRUCT_H_
#define YESENSE_INTERFACE__MSG__DETAIL__SAMPLE_TIMESTAMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SampleTimestamp in the package yesense_interface.
typedef struct yesense_interface__msg__SampleTimestamp
{
  uint32_t timestamp;
} yesense_interface__msg__SampleTimestamp;

// Struct for a sequence of yesense_interface__msg__SampleTimestamp.
typedef struct yesense_interface__msg__SampleTimestamp__Sequence
{
  yesense_interface__msg__SampleTimestamp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yesense_interface__msg__SampleTimestamp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__SAMPLE_TIMESTAMP__STRUCT_H_

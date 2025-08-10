// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Lockedmaskwh in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Lockedmaskwh
{
  int32_t width_l;
  int32_t width_r;
  int32_t height_t;
  int32_t height_b;
} bodyreader_msg__msg__Lockedmaskwh;

// Struct for a sequence of bodyreader_msg__msg__Lockedmaskwh.
typedef struct bodyreader_msg__msg__Lockedmaskwh__Sequence
{
  bodyreader_msg__msg__Lockedmaskwh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Lockedmaskwh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__STRUCT_H_

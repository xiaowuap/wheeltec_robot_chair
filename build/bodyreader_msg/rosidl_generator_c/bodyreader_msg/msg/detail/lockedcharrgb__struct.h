// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Lockedcharrgb.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Lockedcharrgb in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Lockedcharrgb
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} bodyreader_msg__msg__Lockedcharrgb;

// Struct for a sequence of bodyreader_msg__msg__Lockedcharrgb.
typedef struct bodyreader_msg__msg__Lockedcharrgb__Sequence
{
  bodyreader_msg__msg__Lockedcharrgb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Lockedcharrgb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyreader_msg:msg/Maskdata.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__MASKDATA__STRUCT_H_
#define BODYREADER_MSG__MSG__DETAIL__MASKDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Maskdata in the package bodyreader_msg.
typedef struct bodyreader_msg__msg__Maskdata
{
  int32_t data[76800];
} bodyreader_msg__msg__Maskdata;

// Struct for a sequence of bodyreader_msg__msg__Maskdata.
typedef struct bodyreader_msg__msg__Maskdata__Sequence
{
  bodyreader_msg__msg__Maskdata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyreader_msg__msg__Maskdata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__MASKDATA__STRUCT_H_

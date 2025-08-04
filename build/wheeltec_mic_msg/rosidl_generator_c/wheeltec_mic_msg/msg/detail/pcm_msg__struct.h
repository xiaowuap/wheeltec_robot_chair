// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__STRUCT_H_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pcm_buf'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PcmMsg in the package wheeltec_mic_msg.
typedef struct wheeltec_mic_msg__msg__PcmMsg
{
  int32_t length;
  rosidl_runtime_c__String__Sequence pcm_buf;
} wheeltec_mic_msg__msg__PcmMsg;

// Struct for a sequence of wheeltec_mic_msg__msg__PcmMsg.
typedef struct wheeltec_mic_msg__msg__PcmMsg__Sequence
{
  wheeltec_mic_msg__msg__PcmMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wheeltec_mic_msg__msg__PcmMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__FUNCTIONS_H_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bodyreader_msg/msg/rosidl_generator_c__visibility_control.h"

#include "bodyreader_msg/msg/detail/lockedmaskwh__struct.h"

/// Initialize msg/Lockedmaskwh message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyreader_msg__msg__Lockedmaskwh
 * )) before or use
 * bodyreader_msg__msg__Lockedmaskwh__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Lockedmaskwh__init(bodyreader_msg__msg__Lockedmaskwh * msg);

/// Finalize msg/Lockedmaskwh message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Lockedmaskwh__fini(bodyreader_msg__msg__Lockedmaskwh * msg);

/// Create msg/Lockedmaskwh message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyreader_msg__msg__Lockedmaskwh__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bodyreader_msg__msg__Lockedmaskwh *
bodyreader_msg__msg__Lockedmaskwh__create();

/// Destroy msg/Lockedmaskwh message.
/**
 * It calls
 * bodyreader_msg__msg__Lockedmaskwh__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Lockedmaskwh__destroy(bodyreader_msg__msg__Lockedmaskwh * msg);

/// Check for msg/Lockedmaskwh message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Lockedmaskwh__are_equal(const bodyreader_msg__msg__Lockedmaskwh * lhs, const bodyreader_msg__msg__Lockedmaskwh * rhs);

/// Copy a msg/Lockedmaskwh message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Lockedmaskwh__copy(
  const bodyreader_msg__msg__Lockedmaskwh * input,
  bodyreader_msg__msg__Lockedmaskwh * output);

/// Initialize array of msg/Lockedmaskwh messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyreader_msg__msg__Lockedmaskwh__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Lockedmaskwh__Sequence__init(bodyreader_msg__msg__Lockedmaskwh__Sequence * array, size_t size);

/// Finalize array of msg/Lockedmaskwh messages.
/**
 * It calls
 * bodyreader_msg__msg__Lockedmaskwh__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Lockedmaskwh__Sequence__fini(bodyreader_msg__msg__Lockedmaskwh__Sequence * array);

/// Create array of msg/Lockedmaskwh messages.
/**
 * It allocates the memory for the array and calls
 * bodyreader_msg__msg__Lockedmaskwh__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bodyreader_msg__msg__Lockedmaskwh__Sequence *
bodyreader_msg__msg__Lockedmaskwh__Sequence__create(size_t size);

/// Destroy array of msg/Lockedmaskwh messages.
/**
 * It calls
 * bodyreader_msg__msg__Lockedmaskwh__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Lockedmaskwh__Sequence__destroy(bodyreader_msg__msg__Lockedmaskwh__Sequence * array);

/// Check for msg/Lockedmaskwh message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Lockedmaskwh__Sequence__are_equal(const bodyreader_msg__msg__Lockedmaskwh__Sequence * lhs, const bodyreader_msg__msg__Lockedmaskwh__Sequence * rhs);

/// Copy an array of msg/Lockedmaskwh messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Lockedmaskwh__Sequence__copy(
  const bodyreader_msg__msg__Lockedmaskwh__Sequence * input,
  bodyreader_msg__msg__Lockedmaskwh__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__FUNCTIONS_H_

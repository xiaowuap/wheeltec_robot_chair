// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bodyreader_msg:msg/Maskdata.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__MASKDATA__FUNCTIONS_H_
#define BODYREADER_MSG__MSG__DETAIL__MASKDATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bodyreader_msg/msg/rosidl_generator_c__visibility_control.h"

#include "bodyreader_msg/msg/detail/maskdata__struct.h"

/// Initialize msg/Maskdata message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyreader_msg__msg__Maskdata
 * )) before or use
 * bodyreader_msg__msg__Maskdata__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Maskdata__init(bodyreader_msg__msg__Maskdata * msg);

/// Finalize msg/Maskdata message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Maskdata__fini(bodyreader_msg__msg__Maskdata * msg);

/// Create msg/Maskdata message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyreader_msg__msg__Maskdata__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bodyreader_msg__msg__Maskdata *
bodyreader_msg__msg__Maskdata__create();

/// Destroy msg/Maskdata message.
/**
 * It calls
 * bodyreader_msg__msg__Maskdata__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Maskdata__destroy(bodyreader_msg__msg__Maskdata * msg);

/// Check for msg/Maskdata message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Maskdata__are_equal(const bodyreader_msg__msg__Maskdata * lhs, const bodyreader_msg__msg__Maskdata * rhs);

/// Copy a msg/Maskdata message.
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
bodyreader_msg__msg__Maskdata__copy(
  const bodyreader_msg__msg__Maskdata * input,
  bodyreader_msg__msg__Maskdata * output);

/// Initialize array of msg/Maskdata messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyreader_msg__msg__Maskdata__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Maskdata__Sequence__init(bodyreader_msg__msg__Maskdata__Sequence * array, size_t size);

/// Finalize array of msg/Maskdata messages.
/**
 * It calls
 * bodyreader_msg__msg__Maskdata__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Maskdata__Sequence__fini(bodyreader_msg__msg__Maskdata__Sequence * array);

/// Create array of msg/Maskdata messages.
/**
 * It allocates the memory for the array and calls
 * bodyreader_msg__msg__Maskdata__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bodyreader_msg__msg__Maskdata__Sequence *
bodyreader_msg__msg__Maskdata__Sequence__create(size_t size);

/// Destroy array of msg/Maskdata messages.
/**
 * It calls
 * bodyreader_msg__msg__Maskdata__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
void
bodyreader_msg__msg__Maskdata__Sequence__destroy(bodyreader_msg__msg__Maskdata__Sequence * array);

/// Check for msg/Maskdata message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyreader_msg
bool
bodyreader_msg__msg__Maskdata__Sequence__are_equal(const bodyreader_msg__msg__Maskdata__Sequence * lhs, const bodyreader_msg__msg__Maskdata__Sequence * rhs);

/// Copy an array of msg/Maskdata messages.
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
bodyreader_msg__msg__Maskdata__Sequence__copy(
  const bodyreader_msg__msg__Maskdata__Sequence * input,
  bodyreader_msg__msg__Maskdata__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BODYREADER_MSG__MSG__DETAIL__MASKDATA__FUNCTIONS_H_

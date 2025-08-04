// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wheeltec_robot_msg:msg/Supersonic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__FUNCTIONS_H_
#define WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wheeltec_robot_msg/msg/rosidl_generator_c__visibility_control.h"

#include "wheeltec_robot_msg/msg/detail/supersonic__struct.h"

/// Initialize msg/Supersonic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wheeltec_robot_msg__msg__Supersonic
 * )) before or use
 * wheeltec_robot_msg__msg__Supersonic__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
bool
wheeltec_robot_msg__msg__Supersonic__init(wheeltec_robot_msg__msg__Supersonic * msg);

/// Finalize msg/Supersonic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
void
wheeltec_robot_msg__msg__Supersonic__fini(wheeltec_robot_msg__msg__Supersonic * msg);

/// Create msg/Supersonic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wheeltec_robot_msg__msg__Supersonic__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
wheeltec_robot_msg__msg__Supersonic *
wheeltec_robot_msg__msg__Supersonic__create();

/// Destroy msg/Supersonic message.
/**
 * It calls
 * wheeltec_robot_msg__msg__Supersonic__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
void
wheeltec_robot_msg__msg__Supersonic__destroy(wheeltec_robot_msg__msg__Supersonic * msg);

/// Check for msg/Supersonic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
bool
wheeltec_robot_msg__msg__Supersonic__are_equal(const wheeltec_robot_msg__msg__Supersonic * lhs, const wheeltec_robot_msg__msg__Supersonic * rhs);

/// Copy a msg/Supersonic message.
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
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
bool
wheeltec_robot_msg__msg__Supersonic__copy(
  const wheeltec_robot_msg__msg__Supersonic * input,
  wheeltec_robot_msg__msg__Supersonic * output);

/// Initialize array of msg/Supersonic messages.
/**
 * It allocates the memory for the number of elements and calls
 * wheeltec_robot_msg__msg__Supersonic__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
bool
wheeltec_robot_msg__msg__Supersonic__Sequence__init(wheeltec_robot_msg__msg__Supersonic__Sequence * array, size_t size);

/// Finalize array of msg/Supersonic messages.
/**
 * It calls
 * wheeltec_robot_msg__msg__Supersonic__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
void
wheeltec_robot_msg__msg__Supersonic__Sequence__fini(wheeltec_robot_msg__msg__Supersonic__Sequence * array);

/// Create array of msg/Supersonic messages.
/**
 * It allocates the memory for the array and calls
 * wheeltec_robot_msg__msg__Supersonic__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
wheeltec_robot_msg__msg__Supersonic__Sequence *
wheeltec_robot_msg__msg__Supersonic__Sequence__create(size_t size);

/// Destroy array of msg/Supersonic messages.
/**
 * It calls
 * wheeltec_robot_msg__msg__Supersonic__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
void
wheeltec_robot_msg__msg__Supersonic__Sequence__destroy(wheeltec_robot_msg__msg__Supersonic__Sequence * array);

/// Check for msg/Supersonic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
bool
wheeltec_robot_msg__msg__Supersonic__Sequence__are_equal(const wheeltec_robot_msg__msg__Supersonic__Sequence * lhs, const wheeltec_robot_msg__msg__Supersonic__Sequence * rhs);

/// Copy an array of msg/Supersonic messages.
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
ROSIDL_GENERATOR_C_PUBLIC_wheeltec_robot_msg
bool
wheeltec_robot_msg__msg__Supersonic__Sequence__copy(
  const wheeltec_robot_msg__msg__Supersonic__Sequence * input,
  wheeltec_robot_msg__msg__Supersonic__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__FUNCTIONS_H_

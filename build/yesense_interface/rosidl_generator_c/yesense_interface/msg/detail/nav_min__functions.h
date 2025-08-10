// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yesense_interface:msg/NavMin.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__FUNCTIONS_H_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yesense_interface/msg/rosidl_generator_c__visibility_control.h"

#include "yesense_interface/msg/detail/nav_min__struct.h"

/// Initialize msg/NavMin message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yesense_interface__msg__NavMin
 * )) before or use
 * yesense_interface__msg__NavMin__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__NavMin__init(yesense_interface__msg__NavMin * msg);

/// Finalize msg/NavMin message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__NavMin__fini(yesense_interface__msg__NavMin * msg);

/// Create msg/NavMin message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yesense_interface__msg__NavMin__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
yesense_interface__msg__NavMin *
yesense_interface__msg__NavMin__create();

/// Destroy msg/NavMin message.
/**
 * It calls
 * yesense_interface__msg__NavMin__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__NavMin__destroy(yesense_interface__msg__NavMin * msg);

/// Check for msg/NavMin message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__NavMin__are_equal(const yesense_interface__msg__NavMin * lhs, const yesense_interface__msg__NavMin * rhs);

/// Copy a msg/NavMin message.
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
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__NavMin__copy(
  const yesense_interface__msg__NavMin * input,
  yesense_interface__msg__NavMin * output);

/// Initialize array of msg/NavMin messages.
/**
 * It allocates the memory for the number of elements and calls
 * yesense_interface__msg__NavMin__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__NavMin__Sequence__init(yesense_interface__msg__NavMin__Sequence * array, size_t size);

/// Finalize array of msg/NavMin messages.
/**
 * It calls
 * yesense_interface__msg__NavMin__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__NavMin__Sequence__fini(yesense_interface__msg__NavMin__Sequence * array);

/// Create array of msg/NavMin messages.
/**
 * It allocates the memory for the array and calls
 * yesense_interface__msg__NavMin__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
yesense_interface__msg__NavMin__Sequence *
yesense_interface__msg__NavMin__Sequence__create(size_t size);

/// Destroy array of msg/NavMin messages.
/**
 * It calls
 * yesense_interface__msg__NavMin__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
void
yesense_interface__msg__NavMin__Sequence__destroy(yesense_interface__msg__NavMin__Sequence * array);

/// Check for msg/NavMin message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__NavMin__Sequence__are_equal(const yesense_interface__msg__NavMin__Sequence * lhs, const yesense_interface__msg__NavMin__Sequence * rhs);

/// Copy an array of msg/NavMin messages.
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
ROSIDL_GENERATOR_C_PUBLIC_yesense_interface
bool
yesense_interface__msg__NavMin__Sequence__copy(
  const yesense_interface__msg__NavMin__Sequence * input,
  yesense_interface__msg__NavMin__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN__FUNCTIONS_H_

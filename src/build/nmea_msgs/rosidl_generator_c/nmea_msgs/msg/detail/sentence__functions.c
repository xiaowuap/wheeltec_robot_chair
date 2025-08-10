// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/sentence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sentence`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Sentence__init(nmea_msgs__msg__Sentence * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Sentence__fini(msg);
    return false;
  }
  // sentence
  if (!rosidl_runtime_c__String__init(&msg->sentence)) {
    nmea_msgs__msg__Sentence__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Sentence__fini(nmea_msgs__msg__Sentence * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sentence
  rosidl_runtime_c__String__fini(&msg->sentence);
}

bool
nmea_msgs__msg__Sentence__are_equal(const nmea_msgs__msg__Sentence * lhs, const nmea_msgs__msg__Sentence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // sentence
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sentence), &(rhs->sentence)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Sentence__copy(
  const nmea_msgs__msg__Sentence * input,
  nmea_msgs__msg__Sentence * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // sentence
  if (!rosidl_runtime_c__String__copy(
      &(input->sentence), &(output->sentence)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Sentence *
nmea_msgs__msg__Sentence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Sentence * msg = (nmea_msgs__msg__Sentence *)allocator.allocate(sizeof(nmea_msgs__msg__Sentence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Sentence));
  bool success = nmea_msgs__msg__Sentence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Sentence__destroy(nmea_msgs__msg__Sentence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nmea_msgs__msg__Sentence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nmea_msgs__msg__Sentence__Sequence__init(nmea_msgs__msg__Sentence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Sentence * data = NULL;

  if (size) {
    data = (nmea_msgs__msg__Sentence *)allocator.zero_allocate(size, sizeof(nmea_msgs__msg__Sentence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Sentence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Sentence__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nmea_msgs__msg__Sentence__Sequence__fini(nmea_msgs__msg__Sentence__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Sentence__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nmea_msgs__msg__Sentence__Sequence *
nmea_msgs__msg__Sentence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Sentence__Sequence * array = (nmea_msgs__msg__Sentence__Sequence *)allocator.allocate(sizeof(nmea_msgs__msg__Sentence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Sentence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Sentence__Sequence__destroy(nmea_msgs__msg__Sentence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nmea_msgs__msg__Sentence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nmea_msgs__msg__Sentence__Sequence__are_equal(const nmea_msgs__msg__Sentence__Sequence * lhs, const nmea_msgs__msg__Sentence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Sentence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Sentence__Sequence__copy(
  const nmea_msgs__msg__Sentence__Sequence * input,
  nmea_msgs__msg__Sentence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Sentence);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nmea_msgs__msg__Sentence * data =
      (nmea_msgs__msg__Sentence *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Sentence__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Sentence__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nmea_msgs__msg__Sentence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

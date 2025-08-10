// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/NavMinUtc.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/nav_min_utc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nav_basic`
#include "yesense_interface/msg/detail/nav_min__functions.h"
// Member `utc`
#include "yesense_interface/msg/detail/utc__functions.h"

bool
yesense_interface__msg__NavMinUtc__init(yesense_interface__msg__NavMinUtc * msg)
{
  if (!msg) {
    return false;
  }
  // nav_basic
  if (!yesense_interface__msg__NavMin__init(&msg->nav_basic)) {
    yesense_interface__msg__NavMinUtc__fini(msg);
    return false;
  }
  // utc
  if (!yesense_interface__msg__Utc__init(&msg->utc)) {
    yesense_interface__msg__NavMinUtc__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__NavMinUtc__fini(yesense_interface__msg__NavMinUtc * msg)
{
  if (!msg) {
    return;
  }
  // nav_basic
  yesense_interface__msg__NavMin__fini(&msg->nav_basic);
  // utc
  yesense_interface__msg__Utc__fini(&msg->utc);
}

bool
yesense_interface__msg__NavMinUtc__are_equal(const yesense_interface__msg__NavMinUtc * lhs, const yesense_interface__msg__NavMinUtc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nav_basic
  if (!yesense_interface__msg__NavMin__are_equal(
      &(lhs->nav_basic), &(rhs->nav_basic)))
  {
    return false;
  }
  // utc
  if (!yesense_interface__msg__Utc__are_equal(
      &(lhs->utc), &(rhs->utc)))
  {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__NavMinUtc__copy(
  const yesense_interface__msg__NavMinUtc * input,
  yesense_interface__msg__NavMinUtc * output)
{
  if (!input || !output) {
    return false;
  }
  // nav_basic
  if (!yesense_interface__msg__NavMin__copy(
      &(input->nav_basic), &(output->nav_basic)))
  {
    return false;
  }
  // utc
  if (!yesense_interface__msg__Utc__copy(
      &(input->utc), &(output->utc)))
  {
    return false;
  }
  return true;
}

yesense_interface__msg__NavMinUtc *
yesense_interface__msg__NavMinUtc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__NavMinUtc * msg = (yesense_interface__msg__NavMinUtc *)allocator.allocate(sizeof(yesense_interface__msg__NavMinUtc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__NavMinUtc));
  bool success = yesense_interface__msg__NavMinUtc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__NavMinUtc__destroy(yesense_interface__msg__NavMinUtc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__NavMinUtc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__NavMinUtc__Sequence__init(yesense_interface__msg__NavMinUtc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__NavMinUtc * data = NULL;

  if (size) {
    data = (yesense_interface__msg__NavMinUtc *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__NavMinUtc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__NavMinUtc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__NavMinUtc__fini(&data[i - 1]);
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
yesense_interface__msg__NavMinUtc__Sequence__fini(yesense_interface__msg__NavMinUtc__Sequence * array)
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
      yesense_interface__msg__NavMinUtc__fini(&array->data[i]);
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

yesense_interface__msg__NavMinUtc__Sequence *
yesense_interface__msg__NavMinUtc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__NavMinUtc__Sequence * array = (yesense_interface__msg__NavMinUtc__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__NavMinUtc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__NavMinUtc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__NavMinUtc__Sequence__destroy(yesense_interface__msg__NavMinUtc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__NavMinUtc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__NavMinUtc__Sequence__are_equal(const yesense_interface__msg__NavMinUtc__Sequence * lhs, const yesense_interface__msg__NavMinUtc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__NavMinUtc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__NavMinUtc__Sequence__copy(
  const yesense_interface__msg__NavMinUtc__Sequence * input,
  yesense_interface__msg__NavMinUtc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__NavMinUtc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__NavMinUtc * data =
      (yesense_interface__msg__NavMinUtc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__NavMinUtc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__NavMinUtc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__NavMinUtc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

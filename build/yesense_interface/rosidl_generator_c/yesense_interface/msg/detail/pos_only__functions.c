// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/PosOnly.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/pos_only__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tid`
#include "yesense_interface/msg/detail/tid__functions.h"
// Member `pos`
#include "yesense_interface/msg/detail/gnss_pos__functions.h"
// Member `status`
#include "yesense_interface/msg/detail/nav_status__functions.h"

bool
yesense_interface__msg__PosOnly__init(yesense_interface__msg__PosOnly * msg)
{
  if (!msg) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__init(&msg->tid)) {
    yesense_interface__msg__PosOnly__fini(msg);
    return false;
  }
  // pos
  if (!yesense_interface__msg__GnssPos__init(&msg->pos)) {
    yesense_interface__msg__PosOnly__fini(msg);
    return false;
  }
  // status
  if (!yesense_interface__msg__NavStatus__init(&msg->status)) {
    yesense_interface__msg__PosOnly__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__PosOnly__fini(yesense_interface__msg__PosOnly * msg)
{
  if (!msg) {
    return;
  }
  // tid
  yesense_interface__msg__Tid__fini(&msg->tid);
  // pos
  yesense_interface__msg__GnssPos__fini(&msg->pos);
  // status
  yesense_interface__msg__NavStatus__fini(&msg->status);
}

bool
yesense_interface__msg__PosOnly__are_equal(const yesense_interface__msg__PosOnly * lhs, const yesense_interface__msg__PosOnly * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__are_equal(
      &(lhs->tid), &(rhs->tid)))
  {
    return false;
  }
  // pos
  if (!yesense_interface__msg__GnssPos__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // status
  if (!yesense_interface__msg__NavStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__PosOnly__copy(
  const yesense_interface__msg__PosOnly * input,
  yesense_interface__msg__PosOnly * output)
{
  if (!input || !output) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__copy(
      &(input->tid), &(output->tid)))
  {
    return false;
  }
  // pos
  if (!yesense_interface__msg__GnssPos__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // status
  if (!yesense_interface__msg__NavStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

yesense_interface__msg__PosOnly *
yesense_interface__msg__PosOnly__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__PosOnly * msg = (yesense_interface__msg__PosOnly *)allocator.allocate(sizeof(yesense_interface__msg__PosOnly), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__PosOnly));
  bool success = yesense_interface__msg__PosOnly__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__PosOnly__destroy(yesense_interface__msg__PosOnly * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__PosOnly__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__PosOnly__Sequence__init(yesense_interface__msg__PosOnly__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__PosOnly * data = NULL;

  if (size) {
    data = (yesense_interface__msg__PosOnly *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__PosOnly), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__PosOnly__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__PosOnly__fini(&data[i - 1]);
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
yesense_interface__msg__PosOnly__Sequence__fini(yesense_interface__msg__PosOnly__Sequence * array)
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
      yesense_interface__msg__PosOnly__fini(&array->data[i]);
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

yesense_interface__msg__PosOnly__Sequence *
yesense_interface__msg__PosOnly__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__PosOnly__Sequence * array = (yesense_interface__msg__PosOnly__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__PosOnly__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__PosOnly__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__PosOnly__Sequence__destroy(yesense_interface__msg__PosOnly__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__PosOnly__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__PosOnly__Sequence__are_equal(const yesense_interface__msg__PosOnly__Sequence * lhs, const yesense_interface__msg__PosOnly__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__PosOnly__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__PosOnly__Sequence__copy(
  const yesense_interface__msg__PosOnly__Sequence * input,
  yesense_interface__msg__PosOnly__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__PosOnly);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__PosOnly * data =
      (yesense_interface__msg__PosOnly *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__PosOnly__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__PosOnly__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__PosOnly__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

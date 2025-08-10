// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from orb_slam2_ros:srv/SaveMap.idl
// generated code does not contain a copyright notice
#include "orb_slam2_ros/srv/detail/save_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
orb_slam2_ros__srv__SaveMap_Request__init(orb_slam2_ros__srv__SaveMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    orb_slam2_ros__srv__SaveMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
orb_slam2_ros__srv__SaveMap_Request__fini(orb_slam2_ros__srv__SaveMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
orb_slam2_ros__srv__SaveMap_Request__are_equal(const orb_slam2_ros__srv__SaveMap_Request * lhs, const orb_slam2_ros__srv__SaveMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
orb_slam2_ros__srv__SaveMap_Request__copy(
  const orb_slam2_ros__srv__SaveMap_Request * input,
  orb_slam2_ros__srv__SaveMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

orb_slam2_ros__srv__SaveMap_Request *
orb_slam2_ros__srv__SaveMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orb_slam2_ros__srv__SaveMap_Request * msg = (orb_slam2_ros__srv__SaveMap_Request *)allocator.allocate(sizeof(orb_slam2_ros__srv__SaveMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(orb_slam2_ros__srv__SaveMap_Request));
  bool success = orb_slam2_ros__srv__SaveMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
orb_slam2_ros__srv__SaveMap_Request__destroy(orb_slam2_ros__srv__SaveMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    orb_slam2_ros__srv__SaveMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
orb_slam2_ros__srv__SaveMap_Request__Sequence__init(orb_slam2_ros__srv__SaveMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orb_slam2_ros__srv__SaveMap_Request * data = NULL;

  if (size) {
    data = (orb_slam2_ros__srv__SaveMap_Request *)allocator.zero_allocate(size, sizeof(orb_slam2_ros__srv__SaveMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = orb_slam2_ros__srv__SaveMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        orb_slam2_ros__srv__SaveMap_Request__fini(&data[i - 1]);
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
orb_slam2_ros__srv__SaveMap_Request__Sequence__fini(orb_slam2_ros__srv__SaveMap_Request__Sequence * array)
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
      orb_slam2_ros__srv__SaveMap_Request__fini(&array->data[i]);
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

orb_slam2_ros__srv__SaveMap_Request__Sequence *
orb_slam2_ros__srv__SaveMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orb_slam2_ros__srv__SaveMap_Request__Sequence * array = (orb_slam2_ros__srv__SaveMap_Request__Sequence *)allocator.allocate(sizeof(orb_slam2_ros__srv__SaveMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = orb_slam2_ros__srv__SaveMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
orb_slam2_ros__srv__SaveMap_Request__Sequence__destroy(orb_slam2_ros__srv__SaveMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    orb_slam2_ros__srv__SaveMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
orb_slam2_ros__srv__SaveMap_Request__Sequence__are_equal(const orb_slam2_ros__srv__SaveMap_Request__Sequence * lhs, const orb_slam2_ros__srv__SaveMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!orb_slam2_ros__srv__SaveMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
orb_slam2_ros__srv__SaveMap_Request__Sequence__copy(
  const orb_slam2_ros__srv__SaveMap_Request__Sequence * input,
  orb_slam2_ros__srv__SaveMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(orb_slam2_ros__srv__SaveMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    orb_slam2_ros__srv__SaveMap_Request * data =
      (orb_slam2_ros__srv__SaveMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!orb_slam2_ros__srv__SaveMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          orb_slam2_ros__srv__SaveMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!orb_slam2_ros__srv__SaveMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
orb_slam2_ros__srv__SaveMap_Response__init(orb_slam2_ros__srv__SaveMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
orb_slam2_ros__srv__SaveMap_Response__fini(orb_slam2_ros__srv__SaveMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
orb_slam2_ros__srv__SaveMap_Response__are_equal(const orb_slam2_ros__srv__SaveMap_Response * lhs, const orb_slam2_ros__srv__SaveMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
orb_slam2_ros__srv__SaveMap_Response__copy(
  const orb_slam2_ros__srv__SaveMap_Response * input,
  orb_slam2_ros__srv__SaveMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

orb_slam2_ros__srv__SaveMap_Response *
orb_slam2_ros__srv__SaveMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orb_slam2_ros__srv__SaveMap_Response * msg = (orb_slam2_ros__srv__SaveMap_Response *)allocator.allocate(sizeof(orb_slam2_ros__srv__SaveMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(orb_slam2_ros__srv__SaveMap_Response));
  bool success = orb_slam2_ros__srv__SaveMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
orb_slam2_ros__srv__SaveMap_Response__destroy(orb_slam2_ros__srv__SaveMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    orb_slam2_ros__srv__SaveMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
orb_slam2_ros__srv__SaveMap_Response__Sequence__init(orb_slam2_ros__srv__SaveMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orb_slam2_ros__srv__SaveMap_Response * data = NULL;

  if (size) {
    data = (orb_slam2_ros__srv__SaveMap_Response *)allocator.zero_allocate(size, sizeof(orb_slam2_ros__srv__SaveMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = orb_slam2_ros__srv__SaveMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        orb_slam2_ros__srv__SaveMap_Response__fini(&data[i - 1]);
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
orb_slam2_ros__srv__SaveMap_Response__Sequence__fini(orb_slam2_ros__srv__SaveMap_Response__Sequence * array)
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
      orb_slam2_ros__srv__SaveMap_Response__fini(&array->data[i]);
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

orb_slam2_ros__srv__SaveMap_Response__Sequence *
orb_slam2_ros__srv__SaveMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orb_slam2_ros__srv__SaveMap_Response__Sequence * array = (orb_slam2_ros__srv__SaveMap_Response__Sequence *)allocator.allocate(sizeof(orb_slam2_ros__srv__SaveMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = orb_slam2_ros__srv__SaveMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
orb_slam2_ros__srv__SaveMap_Response__Sequence__destroy(orb_slam2_ros__srv__SaveMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    orb_slam2_ros__srv__SaveMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
orb_slam2_ros__srv__SaveMap_Response__Sequence__are_equal(const orb_slam2_ros__srv__SaveMap_Response__Sequence * lhs, const orb_slam2_ros__srv__SaveMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!orb_slam2_ros__srv__SaveMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
orb_slam2_ros__srv__SaveMap_Response__Sequence__copy(
  const orb_slam2_ros__srv__SaveMap_Response__Sequence * input,
  orb_slam2_ros__srv__SaveMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(orb_slam2_ros__srv__SaveMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    orb_slam2_ros__srv__SaveMap_Response * data =
      (orb_slam2_ros__srv__SaveMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!orb_slam2_ros__srv__SaveMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          orb_slam2_ros__srv__SaveMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!orb_slam2_ros__srv__SaveMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

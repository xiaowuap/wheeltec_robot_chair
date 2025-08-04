// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ollama_ros_msgs:srv/Chat.idl
// generated code does not contain a copyright notice
#include "ollama_ros_msgs/srv/detail/chat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

bool
ollama_ros_msgs__srv__Chat_Request__init(ollama_ros_msgs__srv__Chat_Request * msg)
{
  if (!msg) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    ollama_ros_msgs__srv__Chat_Request__fini(msg);
    return false;
  }
  return true;
}

void
ollama_ros_msgs__srv__Chat_Request__fini(ollama_ros_msgs__srv__Chat_Request * msg)
{
  if (!msg) {
    return;
  }
  // content
  rosidl_runtime_c__String__fini(&msg->content);
}

bool
ollama_ros_msgs__srv__Chat_Request__are_equal(const ollama_ros_msgs__srv__Chat_Request * lhs, const ollama_ros_msgs__srv__Chat_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  return true;
}

bool
ollama_ros_msgs__srv__Chat_Request__copy(
  const ollama_ros_msgs__srv__Chat_Request * input,
  ollama_ros_msgs__srv__Chat_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  return true;
}

ollama_ros_msgs__srv__Chat_Request *
ollama_ros_msgs__srv__Chat_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ollama_ros_msgs__srv__Chat_Request * msg = (ollama_ros_msgs__srv__Chat_Request *)allocator.allocate(sizeof(ollama_ros_msgs__srv__Chat_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ollama_ros_msgs__srv__Chat_Request));
  bool success = ollama_ros_msgs__srv__Chat_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ollama_ros_msgs__srv__Chat_Request__destroy(ollama_ros_msgs__srv__Chat_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ollama_ros_msgs__srv__Chat_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ollama_ros_msgs__srv__Chat_Request__Sequence__init(ollama_ros_msgs__srv__Chat_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ollama_ros_msgs__srv__Chat_Request * data = NULL;

  if (size) {
    data = (ollama_ros_msgs__srv__Chat_Request *)allocator.zero_allocate(size, sizeof(ollama_ros_msgs__srv__Chat_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ollama_ros_msgs__srv__Chat_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ollama_ros_msgs__srv__Chat_Request__fini(&data[i - 1]);
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
ollama_ros_msgs__srv__Chat_Request__Sequence__fini(ollama_ros_msgs__srv__Chat_Request__Sequence * array)
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
      ollama_ros_msgs__srv__Chat_Request__fini(&array->data[i]);
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

ollama_ros_msgs__srv__Chat_Request__Sequence *
ollama_ros_msgs__srv__Chat_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ollama_ros_msgs__srv__Chat_Request__Sequence * array = (ollama_ros_msgs__srv__Chat_Request__Sequence *)allocator.allocate(sizeof(ollama_ros_msgs__srv__Chat_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ollama_ros_msgs__srv__Chat_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ollama_ros_msgs__srv__Chat_Request__Sequence__destroy(ollama_ros_msgs__srv__Chat_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ollama_ros_msgs__srv__Chat_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ollama_ros_msgs__srv__Chat_Request__Sequence__are_equal(const ollama_ros_msgs__srv__Chat_Request__Sequence * lhs, const ollama_ros_msgs__srv__Chat_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ollama_ros_msgs__srv__Chat_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ollama_ros_msgs__srv__Chat_Request__Sequence__copy(
  const ollama_ros_msgs__srv__Chat_Request__Sequence * input,
  ollama_ros_msgs__srv__Chat_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ollama_ros_msgs__srv__Chat_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ollama_ros_msgs__srv__Chat_Request * data =
      (ollama_ros_msgs__srv__Chat_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ollama_ros_msgs__srv__Chat_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ollama_ros_msgs__srv__Chat_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ollama_ros_msgs__srv__Chat_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `content`
// Member `model`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ollama_ros_msgs__srv__Chat_Response__init(ollama_ros_msgs__srv__Chat_Response * msg)
{
  if (!msg) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    ollama_ros_msgs__srv__Chat_Response__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    ollama_ros_msgs__srv__Chat_Response__fini(msg);
    return false;
  }
  // is_done
  return true;
}

void
ollama_ros_msgs__srv__Chat_Response__fini(ollama_ros_msgs__srv__Chat_Response * msg)
{
  if (!msg) {
    return;
  }
  // content
  rosidl_runtime_c__String__fini(&msg->content);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // is_done
}

bool
ollama_ros_msgs__srv__Chat_Response__are_equal(const ollama_ros_msgs__srv__Chat_Response * lhs, const ollama_ros_msgs__srv__Chat_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // is_done
  if (lhs->is_done != rhs->is_done) {
    return false;
  }
  return true;
}

bool
ollama_ros_msgs__srv__Chat_Response__copy(
  const ollama_ros_msgs__srv__Chat_Response * input,
  ollama_ros_msgs__srv__Chat_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // is_done
  output->is_done = input->is_done;
  return true;
}

ollama_ros_msgs__srv__Chat_Response *
ollama_ros_msgs__srv__Chat_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ollama_ros_msgs__srv__Chat_Response * msg = (ollama_ros_msgs__srv__Chat_Response *)allocator.allocate(sizeof(ollama_ros_msgs__srv__Chat_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ollama_ros_msgs__srv__Chat_Response));
  bool success = ollama_ros_msgs__srv__Chat_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ollama_ros_msgs__srv__Chat_Response__destroy(ollama_ros_msgs__srv__Chat_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ollama_ros_msgs__srv__Chat_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ollama_ros_msgs__srv__Chat_Response__Sequence__init(ollama_ros_msgs__srv__Chat_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ollama_ros_msgs__srv__Chat_Response * data = NULL;

  if (size) {
    data = (ollama_ros_msgs__srv__Chat_Response *)allocator.zero_allocate(size, sizeof(ollama_ros_msgs__srv__Chat_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ollama_ros_msgs__srv__Chat_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ollama_ros_msgs__srv__Chat_Response__fini(&data[i - 1]);
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
ollama_ros_msgs__srv__Chat_Response__Sequence__fini(ollama_ros_msgs__srv__Chat_Response__Sequence * array)
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
      ollama_ros_msgs__srv__Chat_Response__fini(&array->data[i]);
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

ollama_ros_msgs__srv__Chat_Response__Sequence *
ollama_ros_msgs__srv__Chat_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ollama_ros_msgs__srv__Chat_Response__Sequence * array = (ollama_ros_msgs__srv__Chat_Response__Sequence *)allocator.allocate(sizeof(ollama_ros_msgs__srv__Chat_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ollama_ros_msgs__srv__Chat_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ollama_ros_msgs__srv__Chat_Response__Sequence__destroy(ollama_ros_msgs__srv__Chat_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ollama_ros_msgs__srv__Chat_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ollama_ros_msgs__srv__Chat_Response__Sequence__are_equal(const ollama_ros_msgs__srv__Chat_Response__Sequence * lhs, const ollama_ros_msgs__srv__Chat_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ollama_ros_msgs__srv__Chat_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ollama_ros_msgs__srv__Chat_Response__Sequence__copy(
  const ollama_ros_msgs__srv__Chat_Response__Sequence * input,
  ollama_ros_msgs__srv__Chat_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ollama_ros_msgs__srv__Chat_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ollama_ros_msgs__srv__Chat_Response * data =
      (ollama_ros_msgs__srv__Chat_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ollama_ros_msgs__srv__Chat_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ollama_ros_msgs__srv__Chat_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ollama_ros_msgs__srv__Chat_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

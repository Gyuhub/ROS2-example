// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice
#include "srv_and_cli_ros2/msg/detail/tutorial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
srv_and_cli_ros2__msg__Tutorial__init(srv_and_cli_ros2__msg__Tutorial * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
srv_and_cli_ros2__msg__Tutorial__fini(srv_and_cli_ros2__msg__Tutorial * msg)
{
  if (!msg) {
    return;
  }
  // num
}

srv_and_cli_ros2__msg__Tutorial *
srv_and_cli_ros2__msg__Tutorial__create()
{
  srv_and_cli_ros2__msg__Tutorial * msg = (srv_and_cli_ros2__msg__Tutorial *)malloc(sizeof(srv_and_cli_ros2__msg__Tutorial));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_and_cli_ros2__msg__Tutorial));
  bool success = srv_and_cli_ros2__msg__Tutorial__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
srv_and_cli_ros2__msg__Tutorial__destroy(srv_and_cli_ros2__msg__Tutorial * msg)
{
  if (msg) {
    srv_and_cli_ros2__msg__Tutorial__fini(msg);
  }
  free(msg);
}


bool
srv_and_cli_ros2__msg__Tutorial__Sequence__init(srv_and_cli_ros2__msg__Tutorial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  srv_and_cli_ros2__msg__Tutorial * data = NULL;
  if (size) {
    data = (srv_and_cli_ros2__msg__Tutorial *)calloc(size, sizeof(srv_and_cli_ros2__msg__Tutorial));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_and_cli_ros2__msg__Tutorial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_and_cli_ros2__msg__Tutorial__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srv_and_cli_ros2__msg__Tutorial__Sequence__fini(srv_and_cli_ros2__msg__Tutorial__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_and_cli_ros2__msg__Tutorial__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srv_and_cli_ros2__msg__Tutorial__Sequence *
srv_and_cli_ros2__msg__Tutorial__Sequence__create(size_t size)
{
  srv_and_cli_ros2__msg__Tutorial__Sequence * array = (srv_and_cli_ros2__msg__Tutorial__Sequence *)malloc(sizeof(srv_and_cli_ros2__msg__Tutorial__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = srv_and_cli_ros2__msg__Tutorial__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
srv_and_cli_ros2__msg__Tutorial__Sequence__destroy(srv_and_cli_ros2__msg__Tutorial__Sequence * array)
{
  if (array) {
    srv_and_cli_ros2__msg__Tutorial__Sequence__fini(array);
  }
  free(array);
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srv_and_cli_ros2:srv/Tutorial.idl
// generated code does not contain a copyright notice
#include "srv_and_cli_ros2/srv/detail/tutorial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
srv_and_cli_ros2__srv__Tutorial_Request__init(srv_and_cli_ros2__srv__Tutorial_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
srv_and_cli_ros2__srv__Tutorial_Request__fini(srv_and_cli_ros2__srv__Tutorial_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

srv_and_cli_ros2__srv__Tutorial_Request *
srv_and_cli_ros2__srv__Tutorial_Request__create()
{
  srv_and_cli_ros2__srv__Tutorial_Request * msg = (srv_and_cli_ros2__srv__Tutorial_Request *)malloc(sizeof(srv_and_cli_ros2__srv__Tutorial_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_and_cli_ros2__srv__Tutorial_Request));
  bool success = srv_and_cli_ros2__srv__Tutorial_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
srv_and_cli_ros2__srv__Tutorial_Request__destroy(srv_and_cli_ros2__srv__Tutorial_Request * msg)
{
  if (msg) {
    srv_and_cli_ros2__srv__Tutorial_Request__fini(msg);
  }
  free(msg);
}


bool
srv_and_cli_ros2__srv__Tutorial_Request__Sequence__init(srv_and_cli_ros2__srv__Tutorial_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  srv_and_cli_ros2__srv__Tutorial_Request * data = NULL;
  if (size) {
    data = (srv_and_cli_ros2__srv__Tutorial_Request *)calloc(size, sizeof(srv_and_cli_ros2__srv__Tutorial_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_and_cli_ros2__srv__Tutorial_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_and_cli_ros2__srv__Tutorial_Request__fini(&data[i - 1]);
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
srv_and_cli_ros2__srv__Tutorial_Request__Sequence__fini(srv_and_cli_ros2__srv__Tutorial_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_and_cli_ros2__srv__Tutorial_Request__fini(&array->data[i]);
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

srv_and_cli_ros2__srv__Tutorial_Request__Sequence *
srv_and_cli_ros2__srv__Tutorial_Request__Sequence__create(size_t size)
{
  srv_and_cli_ros2__srv__Tutorial_Request__Sequence * array = (srv_and_cli_ros2__srv__Tutorial_Request__Sequence *)malloc(sizeof(srv_and_cli_ros2__srv__Tutorial_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = srv_and_cli_ros2__srv__Tutorial_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
srv_and_cli_ros2__srv__Tutorial_Request__Sequence__destroy(srv_and_cli_ros2__srv__Tutorial_Request__Sequence * array)
{
  if (array) {
    srv_and_cli_ros2__srv__Tutorial_Request__Sequence__fini(array);
  }
  free(array);
}


bool
srv_and_cli_ros2__srv__Tutorial_Response__init(srv_and_cli_ros2__srv__Tutorial_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
srv_and_cli_ros2__srv__Tutorial_Response__fini(srv_and_cli_ros2__srv__Tutorial_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

srv_and_cli_ros2__srv__Tutorial_Response *
srv_and_cli_ros2__srv__Tutorial_Response__create()
{
  srv_and_cli_ros2__srv__Tutorial_Response * msg = (srv_and_cli_ros2__srv__Tutorial_Response *)malloc(sizeof(srv_and_cli_ros2__srv__Tutorial_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_and_cli_ros2__srv__Tutorial_Response));
  bool success = srv_and_cli_ros2__srv__Tutorial_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
srv_and_cli_ros2__srv__Tutorial_Response__destroy(srv_and_cli_ros2__srv__Tutorial_Response * msg)
{
  if (msg) {
    srv_and_cli_ros2__srv__Tutorial_Response__fini(msg);
  }
  free(msg);
}


bool
srv_and_cli_ros2__srv__Tutorial_Response__Sequence__init(srv_and_cli_ros2__srv__Tutorial_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  srv_and_cli_ros2__srv__Tutorial_Response * data = NULL;
  if (size) {
    data = (srv_and_cli_ros2__srv__Tutorial_Response *)calloc(size, sizeof(srv_and_cli_ros2__srv__Tutorial_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_and_cli_ros2__srv__Tutorial_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_and_cli_ros2__srv__Tutorial_Response__fini(&data[i - 1]);
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
srv_and_cli_ros2__srv__Tutorial_Response__Sequence__fini(srv_and_cli_ros2__srv__Tutorial_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_and_cli_ros2__srv__Tutorial_Response__fini(&array->data[i]);
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

srv_and_cli_ros2__srv__Tutorial_Response__Sequence *
srv_and_cli_ros2__srv__Tutorial_Response__Sequence__create(size_t size)
{
  srv_and_cli_ros2__srv__Tutorial_Response__Sequence * array = (srv_and_cli_ros2__srv__Tutorial_Response__Sequence *)malloc(sizeof(srv_and_cli_ros2__srv__Tutorial_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = srv_and_cli_ros2__srv__Tutorial_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
srv_and_cli_ros2__srv__Tutorial_Response__Sequence__destroy(srv_and_cli_ros2__srv__Tutorial_Response__Sequence * array)
{
  if (array) {
    srv_and_cli_ros2__srv__Tutorial_Response__Sequence__fini(array);
  }
  free(array);
}

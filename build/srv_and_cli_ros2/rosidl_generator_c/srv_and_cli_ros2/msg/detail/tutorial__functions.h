// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__FUNCTIONS_H_
#define SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "srv_and_cli_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "srv_and_cli_ros2/msg/detail/tutorial__struct.h"

/// Initialize msg/Tutorial message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_and_cli_ros2__msg__Tutorial
 * )) before or use
 * srv_and_cli_ros2__msg__Tutorial__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
bool
srv_and_cli_ros2__msg__Tutorial__init(srv_and_cli_ros2__msg__Tutorial * msg);

/// Finalize msg/Tutorial message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
void
srv_and_cli_ros2__msg__Tutorial__fini(srv_and_cli_ros2__msg__Tutorial * msg);

/// Create msg/Tutorial message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_and_cli_ros2__msg__Tutorial__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
srv_and_cli_ros2__msg__Tutorial *
srv_and_cli_ros2__msg__Tutorial__create();

/// Destroy msg/Tutorial message.
/**
 * It calls
 * srv_and_cli_ros2__msg__Tutorial__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
void
srv_and_cli_ros2__msg__Tutorial__destroy(srv_and_cli_ros2__msg__Tutorial * msg);


/// Initialize array of msg/Tutorial messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_and_cli_ros2__msg__Tutorial__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
bool
srv_and_cli_ros2__msg__Tutorial__Sequence__init(srv_and_cli_ros2__msg__Tutorial__Sequence * array, size_t size);

/// Finalize array of msg/Tutorial messages.
/**
 * It calls
 * srv_and_cli_ros2__msg__Tutorial__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
void
srv_and_cli_ros2__msg__Tutorial__Sequence__fini(srv_and_cli_ros2__msg__Tutorial__Sequence * array);

/// Create array of msg/Tutorial messages.
/**
 * It allocates the memory for the array and calls
 * srv_and_cli_ros2__msg__Tutorial__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
srv_and_cli_ros2__msg__Tutorial__Sequence *
srv_and_cli_ros2__msg__Tutorial__Sequence__create(size_t size);

/// Destroy array of msg/Tutorial messages.
/**
 * It calls
 * srv_and_cli_ros2__msg__Tutorial__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_and_cli_ros2
void
srv_and_cli_ros2__msg__Tutorial__Sequence__destroy(srv_and_cli_ros2__msg__Tutorial__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__FUNCTIONS_H_

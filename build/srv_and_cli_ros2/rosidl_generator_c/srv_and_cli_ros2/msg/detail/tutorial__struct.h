// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__STRUCT_H_
#define SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Tutorial in the package srv_and_cli_ros2.
typedef struct srv_and_cli_ros2__msg__Tutorial
{
  int64_t num;
} srv_and_cli_ros2__msg__Tutorial;

// Struct for a sequence of srv_and_cli_ros2__msg__Tutorial.
typedef struct srv_and_cli_ros2__msg__Tutorial__Sequence
{
  srv_and_cli_ros2__msg__Tutorial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_and_cli_ros2__msg__Tutorial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__STRUCT_H_

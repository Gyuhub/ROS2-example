// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_and_cli_ros2:srv/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__STRUCT_H_
#define SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Tutorial in the package srv_and_cli_ros2.
typedef struct srv_and_cli_ros2__srv__Tutorial_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} srv_and_cli_ros2__srv__Tutorial_Request;

// Struct for a sequence of srv_and_cli_ros2__srv__Tutorial_Request.
typedef struct srv_and_cli_ros2__srv__Tutorial_Request__Sequence
{
  srv_and_cli_ros2__srv__Tutorial_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_and_cli_ros2__srv__Tutorial_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Tutorial in the package srv_and_cli_ros2.
typedef struct srv_and_cli_ros2__srv__Tutorial_Response
{
  int64_t sum;
} srv_and_cli_ros2__srv__Tutorial_Response;

// Struct for a sequence of srv_and_cli_ros2__srv__Tutorial_Response.
typedef struct srv_and_cli_ros2__srv__Tutorial_Response__Sequence
{
  srv_and_cli_ros2__srv__Tutorial_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_and_cli_ros2__srv__Tutorial_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__STRUCT_H_

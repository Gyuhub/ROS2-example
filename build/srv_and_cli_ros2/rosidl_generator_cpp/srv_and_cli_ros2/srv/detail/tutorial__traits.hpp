// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_and_cli_ros2:srv/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__TRAITS_HPP_
#define SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__TRAITS_HPP_

#include "srv_and_cli_ros2/srv/detail/tutorial__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_and_cli_ros2::srv::Tutorial_Request>()
{
  return "srv_and_cli_ros2::srv::Tutorial_Request";
}

template<>
inline const char * name<srv_and_cli_ros2::srv::Tutorial_Request>()
{
  return "srv_and_cli_ros2/srv/Tutorial_Request";
}

template<>
struct has_fixed_size<srv_and_cli_ros2::srv::Tutorial_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_and_cli_ros2::srv::Tutorial_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_and_cli_ros2::srv::Tutorial_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_and_cli_ros2::srv::Tutorial_Response>()
{
  return "srv_and_cli_ros2::srv::Tutorial_Response";
}

template<>
inline const char * name<srv_and_cli_ros2::srv::Tutorial_Response>()
{
  return "srv_and_cli_ros2/srv/Tutorial_Response";
}

template<>
struct has_fixed_size<srv_and_cli_ros2::srv::Tutorial_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_and_cli_ros2::srv::Tutorial_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_and_cli_ros2::srv::Tutorial_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_and_cli_ros2::srv::Tutorial>()
{
  return "srv_and_cli_ros2::srv::Tutorial";
}

template<>
inline const char * name<srv_and_cli_ros2::srv::Tutorial>()
{
  return "srv_and_cli_ros2/srv/Tutorial";
}

template<>
struct has_fixed_size<srv_and_cli_ros2::srv::Tutorial>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_and_cli_ros2::srv::Tutorial_Request>::value &&
    has_fixed_size<srv_and_cli_ros2::srv::Tutorial_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_and_cli_ros2::srv::Tutorial>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_and_cli_ros2::srv::Tutorial_Request>::value &&
    has_bounded_size<srv_and_cli_ros2::srv::Tutorial_Response>::value
  >
{
};

template<>
struct is_service<srv_and_cli_ros2::srv::Tutorial>
  : std::true_type
{
};

template<>
struct is_service_request<srv_and_cli_ros2::srv::Tutorial_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_and_cli_ros2::srv::Tutorial_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__TRAITS_HPP_
#define SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__TRAITS_HPP_

#include "srv_and_cli_ros2/msg/detail/tutorial__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_and_cli_ros2::msg::Tutorial>()
{
  return "srv_and_cli_ros2::msg::Tutorial";
}

template<>
inline const char * name<srv_and_cli_ros2::msg::Tutorial>()
{
  return "srv_and_cli_ros2/msg/Tutorial";
}

template<>
struct has_fixed_size<srv_and_cli_ros2::msg::Tutorial>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_and_cli_ros2::msg::Tutorial>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_and_cli_ros2::msg::Tutorial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__TRAITS_HPP_

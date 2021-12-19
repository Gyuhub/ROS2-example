// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__BUILDER_HPP_
#define SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__BUILDER_HPP_

#include "srv_and_cli_ros2/msg/detail/tutorial__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace srv_and_cli_ros2
{

namespace msg
{

namespace builder
{

class Init_Tutorial_num
{
public:
  Init_Tutorial_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_and_cli_ros2::msg::Tutorial num(::srv_and_cli_ros2::msg::Tutorial::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_and_cli_ros2::msg::Tutorial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_and_cli_ros2::msg::Tutorial>()
{
  return srv_and_cli_ros2::msg::builder::Init_Tutorial_num();
}

}  // namespace srv_and_cli_ros2

#endif  // SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__BUILDER_HPP_

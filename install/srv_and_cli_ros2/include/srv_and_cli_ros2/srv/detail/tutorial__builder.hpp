// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_and_cli_ros2:srv/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__BUILDER_HPP_
#define SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__BUILDER_HPP_

#include "srv_and_cli_ros2/srv/detail/tutorial__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace srv_and_cli_ros2
{

namespace srv
{

namespace builder
{

class Init_Tutorial_Request_c
{
public:
  explicit Init_Tutorial_Request_c(::srv_and_cli_ros2::srv::Tutorial_Request & msg)
  : msg_(msg)
  {}
  ::srv_and_cli_ros2::srv::Tutorial_Request c(::srv_and_cli_ros2::srv::Tutorial_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_and_cli_ros2::srv::Tutorial_Request msg_;
};

class Init_Tutorial_Request_b
{
public:
  explicit Init_Tutorial_Request_b(::srv_and_cli_ros2::srv::Tutorial_Request & msg)
  : msg_(msg)
  {}
  Init_Tutorial_Request_c b(::srv_and_cli_ros2::srv::Tutorial_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Tutorial_Request_c(msg_);
  }

private:
  ::srv_and_cli_ros2::srv::Tutorial_Request msg_;
};

class Init_Tutorial_Request_a
{
public:
  Init_Tutorial_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tutorial_Request_b a(::srv_and_cli_ros2::srv::Tutorial_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Tutorial_Request_b(msg_);
  }

private:
  ::srv_and_cli_ros2::srv::Tutorial_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_and_cli_ros2::srv::Tutorial_Request>()
{
  return srv_and_cli_ros2::srv::builder::Init_Tutorial_Request_a();
}

}  // namespace srv_and_cli_ros2


namespace srv_and_cli_ros2
{

namespace srv
{

namespace builder
{

class Init_Tutorial_Response_sum
{
public:
  Init_Tutorial_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_and_cli_ros2::srv::Tutorial_Response sum(::srv_and_cli_ros2::srv::Tutorial_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_and_cli_ros2::srv::Tutorial_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_and_cli_ros2::srv::Tutorial_Response>()
{
  return srv_and_cli_ros2::srv::builder::Init_Tutorial_Response_sum();
}

}  // namespace srv_and_cli_ros2

#endif  // SRV_AND_CLI_ROS2__SRV__DETAIL__TUTORIAL__BUILDER_HPP_

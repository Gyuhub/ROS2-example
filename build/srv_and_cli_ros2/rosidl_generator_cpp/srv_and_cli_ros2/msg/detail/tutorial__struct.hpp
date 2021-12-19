// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__STRUCT_HPP_
#define SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__srv_and_cli_ros2__msg__Tutorial __attribute__((deprecated))
#else
# define DEPRECATED__srv_and_cli_ros2__msg__Tutorial __declspec(deprecated)
#endif

namespace srv_and_cli_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tutorial_
{
  using Type = Tutorial_<ContainerAllocator>;

  explicit Tutorial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit Tutorial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_and_cli_ros2__msg__Tutorial
    std::shared_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_and_cli_ros2__msg__Tutorial
    std::shared_ptr<srv_and_cli_ros2::msg::Tutorial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tutorial_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tutorial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tutorial_

// alias to use template instance with default allocator
using Tutorial =
  srv_and_cli_ros2::msg::Tutorial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace srv_and_cli_ros2

#endif  // SRV_AND_CLI_ROS2__MSG__DETAIL__TUTORIAL__STRUCT_HPP_

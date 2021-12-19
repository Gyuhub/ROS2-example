// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from srv_and_cli_ros2:msg/Tutorial.idl
// generated code does not contain a copyright notice
#include "srv_and_cli_ros2/msg/detail/tutorial__rosidl_typesupport_fastrtps_cpp.hpp"
#include "srv_and_cli_ros2/msg/detail/tutorial__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace srv_and_cli_ros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_and_cli_ros2
cdr_serialize(
  const srv_and_cli_ros2::msg::Tutorial & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num
  cdr << ros_message.num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_and_cli_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  srv_and_cli_ros2::msg::Tutorial & ros_message)
{
  // Member: num
  cdr >> ros_message.num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_and_cli_ros2
get_serialized_size(
  const srv_and_cli_ros2::msg::Tutorial & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num
  {
    size_t item_size = sizeof(ros_message.num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_and_cli_ros2
max_serialized_size_Tutorial(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Tutorial__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const srv_and_cli_ros2::msg::Tutorial *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tutorial__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<srv_and_cli_ros2::msg::Tutorial *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tutorial__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const srv_and_cli_ros2::msg::Tutorial *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tutorial__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tutorial(full_bounded, 0);
}

static message_type_support_callbacks_t _Tutorial__callbacks = {
  "srv_and_cli_ros2::msg",
  "Tutorial",
  _Tutorial__cdr_serialize,
  _Tutorial__cdr_deserialize,
  _Tutorial__get_serialized_size,
  _Tutorial__max_serialized_size
};

static rosidl_message_type_support_t _Tutorial__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tutorial__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace srv_and_cli_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_srv_and_cli_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<srv_and_cli_ros2::msg::Tutorial>()
{
  return &srv_and_cli_ros2::msg::typesupport_fastrtps_cpp::_Tutorial__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srv_and_cli_ros2, msg, Tutorial)() {
  return &srv_and_cli_ros2::msg::typesupport_fastrtps_cpp::_Tutorial__handle;
}

#ifdef __cplusplus
}
#endif

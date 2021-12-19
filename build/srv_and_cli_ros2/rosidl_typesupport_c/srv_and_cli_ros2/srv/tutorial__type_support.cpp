// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from srv_and_cli_ros2:srv/Tutorial.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "srv_and_cli_ros2/msg/rosidl_typesupport_c__visibility_control.h"
#include "srv_and_cli_ros2/srv/detail/tutorial__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace srv_and_cli_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Tutorial_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Tutorial_Request_type_support_ids_t;

static const _Tutorial_Request_type_support_ids_t _Tutorial_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Tutorial_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Tutorial_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Tutorial_Request_type_support_symbol_names_t _Tutorial_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_and_cli_ros2, srv, Tutorial_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Request)),
  }
};

typedef struct _Tutorial_Request_type_support_data_t
{
  void * data[2];
} _Tutorial_Request_type_support_data_t;

static _Tutorial_Request_type_support_data_t _Tutorial_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Tutorial_Request_message_typesupport_map = {
  2,
  "srv_and_cli_ros2",
  &_Tutorial_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Tutorial_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Tutorial_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Tutorial_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Tutorial_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_and_cli_ros2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_srv_and_cli_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, srv_and_cli_ros2, srv, Tutorial_Request)() {
  return &::srv_and_cli_ros2::srv::rosidl_typesupport_c::Tutorial_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "srv_and_cli_ros2/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "srv_and_cli_ros2/srv/detail/tutorial__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace srv_and_cli_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Tutorial_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Tutorial_Response_type_support_ids_t;

static const _Tutorial_Response_type_support_ids_t _Tutorial_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Tutorial_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Tutorial_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Tutorial_Response_type_support_symbol_names_t _Tutorial_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_and_cli_ros2, srv, Tutorial_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Response)),
  }
};

typedef struct _Tutorial_Response_type_support_data_t
{
  void * data[2];
} _Tutorial_Response_type_support_data_t;

static _Tutorial_Response_type_support_data_t _Tutorial_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Tutorial_Response_message_typesupport_map = {
  2,
  "srv_and_cli_ros2",
  &_Tutorial_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Tutorial_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Tutorial_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Tutorial_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Tutorial_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_and_cli_ros2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_srv_and_cli_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, srv_and_cli_ros2, srv, Tutorial_Response)() {
  return &::srv_and_cli_ros2::srv::rosidl_typesupport_c::Tutorial_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "srv_and_cli_ros2/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace srv_and_cli_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Tutorial_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Tutorial_type_support_ids_t;

static const _Tutorial_type_support_ids_t _Tutorial_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Tutorial_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Tutorial_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Tutorial_type_support_symbol_names_t _Tutorial_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_and_cli_ros2, srv, Tutorial)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial)),
  }
};

typedef struct _Tutorial_type_support_data_t
{
  void * data[2];
} _Tutorial_type_support_data_t;

static _Tutorial_type_support_data_t _Tutorial_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Tutorial_service_typesupport_map = {
  2,
  "srv_and_cli_ros2",
  &_Tutorial_service_typesupport_ids.typesupport_identifier[0],
  &_Tutorial_service_typesupport_symbol_names.symbol_name[0],
  &_Tutorial_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Tutorial_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Tutorial_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace srv_and_cli_ros2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_srv_and_cli_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, srv_and_cli_ros2, srv, Tutorial)() {
  return &::srv_and_cli_ros2::srv::rosidl_typesupport_c::Tutorial_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
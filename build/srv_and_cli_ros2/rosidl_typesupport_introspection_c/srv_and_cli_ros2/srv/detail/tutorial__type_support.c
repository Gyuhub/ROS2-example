// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srv_and_cli_ros2:srv/Tutorial.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srv_and_cli_ros2/srv/detail/tutorial__rosidl_typesupport_introspection_c.h"
#include "srv_and_cli_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srv_and_cli_ros2/srv/detail/tutorial__functions.h"
#include "srv_and_cli_ros2/srv/detail/tutorial__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_and_cli_ros2__srv__Tutorial_Request__init(message_memory);
}

void Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_fini_function(void * message_memory)
{
  srv_and_cli_ros2__srv__Tutorial_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_and_cli_ros2__srv__Tutorial_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_and_cli_ros2__srv__Tutorial_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_and_cli_ros2__srv__Tutorial_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_members = {
  "srv_and_cli_ros2__srv",  // message namespace
  "Tutorial_Request",  // message name
  3,  // number of fields
  sizeof(srv_and_cli_ros2__srv__Tutorial_Request),
  Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_member_array,  // message members
  Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_type_support_handle = {
  0,
  &Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_and_cli_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Request)() {
  if (!Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_type_support_handle.typesupport_identifier) {
    Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tutorial_Request__rosidl_typesupport_introspection_c__Tutorial_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "srv_and_cli_ros2/srv/detail/tutorial__rosidl_typesupport_introspection_c.h"
// already included above
// #include "srv_and_cli_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "srv_and_cli_ros2/srv/detail/tutorial__functions.h"
// already included above
// #include "srv_and_cli_ros2/srv/detail/tutorial__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_and_cli_ros2__srv__Tutorial_Response__init(message_memory);
}

void Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_fini_function(void * message_memory)
{
  srv_and_cli_ros2__srv__Tutorial_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_and_cli_ros2__srv__Tutorial_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_members = {
  "srv_and_cli_ros2__srv",  // message namespace
  "Tutorial_Response",  // message name
  1,  // number of fields
  sizeof(srv_and_cli_ros2__srv__Tutorial_Response),
  Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_member_array,  // message members
  Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_type_support_handle = {
  0,
  &Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_and_cli_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Response)() {
  if (!Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_type_support_handle.typesupport_identifier) {
    Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tutorial_Response__rosidl_typesupport_introspection_c__Tutorial_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "srv_and_cli_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "srv_and_cli_ros2/srv/detail/tutorial__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_members = {
  "srv_and_cli_ros2__srv",  // service namespace
  "Tutorial",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_Request_message_type_support_handle,
  NULL  // response message
  // srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_Response_message_type_support_handle
};

static rosidl_service_type_support_t srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_type_support_handle = {
  0,
  &srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_and_cli_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial)() {
  if (!srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_type_support_handle.typesupport_identifier) {
    srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_and_cli_ros2, srv, Tutorial_Response)()->data;
  }

  return &srv_and_cli_ros2__srv__detail__tutorial__rosidl_typesupport_introspection_c__Tutorial_service_type_support_handle;
}
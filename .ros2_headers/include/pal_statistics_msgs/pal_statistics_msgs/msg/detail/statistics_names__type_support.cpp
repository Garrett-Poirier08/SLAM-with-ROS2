// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pal_statistics_msgs:msg/StatisticsNames.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pal_statistics_msgs/msg/detail/statistics_names__functions.h"
#include "pal_statistics_msgs/msg/detail/statistics_names__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_statistics_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StatisticsNames_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_statistics_msgs::msg::StatisticsNames(_init);
}

void StatisticsNames_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_statistics_msgs::msg::StatisticsNames *>(message_memory);
  typed_message->~StatisticsNames();
}

size_t size_function__StatisticsNames__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StatisticsNames__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StatisticsNames__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StatisticsNames__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StatisticsNames__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StatisticsNames__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StatisticsNames__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StatisticsNames__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StatisticsNames_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs::msg::StatisticsNames, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs::msg::StatisticsNames, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__StatisticsNames__names,  // size() function pointer
    get_const_function__StatisticsNames__names,  // get_const(index) function pointer
    get_function__StatisticsNames__names,  // get(index) function pointer
    fetch_function__StatisticsNames__names,  // fetch(index, &value) function pointer
    assign_function__StatisticsNames__names,  // assign(index, value) function pointer
    resize_function__StatisticsNames__names  // resize(index) function pointer
  },
  {
    "names_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs::msg::StatisticsNames, names_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StatisticsNames_message_members = {
  "pal_statistics_msgs::msg",  // message namespace
  "StatisticsNames",  // message name
  3,  // number of fields
  sizeof(pal_statistics_msgs::msg::StatisticsNames),
  false,  // has_any_key_member_
  StatisticsNames_message_member_array,  // message members
  StatisticsNames_init_function,  // function to initialize message memory (memory has to be allocated)
  StatisticsNames_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StatisticsNames_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StatisticsNames_message_members,
  get_message_typesupport_handle_function,
  &pal_statistics_msgs__msg__StatisticsNames__get_type_hash,
  &pal_statistics_msgs__msg__StatisticsNames__get_type_description,
  &pal_statistics_msgs__msg__StatisticsNames__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pal_statistics_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_statistics_msgs::msg::StatisticsNames>()
{
  return &::pal_statistics_msgs::msg::rosidl_typesupport_introspection_cpp::StatisticsNames_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_statistics_msgs, msg, StatisticsNames)() {
  return &::pal_statistics_msgs::msg::rosidl_typesupport_introspection_cpp::StatisticsNames_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

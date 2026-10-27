// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marine_acoustic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SonarDetections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_acoustic_msgs::msg::SonarDetections(_init);
}

void SonarDetections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_acoustic_msgs::msg::SonarDetections *>(message_memory);
  typed_message->~SonarDetections();
}

size_t size_function__SonarDetections__flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarDetections__flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarDetections__flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarDetections__flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(
    get_const_function__SonarDetections__flags(untyped_member, index));
  auto & value = *reinterpret_cast<marine_acoustic_msgs::msg::DetectionFlag *>(untyped_value);
  value = item;
}

void assign_function__SonarDetections__flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marine_acoustic_msgs::msg::DetectionFlag *>(
    get_function__SonarDetections__flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(untyped_value);
  item = value;
}

void resize_function__SonarDetections__flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarDetections__two_way_travel_times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarDetections__two_way_travel_times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarDetections__two_way_travel_times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarDetections__two_way_travel_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarDetections__two_way_travel_times(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarDetections__two_way_travel_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarDetections__two_way_travel_times(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarDetections__two_way_travel_times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarDetections__tx_delays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarDetections__tx_delays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarDetections__tx_delays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarDetections__tx_delays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarDetections__tx_delays(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarDetections__tx_delays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarDetections__tx_delays(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarDetections__tx_delays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarDetections__intensities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarDetections__intensities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarDetections__intensities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarDetections__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarDetections__intensities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarDetections__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarDetections__intensities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarDetections__intensities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarDetections__tx_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarDetections__tx_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarDetections__tx_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarDetections__tx_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarDetections__tx_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarDetections__tx_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarDetections__tx_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarDetections__tx_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarDetections__rx_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarDetections__rx_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarDetections__rx_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarDetections__rx_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarDetections__rx_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarDetections__rx_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarDetections__rx_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarDetections__rx_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SonarDetections_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ping_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marine_acoustic_msgs::msg::PingInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, ping_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marine_acoustic_msgs::msg::DetectionFlag>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarDetections__flags,  // size() function pointer
    get_const_function__SonarDetections__flags,  // get_const(index) function pointer
    get_function__SonarDetections__flags,  // get(index) function pointer
    fetch_function__SonarDetections__flags,  // fetch(index, &value) function pointer
    assign_function__SonarDetections__flags,  // assign(index, value) function pointer
    resize_function__SonarDetections__flags  // resize(index) function pointer
  },
  {
    "two_way_travel_times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, two_way_travel_times),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarDetections__two_way_travel_times,  // size() function pointer
    get_const_function__SonarDetections__two_way_travel_times,  // get_const(index) function pointer
    get_function__SonarDetections__two_way_travel_times,  // get(index) function pointer
    fetch_function__SonarDetections__two_way_travel_times,  // fetch(index, &value) function pointer
    assign_function__SonarDetections__two_way_travel_times,  // assign(index, value) function pointer
    resize_function__SonarDetections__two_way_travel_times  // resize(index) function pointer
  },
  {
    "tx_delays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, tx_delays),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarDetections__tx_delays,  // size() function pointer
    get_const_function__SonarDetections__tx_delays,  // get_const(index) function pointer
    get_function__SonarDetections__tx_delays,  // get(index) function pointer
    fetch_function__SonarDetections__tx_delays,  // fetch(index, &value) function pointer
    assign_function__SonarDetections__tx_delays,  // assign(index, value) function pointer
    resize_function__SonarDetections__tx_delays  // resize(index) function pointer
  },
  {
    "intensities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, intensities),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarDetections__intensities,  // size() function pointer
    get_const_function__SonarDetections__intensities,  // get_const(index) function pointer
    get_function__SonarDetections__intensities,  // get(index) function pointer
    fetch_function__SonarDetections__intensities,  // fetch(index, &value) function pointer
    assign_function__SonarDetections__intensities,  // assign(index, value) function pointer
    resize_function__SonarDetections__intensities  // resize(index) function pointer
  },
  {
    "tx_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, tx_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarDetections__tx_angles,  // size() function pointer
    get_const_function__SonarDetections__tx_angles,  // get_const(index) function pointer
    get_function__SonarDetections__tx_angles,  // get(index) function pointer
    fetch_function__SonarDetections__tx_angles,  // fetch(index, &value) function pointer
    assign_function__SonarDetections__tx_angles,  // assign(index, value) function pointer
    resize_function__SonarDetections__tx_angles  // resize(index) function pointer
  },
  {
    "rx_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarDetections, rx_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarDetections__rx_angles,  // size() function pointer
    get_const_function__SonarDetections__rx_angles,  // get_const(index) function pointer
    get_function__SonarDetections__rx_angles,  // get(index) function pointer
    fetch_function__SonarDetections__rx_angles,  // fetch(index, &value) function pointer
    assign_function__SonarDetections__rx_angles,  // assign(index, value) function pointer
    resize_function__SonarDetections__rx_angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SonarDetections_message_members = {
  "marine_acoustic_msgs::msg",  // message namespace
  "SonarDetections",  // message name
  8,  // number of fields
  sizeof(marine_acoustic_msgs::msg::SonarDetections),
  false,  // has_any_key_member_
  SonarDetections_message_member_array,  // message members
  SonarDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  SonarDetections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SonarDetections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SonarDetections_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_hash,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::SonarDetections>()
{
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::SonarDetections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_acoustic_msgs, msg, SonarDetections)() {
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::SonarDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

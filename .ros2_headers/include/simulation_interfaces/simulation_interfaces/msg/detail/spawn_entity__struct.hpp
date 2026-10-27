// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/SpawnEntity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawn_entity.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__struct.hpp"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__SpawnEntity __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__SpawnEntity __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpawnEntity_
{
  using Type = SpawnEntity_<ContainerAllocator>;

  explicit SpawnEntity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity_resource(_init),
    initial_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->allow_renaming = false;
      this->entity_namespace = "";
    }
  }

  explicit SpawnEntity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    entity_resource(_alloc, _init),
    entity_namespace(_alloc),
    initial_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->allow_renaming = false;
      this->entity_namespace = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _allow_renaming_type =
    bool;
  _allow_renaming_type allow_renaming;
  using _entity_resource_type =
    simulation_interfaces::msg::Resource_<ContainerAllocator>;
  _entity_resource_type entity_resource;
  using _entity_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_namespace_type entity_namespace;
  using _initial_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _initial_pose_type initial_pose;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__allow_renaming(
    const bool & _arg)
  {
    this->allow_renaming = _arg;
    return *this;
  }
  Type & set__entity_resource(
    const simulation_interfaces::msg::Resource_<ContainerAllocator> & _arg)
  {
    this->entity_resource = _arg;
    return *this;
  }
  Type & set__entity_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_namespace = _arg;
    return *this;
  }
  Type & set__initial_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->initial_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::SpawnEntity_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::SpawnEntity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SpawnEntity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SpawnEntity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__SpawnEntity
    std::shared_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__SpawnEntity
    std::shared_ptr<simulation_interfaces::msg::SpawnEntity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnEntity_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->allow_renaming != other.allow_renaming) {
      return false;
    }
    if (this->entity_resource != other.entity_resource) {
      return false;
    }
    if (this->entity_namespace != other.entity_namespace) {
      return false;
    }
    if (this->initial_pose != other.initial_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnEntity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnEntity_

// alias to use template instance with default allocator
using SpawnEntity =
  simulation_interfaces::msg::SpawnEntity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__STRUCT_HPP_

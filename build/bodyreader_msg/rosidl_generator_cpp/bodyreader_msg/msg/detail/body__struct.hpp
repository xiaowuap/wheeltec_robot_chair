// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODY__STRUCT_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centerofmass'
#include "bodyreader_msg/msg/detail/vector3f__struct.hpp"
// Member 'joints'
#include "bodyreader_msg/msg/detail/joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyreader_msg__msg__Body __attribute__((deprecated))
#else
# define DEPRECATED__bodyreader_msg__msg__Body __declspec(deprecated)
#endif

namespace bodyreader_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Body_
{
  using Type = Body_<ContainerAllocator>;

  explicit Body_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centerofmass(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bodyid = 0;
      this->joints.fill(bodyreader_msg::msg::Joint_<ContainerAllocator>{_init});
    }
  }

  explicit Body_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centerofmass(_alloc, _init),
    joints(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bodyid = 0;
      this->joints.fill(bodyreader_msg::msg::Joint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _bodyid_type =
    int16_t;
  _bodyid_type bodyid;
  using _centerofmass_type =
    bodyreader_msg::msg::Vector3f_<ContainerAllocator>;
  _centerofmass_type centerofmass;
  using _joints_type =
    std::array<bodyreader_msg::msg::Joint_<ContainerAllocator>, 19>;
  _joints_type joints;

  // setters for named parameter idiom
  Type & set__bodyid(
    const int16_t & _arg)
  {
    this->bodyid = _arg;
    return *this;
  }
  Type & set__centerofmass(
    const bodyreader_msg::msg::Vector3f_<ContainerAllocator> & _arg)
  {
    this->centerofmass = _arg;
    return *this;
  }
  Type & set__joints(
    const std::array<bodyreader_msg::msg::Joint_<ContainerAllocator>, 19> & _arg)
  {
    this->joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyreader_msg::msg::Body_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyreader_msg::msg::Body_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Body_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Body_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Body_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Body_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Body_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Body_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Body_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Body_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyreader_msg__msg__Body
    std::shared_ptr<bodyreader_msg::msg::Body_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyreader_msg__msg__Body
    std::shared_ptr<bodyreader_msg::msg::Body_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Body_ & other) const
  {
    if (this->bodyid != other.bodyid) {
      return false;
    }
    if (this->centerofmass != other.centerofmass) {
      return false;
    }
    if (this->joints != other.joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const Body_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Body_

// alias to use template instance with default allocator
using Body =
  bodyreader_msg::msg::Body_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__BODY__STRUCT_HPP_

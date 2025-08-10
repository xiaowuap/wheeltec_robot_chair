// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__STRUCT_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyreader_msg__msg__Bodyposture __attribute__((deprecated))
#else
# define DEPRECATED__bodyreader_msg__msg__Bodyposture __declspec(deprecated)
#endif

namespace bodyreader_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bodyposture_
{
  using Type = Bodyposture_<ContainerAllocator>;

  explicit Bodyposture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bodyid = 0;
      this->centerofmass_x = 0.0f;
      this->centerofmass_y = 0.0f;
      this->centerofmass_z = 0.0f;
      this->left_arm_out = 0;
      this->right_arm_out = 0;
      this->left_hand_raised = 0;
      this->right_hand_raised = 0;
      this->akimibo = 0;
      this->left_foot_up = 0;
      this->right_foot_up = 0;
      this->fall = 0;
      this->tips = 0;
      this->lock_status = 0;
    }
  }

  explicit Bodyposture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bodyid = 0;
      this->centerofmass_x = 0.0f;
      this->centerofmass_y = 0.0f;
      this->centerofmass_z = 0.0f;
      this->left_arm_out = 0;
      this->right_arm_out = 0;
      this->left_hand_raised = 0;
      this->right_hand_raised = 0;
      this->akimibo = 0;
      this->left_foot_up = 0;
      this->right_foot_up = 0;
      this->fall = 0;
      this->tips = 0;
      this->lock_status = 0;
    }
  }

  // field types and members
  using _bodyid_type =
    int16_t;
  _bodyid_type bodyid;
  using _centerofmass_x_type =
    float;
  _centerofmass_x_type centerofmass_x;
  using _centerofmass_y_type =
    float;
  _centerofmass_y_type centerofmass_y;
  using _centerofmass_z_type =
    float;
  _centerofmass_z_type centerofmass_z;
  using _left_arm_out_type =
    int8_t;
  _left_arm_out_type left_arm_out;
  using _right_arm_out_type =
    int8_t;
  _right_arm_out_type right_arm_out;
  using _left_hand_raised_type =
    int8_t;
  _left_hand_raised_type left_hand_raised;
  using _right_hand_raised_type =
    int8_t;
  _right_hand_raised_type right_hand_raised;
  using _akimibo_type =
    int8_t;
  _akimibo_type akimibo;
  using _left_foot_up_type =
    int8_t;
  _left_foot_up_type left_foot_up;
  using _right_foot_up_type =
    int8_t;
  _right_foot_up_type right_foot_up;
  using _fall_type =
    int8_t;
  _fall_type fall;
  using _tips_type =
    int8_t;
  _tips_type tips;
  using _lock_status_type =
    int8_t;
  _lock_status_type lock_status;

  // setters for named parameter idiom
  Type & set__bodyid(
    const int16_t & _arg)
  {
    this->bodyid = _arg;
    return *this;
  }
  Type & set__centerofmass_x(
    const float & _arg)
  {
    this->centerofmass_x = _arg;
    return *this;
  }
  Type & set__centerofmass_y(
    const float & _arg)
  {
    this->centerofmass_y = _arg;
    return *this;
  }
  Type & set__centerofmass_z(
    const float & _arg)
  {
    this->centerofmass_z = _arg;
    return *this;
  }
  Type & set__left_arm_out(
    const int8_t & _arg)
  {
    this->left_arm_out = _arg;
    return *this;
  }
  Type & set__right_arm_out(
    const int8_t & _arg)
  {
    this->right_arm_out = _arg;
    return *this;
  }
  Type & set__left_hand_raised(
    const int8_t & _arg)
  {
    this->left_hand_raised = _arg;
    return *this;
  }
  Type & set__right_hand_raised(
    const int8_t & _arg)
  {
    this->right_hand_raised = _arg;
    return *this;
  }
  Type & set__akimibo(
    const int8_t & _arg)
  {
    this->akimibo = _arg;
    return *this;
  }
  Type & set__left_foot_up(
    const int8_t & _arg)
  {
    this->left_foot_up = _arg;
    return *this;
  }
  Type & set__right_foot_up(
    const int8_t & _arg)
  {
    this->right_foot_up = _arg;
    return *this;
  }
  Type & set__fall(
    const int8_t & _arg)
  {
    this->fall = _arg;
    return *this;
  }
  Type & set__tips(
    const int8_t & _arg)
  {
    this->tips = _arg;
    return *this;
  }
  Type & set__lock_status(
    const int8_t & _arg)
  {
    this->lock_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyreader_msg::msg::Bodyposture_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyreader_msg::msg::Bodyposture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Bodyposture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Bodyposture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyreader_msg__msg__Bodyposture
    std::shared_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyreader_msg__msg__Bodyposture
    std::shared_ptr<bodyreader_msg::msg::Bodyposture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bodyposture_ & other) const
  {
    if (this->bodyid != other.bodyid) {
      return false;
    }
    if (this->centerofmass_x != other.centerofmass_x) {
      return false;
    }
    if (this->centerofmass_y != other.centerofmass_y) {
      return false;
    }
    if (this->centerofmass_z != other.centerofmass_z) {
      return false;
    }
    if (this->left_arm_out != other.left_arm_out) {
      return false;
    }
    if (this->right_arm_out != other.right_arm_out) {
      return false;
    }
    if (this->left_hand_raised != other.left_hand_raised) {
      return false;
    }
    if (this->right_hand_raised != other.right_hand_raised) {
      return false;
    }
    if (this->akimibo != other.akimibo) {
      return false;
    }
    if (this->left_foot_up != other.left_foot_up) {
      return false;
    }
    if (this->right_foot_up != other.right_foot_up) {
      return false;
    }
    if (this->fall != other.fall) {
      return false;
    }
    if (this->tips != other.tips) {
      return false;
    }
    if (this->lock_status != other.lock_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bodyposture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bodyposture_

// alias to use template instance with default allocator
using Bodyposture =
  bodyreader_msg::msg::Bodyposture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__STRUCT_HPP_

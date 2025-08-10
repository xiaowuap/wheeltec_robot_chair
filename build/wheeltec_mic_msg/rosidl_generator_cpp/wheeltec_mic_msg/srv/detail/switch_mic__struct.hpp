// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheeltec_mic_msg:srv/SwitchMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__STRUCT_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Request __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Request __declspec(deprecated)
#endif

namespace wheeltec_mic_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchMic_Request_
{
  using Type = SwitchMic_Request_<ContainerAllocator>;

  explicit SwitchMic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mic_name = "";
    }
  }

  explicit SwitchMic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mic_name = "";
    }
  }

  // field types and members
  using _mic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mic_name_type mic_name;

  // setters for named parameter idiom
  Type & set__mic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mic_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Request
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Request
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchMic_Request_ & other) const
  {
    if (this->mic_name != other.mic_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchMic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchMic_Request_

// alias to use template instance with default allocator
using SwitchMic_Request =
  wheeltec_mic_msg::srv::SwitchMic_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wheeltec_mic_msg


#ifndef _WIN32
# define DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Response __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Response __declspec(deprecated)
#endif

namespace wheeltec_mic_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchMic_Response_
{
  using Type = SwitchMic_Response_<ContainerAllocator>;

  explicit SwitchMic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result = "";
    }
  }

  explicit SwitchMic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Response
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_mic_msg__srv__SwitchMic_Response
    std::shared_ptr<wheeltec_mic_msg::srv::SwitchMic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchMic_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchMic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchMic_Response_

// alias to use template instance with default allocator
using SwitchMic_Response =
  wheeltec_mic_msg::srv::SwitchMic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace wheeltec_mic_msg
{

namespace srv
{

struct SwitchMic
{
  using Request = wheeltec_mic_msg::srv::SwitchMic_Request;
  using Response = wheeltec_mic_msg::srv::SwitchMic_Response;
};

}  // namespace srv

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SWITCH_MIC__STRUCT_HPP_

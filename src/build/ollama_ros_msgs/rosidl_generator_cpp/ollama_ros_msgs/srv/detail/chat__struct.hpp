// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ollama_ros_msgs:srv/Chat.idl
// generated code does not contain a copyright notice

#ifndef OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__STRUCT_HPP_
#define OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ollama_ros_msgs__srv__Chat_Request __attribute__((deprecated))
#else
# define DEPRECATED__ollama_ros_msgs__srv__Chat_Request __declspec(deprecated)
#endif

namespace ollama_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Chat_Request_
{
  using Type = Chat_Request_<ContainerAllocator>;

  explicit Chat_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
    }
  }

  explicit Chat_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
    }
  }

  // field types and members
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type content;

  // setters for named parameter idiom
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ollama_ros_msgs__srv__Chat_Request
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ollama_ros_msgs__srv__Chat_Request
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chat_Request_ & other) const
  {
    if (this->content != other.content) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chat_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chat_Request_

// alias to use template instance with default allocator
using Chat_Request =
  ollama_ros_msgs::srv::Chat_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ollama_ros_msgs


#ifndef _WIN32
# define DEPRECATED__ollama_ros_msgs__srv__Chat_Response __attribute__((deprecated))
#else
# define DEPRECATED__ollama_ros_msgs__srv__Chat_Response __declspec(deprecated)
#endif

namespace ollama_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Chat_Response_
{
  using Type = Chat_Response_<ContainerAllocator>;

  explicit Chat_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
      this->model = "";
      this->is_done = false;
    }
  }

  explicit Chat_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : content(_alloc),
    model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
      this->model = "";
      this->is_done = false;
    }
  }

  // field types and members
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type content;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;
  using _is_done_type =
    bool;
  _is_done_type is_done;

  // setters for named parameter idiom
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__is_done(
    const bool & _arg)
  {
    this->is_done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ollama_ros_msgs__srv__Chat_Response
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ollama_ros_msgs__srv__Chat_Response
    std::shared_ptr<ollama_ros_msgs::srv::Chat_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chat_Response_ & other) const
  {
    if (this->content != other.content) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->is_done != other.is_done) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chat_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chat_Response_

// alias to use template instance with default allocator
using Chat_Response =
  ollama_ros_msgs::srv::Chat_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ollama_ros_msgs

namespace ollama_ros_msgs
{

namespace srv
{

struct Chat
{
  using Request = ollama_ros_msgs::srv::Chat_Request;
  using Response = ollama_ros_msgs::srv::Chat_Response;
};

}  // namespace srv

}  // namespace ollama_ros_msgs

#endif  // OLLAMA_ROS_MSGS__SRV__DETAIL__CHAT__STRUCT_HPP_

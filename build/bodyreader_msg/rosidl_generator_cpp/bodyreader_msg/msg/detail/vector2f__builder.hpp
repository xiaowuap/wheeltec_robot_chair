// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Vector2f.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__VECTOR2F__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__VECTOR2F__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/vector2f__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Vector2f_y
{
public:
  explicit Init_Vector2f_y(::bodyreader_msg::msg::Vector2f & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Vector2f y(::bodyreader_msg::msg::Vector2f::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Vector2f msg_;
};

class Init_Vector2f_x
{
public:
  Init_Vector2f_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector2f_y x(::bodyreader_msg::msg::Vector2f::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector2f_y(msg_);
  }

private:
  ::bodyreader_msg::msg::Vector2f msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Vector2f>()
{
  return bodyreader_msg::msg::builder::Init_Vector2f_x();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__VECTOR2F__BUILDER_HPP_

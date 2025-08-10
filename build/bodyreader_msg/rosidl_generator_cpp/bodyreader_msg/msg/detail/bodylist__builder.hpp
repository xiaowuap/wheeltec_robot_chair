// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Bodylist.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYLIST__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODYLIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/bodylist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Bodylist_bodies
{
public:
  explicit Init_Bodylist_bodies(::bodyreader_msg::msg::Bodylist & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Bodylist bodies(::bodyreader_msg::msg::Bodylist::_bodies_type arg)
  {
    msg_.bodies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodylist msg_;
};

class Init_Bodylist_count
{
public:
  Init_Bodylist_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bodylist_bodies count(::bodyreader_msg::msg::Bodylist::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Bodylist_bodies(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodylist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Bodylist>()
{
  return bodyreader_msg::msg::builder::Init_Bodylist_count();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYLIST__BUILDER_HPP_

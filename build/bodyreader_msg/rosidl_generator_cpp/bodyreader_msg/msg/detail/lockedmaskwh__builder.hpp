// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/lockedmaskwh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Lockedmaskwh_height_b
{
public:
  explicit Init_Lockedmaskwh_height_b(::bodyreader_msg::msg::Lockedmaskwh & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Lockedmaskwh height_b(::bodyreader_msg::msg::Lockedmaskwh::_height_b_type arg)
  {
    msg_.height_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedmaskwh msg_;
};

class Init_Lockedmaskwh_height_t
{
public:
  explicit Init_Lockedmaskwh_height_t(::bodyreader_msg::msg::Lockedmaskwh & msg)
  : msg_(msg)
  {}
  Init_Lockedmaskwh_height_b height_t(::bodyreader_msg::msg::Lockedmaskwh::_height_t_type arg)
  {
    msg_.height_t = std::move(arg);
    return Init_Lockedmaskwh_height_b(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedmaskwh msg_;
};

class Init_Lockedmaskwh_width_r
{
public:
  explicit Init_Lockedmaskwh_width_r(::bodyreader_msg::msg::Lockedmaskwh & msg)
  : msg_(msg)
  {}
  Init_Lockedmaskwh_height_t width_r(::bodyreader_msg::msg::Lockedmaskwh::_width_r_type arg)
  {
    msg_.width_r = std::move(arg);
    return Init_Lockedmaskwh_height_t(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedmaskwh msg_;
};

class Init_Lockedmaskwh_width_l
{
public:
  Init_Lockedmaskwh_width_l()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lockedmaskwh_width_r width_l(::bodyreader_msg::msg::Lockedmaskwh::_width_l_type arg)
  {
    msg_.width_l = std::move(arg);
    return Init_Lockedmaskwh_width_r(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedmaskwh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Lockedmaskwh>()
{
  return bodyreader_msg::msg::builder::Init_Lockedmaskwh_width_l();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__BUILDER_HPP_

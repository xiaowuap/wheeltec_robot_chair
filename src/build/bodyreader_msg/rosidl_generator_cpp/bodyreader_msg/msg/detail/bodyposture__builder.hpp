// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/bodyposture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Bodyposture_lock_status
{
public:
  explicit Init_Bodyposture_lock_status(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Bodyposture lock_status(::bodyreader_msg::msg::Bodyposture::_lock_status_type arg)
  {
    msg_.lock_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_tips
{
public:
  explicit Init_Bodyposture_tips(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_lock_status tips(::bodyreader_msg::msg::Bodyposture::_tips_type arg)
  {
    msg_.tips = std::move(arg);
    return Init_Bodyposture_lock_status(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_fall
{
public:
  explicit Init_Bodyposture_fall(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_tips fall(::bodyreader_msg::msg::Bodyposture::_fall_type arg)
  {
    msg_.fall = std::move(arg);
    return Init_Bodyposture_tips(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_right_foot_up
{
public:
  explicit Init_Bodyposture_right_foot_up(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_fall right_foot_up(::bodyreader_msg::msg::Bodyposture::_right_foot_up_type arg)
  {
    msg_.right_foot_up = std::move(arg);
    return Init_Bodyposture_fall(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_left_foot_up
{
public:
  explicit Init_Bodyposture_left_foot_up(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_right_foot_up left_foot_up(::bodyreader_msg::msg::Bodyposture::_left_foot_up_type arg)
  {
    msg_.left_foot_up = std::move(arg);
    return Init_Bodyposture_right_foot_up(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_akimibo
{
public:
  explicit Init_Bodyposture_akimibo(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_left_foot_up akimibo(::bodyreader_msg::msg::Bodyposture::_akimibo_type arg)
  {
    msg_.akimibo = std::move(arg);
    return Init_Bodyposture_left_foot_up(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_right_hand_raised
{
public:
  explicit Init_Bodyposture_right_hand_raised(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_akimibo right_hand_raised(::bodyreader_msg::msg::Bodyposture::_right_hand_raised_type arg)
  {
    msg_.right_hand_raised = std::move(arg);
    return Init_Bodyposture_akimibo(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_left_hand_raised
{
public:
  explicit Init_Bodyposture_left_hand_raised(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_right_hand_raised left_hand_raised(::bodyreader_msg::msg::Bodyposture::_left_hand_raised_type arg)
  {
    msg_.left_hand_raised = std::move(arg);
    return Init_Bodyposture_right_hand_raised(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_right_arm_out
{
public:
  explicit Init_Bodyposture_right_arm_out(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_left_hand_raised right_arm_out(::bodyreader_msg::msg::Bodyposture::_right_arm_out_type arg)
  {
    msg_.right_arm_out = std::move(arg);
    return Init_Bodyposture_left_hand_raised(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_left_arm_out
{
public:
  explicit Init_Bodyposture_left_arm_out(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_right_arm_out left_arm_out(::bodyreader_msg::msg::Bodyposture::_left_arm_out_type arg)
  {
    msg_.left_arm_out = std::move(arg);
    return Init_Bodyposture_right_arm_out(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_centerofmass_z
{
public:
  explicit Init_Bodyposture_centerofmass_z(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_left_arm_out centerofmass_z(::bodyreader_msg::msg::Bodyposture::_centerofmass_z_type arg)
  {
    msg_.centerofmass_z = std::move(arg);
    return Init_Bodyposture_left_arm_out(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_centerofmass_y
{
public:
  explicit Init_Bodyposture_centerofmass_y(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_centerofmass_z centerofmass_y(::bodyreader_msg::msg::Bodyposture::_centerofmass_y_type arg)
  {
    msg_.centerofmass_y = std::move(arg);
    return Init_Bodyposture_centerofmass_z(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_centerofmass_x
{
public:
  explicit Init_Bodyposture_centerofmass_x(::bodyreader_msg::msg::Bodyposture & msg)
  : msg_(msg)
  {}
  Init_Bodyposture_centerofmass_y centerofmass_x(::bodyreader_msg::msg::Bodyposture::_centerofmass_x_type arg)
  {
    msg_.centerofmass_x = std::move(arg);
    return Init_Bodyposture_centerofmass_y(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

class Init_Bodyposture_bodyid
{
public:
  Init_Bodyposture_bodyid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bodyposture_centerofmass_x bodyid(::bodyreader_msg::msg::Bodyposture::_bodyid_type arg)
  {
    msg_.bodyid = std::move(arg);
    return Init_Bodyposture_centerofmass_x(msg_);
  }

private:
  ::bodyreader_msg::msg::Bodyposture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Bodyposture>()
{
  return bodyreader_msg::msg::builder::Init_Bodyposture_bodyid();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYPOSTURE__BUILDER_HPP_

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wheeltec_mic_msg:msg/MotionControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionControl(type):
    """Metaclass of message 'MotionControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wheeltec_mic_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wheeltec_mic_msg.msg.MotionControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionControl(metaclass=Metaclass_MotionControl):
    """Message class 'MotionControl'."""

    __slots__ = [
        '_linear_x',
        '_linear_y',
        '_angular_z',
        '_cmd_vel_flag',
        '_follow_flag',
        '_goal_reached_flag',
    ]

    _fields_and_field_types = {
        'linear_x': 'float',
        'linear_y': 'float',
        'angular_z': 'float',
        'cmd_vel_flag': 'int8',
        'follow_flag': 'int8',
        'goal_reached_flag': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear_x = kwargs.get('linear_x', float())
        self.linear_y = kwargs.get('linear_y', float())
        self.angular_z = kwargs.get('angular_z', float())
        self.cmd_vel_flag = kwargs.get('cmd_vel_flag', int())
        self.follow_flag = kwargs.get('follow_flag', int())
        self.goal_reached_flag = kwargs.get('goal_reached_flag', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.linear_x != other.linear_x:
            return False
        if self.linear_y != other.linear_y:
            return False
        if self.angular_z != other.angular_z:
            return False
        if self.cmd_vel_flag != other.cmd_vel_flag:
            return False
        if self.follow_flag != other.follow_flag:
            return False
        if self.goal_reached_flag != other.goal_reached_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def linear_x(self):
        """Message field 'linear_x'."""
        return self._linear_x

    @linear_x.setter
    def linear_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'linear_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._linear_x = value

    @builtins.property
    def linear_y(self):
        """Message field 'linear_y'."""
        return self._linear_y

    @linear_y.setter
    def linear_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'linear_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._linear_y = value

    @builtins.property
    def angular_z(self):
        """Message field 'angular_z'."""
        return self._angular_z

    @angular_z.setter
    def angular_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_z = value

    @builtins.property
    def cmd_vel_flag(self):
        """Message field 'cmd_vel_flag'."""
        return self._cmd_vel_flag

    @cmd_vel_flag.setter
    def cmd_vel_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_vel_flag' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'cmd_vel_flag' field must be an integer in [-128, 127]"
        self._cmd_vel_flag = value

    @builtins.property
    def follow_flag(self):
        """Message field 'follow_flag'."""
        return self._follow_flag

    @follow_flag.setter
    def follow_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'follow_flag' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'follow_flag' field must be an integer in [-128, 127]"
        self._follow_flag = value

    @builtins.property
    def goal_reached_flag(self):
        """Message field 'goal_reached_flag'."""
        return self._goal_reached_flag

    @goal_reached_flag.setter
    def goal_reached_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_reached_flag' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'goal_reached_flag' field must be an integer in [-128, 127]"
        self._goal_reached_flag = value

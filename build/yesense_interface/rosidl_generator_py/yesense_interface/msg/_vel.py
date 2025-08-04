# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yesense_interface:msg/Vel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vel(type):
    """Metaclass of message 'Vel'."""

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
            module = import_type_support('yesense_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yesense_interface.msg.Vel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vel

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Vel(metaclass=Metaclass_Vel):
    """Message class 'Vel'."""

    __slots__ = [
        '_vel_e',
        '_vel_n',
        '_vel_u',
    ]

    _fields_and_field_types = {
        'vel_e': 'float',
        'vel_n': 'float',
        'vel_u': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vel_e = kwargs.get('vel_e', float())
        self.vel_n = kwargs.get('vel_n', float())
        self.vel_u = kwargs.get('vel_u', float())

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
        if self.vel_e != other.vel_e:
            return False
        if self.vel_n != other.vel_n:
            return False
        if self.vel_u != other.vel_u:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vel_e(self):
        """Message field 'vel_e'."""
        return self._vel_e

    @vel_e.setter
    def vel_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_e' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_e' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_e = value

    @builtins.property
    def vel_n(self):
        """Message field 'vel_n'."""
        return self._vel_n

    @vel_n.setter
    def vel_n(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_n' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_n' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_n = value

    @builtins.property
    def vel_u(self):
        """Message field 'vel_u'."""
        return self._vel_u

    @vel_u.setter
    def vel_u(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_u' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_u' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_u = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wheeltec_robot_msg:msg/Supersonic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Supersonic(type):
    """Metaclass of message 'Supersonic'."""

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
            module = import_type_support('wheeltec_robot_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wheeltec_robot_msg.msg.Supersonic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__supersonic
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__supersonic
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__supersonic
            cls._TYPE_SUPPORT = module.type_support_msg__msg__supersonic
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__supersonic

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Supersonic(metaclass=Metaclass_Supersonic):
    """Message class 'Supersonic'."""

    __slots__ = [
        '_header',
        '_distance_a',
        '_distance_b',
        '_distance_c',
        '_distance_d',
        '_distance_e',
        '_distance_f',
        '_distance_g',
        '_distance_h',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'distance_a': 'float',
        'distance_b': 'float',
        'distance_c': 'float',
        'distance_d': 'float',
        'distance_e': 'float',
        'distance_f': 'float',
        'distance_g': 'float',
        'distance_h': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.distance_a = kwargs.get('distance_a', float())
        self.distance_b = kwargs.get('distance_b', float())
        self.distance_c = kwargs.get('distance_c', float())
        self.distance_d = kwargs.get('distance_d', float())
        self.distance_e = kwargs.get('distance_e', float())
        self.distance_f = kwargs.get('distance_f', float())
        self.distance_g = kwargs.get('distance_g', float())
        self.distance_h = kwargs.get('distance_h', float())

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
        if self.header != other.header:
            return False
        if self.distance_a != other.distance_a:
            return False
        if self.distance_b != other.distance_b:
            return False
        if self.distance_c != other.distance_c:
            return False
        if self.distance_d != other.distance_d:
            return False
        if self.distance_e != other.distance_e:
            return False
        if self.distance_f != other.distance_f:
            return False
        if self.distance_g != other.distance_g:
            return False
        if self.distance_h != other.distance_h:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def distance_a(self):
        """Message field 'distance_a'."""
        return self._distance_a

    @distance_a.setter
    def distance_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_a = value

    @builtins.property
    def distance_b(self):
        """Message field 'distance_b'."""
        return self._distance_b

    @distance_b.setter
    def distance_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_b' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_b' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_b = value

    @builtins.property
    def distance_c(self):
        """Message field 'distance_c'."""
        return self._distance_c

    @distance_c.setter
    def distance_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_c' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_c' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_c = value

    @builtins.property
    def distance_d(self):
        """Message field 'distance_d'."""
        return self._distance_d

    @distance_d.setter
    def distance_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_d' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_d' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_d = value

    @builtins.property
    def distance_e(self):
        """Message field 'distance_e'."""
        return self._distance_e

    @distance_e.setter
    def distance_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_e' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_e' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_e = value

    @builtins.property
    def distance_f(self):
        """Message field 'distance_f'."""
        return self._distance_f

    @distance_f.setter
    def distance_f(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_f' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_f' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_f = value

    @builtins.property
    def distance_g(self):
        """Message field 'distance_g'."""
        return self._distance_g

    @distance_g.setter
    def distance_g(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_g' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_g' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_g = value

    @builtins.property
    def distance_h(self):
        """Message field 'distance_h'."""
        return self._distance_h

    @distance_h.setter
    def distance_h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_h' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_h' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_h = value

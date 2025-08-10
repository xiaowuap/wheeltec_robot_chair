# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyreader_msg:msg/Bodyposture.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Bodyposture(type):
    """Metaclass of message 'Bodyposture'."""

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
            module = import_type_support('bodyreader_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bodyreader_msg.msg.Bodyposture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bodyposture
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bodyposture
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bodyposture
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bodyposture
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bodyposture

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Bodyposture(metaclass=Metaclass_Bodyposture):
    """Message class 'Bodyposture'."""

    __slots__ = [
        '_bodyid',
        '_centerofmass_x',
        '_centerofmass_y',
        '_centerofmass_z',
        '_left_arm_out',
        '_right_arm_out',
        '_left_hand_raised',
        '_right_hand_raised',
        '_akimibo',
        '_left_foot_up',
        '_right_foot_up',
        '_fall',
        '_tips',
        '_lock_status',
    ]

    _fields_and_field_types = {
        'bodyid': 'int16',
        'centerofmass_x': 'float',
        'centerofmass_y': 'float',
        'centerofmass_z': 'float',
        'left_arm_out': 'int8',
        'right_arm_out': 'int8',
        'left_hand_raised': 'int8',
        'right_hand_raised': 'int8',
        'akimibo': 'int8',
        'left_foot_up': 'int8',
        'right_foot_up': 'int8',
        'fall': 'int8',
        'tips': 'int8',
        'lock_status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bodyid = kwargs.get('bodyid', int())
        self.centerofmass_x = kwargs.get('centerofmass_x', float())
        self.centerofmass_y = kwargs.get('centerofmass_y', float())
        self.centerofmass_z = kwargs.get('centerofmass_z', float())
        self.left_arm_out = kwargs.get('left_arm_out', int())
        self.right_arm_out = kwargs.get('right_arm_out', int())
        self.left_hand_raised = kwargs.get('left_hand_raised', int())
        self.right_hand_raised = kwargs.get('right_hand_raised', int())
        self.akimibo = kwargs.get('akimibo', int())
        self.left_foot_up = kwargs.get('left_foot_up', int())
        self.right_foot_up = kwargs.get('right_foot_up', int())
        self.fall = kwargs.get('fall', int())
        self.tips = kwargs.get('tips', int())
        self.lock_status = kwargs.get('lock_status', int())

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
        if self.bodyid != other.bodyid:
            return False
        if self.centerofmass_x != other.centerofmass_x:
            return False
        if self.centerofmass_y != other.centerofmass_y:
            return False
        if self.centerofmass_z != other.centerofmass_z:
            return False
        if self.left_arm_out != other.left_arm_out:
            return False
        if self.right_arm_out != other.right_arm_out:
            return False
        if self.left_hand_raised != other.left_hand_raised:
            return False
        if self.right_hand_raised != other.right_hand_raised:
            return False
        if self.akimibo != other.akimibo:
            return False
        if self.left_foot_up != other.left_foot_up:
            return False
        if self.right_foot_up != other.right_foot_up:
            return False
        if self.fall != other.fall:
            return False
        if self.tips != other.tips:
            return False
        if self.lock_status != other.lock_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bodyid(self):
        """Message field 'bodyid'."""
        return self._bodyid

    @bodyid.setter
    def bodyid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bodyid' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'bodyid' field must be an integer in [-32768, 32767]"
        self._bodyid = value

    @builtins.property
    def centerofmass_x(self):
        """Message field 'centerofmass_x'."""
        return self._centerofmass_x

    @centerofmass_x.setter
    def centerofmass_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'centerofmass_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'centerofmass_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._centerofmass_x = value

    @builtins.property
    def centerofmass_y(self):
        """Message field 'centerofmass_y'."""
        return self._centerofmass_y

    @centerofmass_y.setter
    def centerofmass_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'centerofmass_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'centerofmass_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._centerofmass_y = value

    @builtins.property
    def centerofmass_z(self):
        """Message field 'centerofmass_z'."""
        return self._centerofmass_z

    @centerofmass_z.setter
    def centerofmass_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'centerofmass_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'centerofmass_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._centerofmass_z = value

    @builtins.property
    def left_arm_out(self):
        """Message field 'left_arm_out'."""
        return self._left_arm_out

    @left_arm_out.setter
    def left_arm_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_arm_out' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'left_arm_out' field must be an integer in [-128, 127]"
        self._left_arm_out = value

    @builtins.property
    def right_arm_out(self):
        """Message field 'right_arm_out'."""
        return self._right_arm_out

    @right_arm_out.setter
    def right_arm_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_arm_out' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'right_arm_out' field must be an integer in [-128, 127]"
        self._right_arm_out = value

    @builtins.property
    def left_hand_raised(self):
        """Message field 'left_hand_raised'."""
        return self._left_hand_raised

    @left_hand_raised.setter
    def left_hand_raised(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_hand_raised' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'left_hand_raised' field must be an integer in [-128, 127]"
        self._left_hand_raised = value

    @builtins.property
    def right_hand_raised(self):
        """Message field 'right_hand_raised'."""
        return self._right_hand_raised

    @right_hand_raised.setter
    def right_hand_raised(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_hand_raised' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'right_hand_raised' field must be an integer in [-128, 127]"
        self._right_hand_raised = value

    @builtins.property
    def akimibo(self):
        """Message field 'akimibo'."""
        return self._akimibo

    @akimibo.setter
    def akimibo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'akimibo' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'akimibo' field must be an integer in [-128, 127]"
        self._akimibo = value

    @builtins.property
    def left_foot_up(self):
        """Message field 'left_foot_up'."""
        return self._left_foot_up

    @left_foot_up.setter
    def left_foot_up(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_foot_up' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'left_foot_up' field must be an integer in [-128, 127]"
        self._left_foot_up = value

    @builtins.property
    def right_foot_up(self):
        """Message field 'right_foot_up'."""
        return self._right_foot_up

    @right_foot_up.setter
    def right_foot_up(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_foot_up' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'right_foot_up' field must be an integer in [-128, 127]"
        self._right_foot_up = value

    @builtins.property
    def fall(self):
        """Message field 'fall'."""
        return self._fall

    @fall.setter
    def fall(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fall' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fall' field must be an integer in [-128, 127]"
        self._fall = value

    @builtins.property
    def tips(self):
        """Message field 'tips'."""
        return self._tips

    @tips.setter
    def tips(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tips' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'tips' field must be an integer in [-128, 127]"
        self._tips = value

    @builtins.property
    def lock_status(self):
        """Message field 'lock_status'."""
        return self._lock_status

    @lock_status.setter
    def lock_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lock_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lock_status' field must be an integer in [-128, 127]"
        self._lock_status = value

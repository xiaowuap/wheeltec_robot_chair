# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yesense_interface:msg/AttitudeMinVru.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttitudeMinVru(type):
    """Metaclass of message 'AttitudeMinVru'."""

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
                'yesense_interface.msg.AttitudeMinVru')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__attitude_min_vru
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__attitude_min_vru
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__attitude_min_vru
            cls._TYPE_SUPPORT = module.type_support_msg__msg__attitude_min_vru
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__attitude_min_vru

            from yesense_interface.msg import EulerAngle
            if EulerAngle.__class__._TYPE_SUPPORT is None:
                EulerAngle.__class__.__import_type_support__()

            from yesense_interface.msg import ImuData
            if ImuData.__class__._TYPE_SUPPORT is None:
                ImuData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AttitudeMinVru(metaclass=Metaclass_AttitudeMinVru):
    """Message class 'AttitudeMinVru'."""

    __slots__ = [
        '_imu_basic',
        '_euler',
    ]

    _fields_and_field_types = {
        'imu_basic': 'yesense_interface/ImuData',
        'euler': 'yesense_interface/EulerAngle',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ImuData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'EulerAngle'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from yesense_interface.msg import ImuData
        self.imu_basic = kwargs.get('imu_basic', ImuData())
        from yesense_interface.msg import EulerAngle
        self.euler = kwargs.get('euler', EulerAngle())

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
        if self.imu_basic != other.imu_basic:
            return False
        if self.euler != other.euler:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imu_basic(self):
        """Message field 'imu_basic'."""
        return self._imu_basic

    @imu_basic.setter
    def imu_basic(self, value):
        if __debug__:
            from yesense_interface.msg import ImuData
            assert \
                isinstance(value, ImuData), \
                "The 'imu_basic' field must be a sub message of type 'ImuData'"
        self._imu_basic = value

    @builtins.property
    def euler(self):
        """Message field 'euler'."""
        return self._euler

    @euler.setter
    def euler(self, value):
        if __debug__:
            from yesense_interface.msg import EulerAngle
            assert \
                isinstance(value, EulerAngle), \
                "The 'euler' field must be a sub message of type 'EulerAngle'"
        self._euler = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yesense_interface:msg/ImuDataTenAxis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuDataTenAxis(type):
    """Metaclass of message 'ImuDataTenAxis'."""

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
                'yesense_interface.msg.ImuDataTenAxis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_data_ten_axis
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_data_ten_axis
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_data_ten_axis
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_data_ten_axis
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_data_ten_axis

            from yesense_interface.msg import ImuData
            if ImuData.__class__._TYPE_SUPPORT is None:
                ImuData.__class__.__import_type_support__()

            from yesense_interface.msg import Pressure
            if Pressure.__class__._TYPE_SUPPORT is None:
                Pressure.__class__.__import_type_support__()

            from yesense_interface.msg import ThreeAxis
            if ThreeAxis.__class__._TYPE_SUPPORT is None:
                ThreeAxis.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuDataTenAxis(metaclass=Metaclass_ImuDataTenAxis):
    """Message class 'ImuDataTenAxis'."""

    __slots__ = [
        '_imu_basic',
        '_mag_norm',
        '_mag_raw',
        '_pressure',
    ]

    _fields_and_field_types = {
        'imu_basic': 'yesense_interface/ImuData',
        'mag_norm': 'yesense_interface/ThreeAxis',
        'mag_raw': 'yesense_interface/ThreeAxis',
        'pressure': 'yesense_interface/Pressure',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ImuData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ThreeAxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ThreeAxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Pressure'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from yesense_interface.msg import ImuData
        self.imu_basic = kwargs.get('imu_basic', ImuData())
        from yesense_interface.msg import ThreeAxis
        self.mag_norm = kwargs.get('mag_norm', ThreeAxis())
        from yesense_interface.msg import ThreeAxis
        self.mag_raw = kwargs.get('mag_raw', ThreeAxis())
        from yesense_interface.msg import Pressure
        self.pressure = kwargs.get('pressure', Pressure())

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
        if self.mag_norm != other.mag_norm:
            return False
        if self.mag_raw != other.mag_raw:
            return False
        if self.pressure != other.pressure:
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
    def mag_norm(self):
        """Message field 'mag_norm'."""
        return self._mag_norm

    @mag_norm.setter
    def mag_norm(self, value):
        if __debug__:
            from yesense_interface.msg import ThreeAxis
            assert \
                isinstance(value, ThreeAxis), \
                "The 'mag_norm' field must be a sub message of type 'ThreeAxis'"
        self._mag_norm = value

    @builtins.property
    def mag_raw(self):
        """Message field 'mag_raw'."""
        return self._mag_raw

    @mag_raw.setter
    def mag_raw(self, value):
        if __debug__:
            from yesense_interface.msg import ThreeAxis
            assert \
                isinstance(value, ThreeAxis), \
                "The 'mag_raw' field must be a sub message of type 'ThreeAxis'"
        self._mag_raw = value

    @builtins.property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            from yesense_interface.msg import Pressure
            assert \
                isinstance(value, Pressure), \
                "The 'pressure' field must be a sub message of type 'Pressure'"
        self._pressure = value

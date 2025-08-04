#!/usr/bin/env python3

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import LogInfo
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    channel_type =  LaunchConfiguration('channel_type', default='serial')
    serial_port = LaunchConfiguration('serial_port', default='/dev/wheeltec_lidar')
    serial_baudrate = LaunchConfiguration('serial_baudrate', default='460800')
    frame_id = LaunchConfiguration('frame_id', default='laser')
    inverted = LaunchConfiguration('inverted', default='false')
    angle_compensate = LaunchConfiguration('angle_compensate', default='true')
    scan_mode = LaunchConfiguration('scan_mode', default='Standard')

  # 添加角度屏蔽相关参数
    enable_angle_crop_func = LaunchConfiguration('enable_angle_crop_func', default='true')
    angle_crop_min = LaunchConfiguration('angle_crop_min', default='90.0')
    angle_crop_max = LaunchConfiguration('angle_crop_max', default='270.0')


    return LaunchDescription([
        DeclareLaunchArgument(
            'channel_type',
            default_value=channel_type,
            description='Specifying channel type of lidar'),

        DeclareLaunchArgument(
            'serial_port',
            default_value=serial_port,
            description='Specifying usb port to connected lidar'),

        DeclareLaunchArgument(
            'serial_baudrate',
            default_value=serial_baudrate,
            description='Specifying usb port baudrate to connected lidar'),
        
        DeclareLaunchArgument(
            'frame_id',
            default_value=frame_id,
            description='Specifying frame_id of lidar'),

        DeclareLaunchArgument(
            'inverted',
            default_value=inverted,
            description='Specifying whether or not to invert scan data'),

        DeclareLaunchArgument(
            'angle_compensate',
            default_value=angle_compensate,
            description='Specifying whether or not to enable angle_compensate of scan data'),

        DeclareLaunchArgument(
            'scan_mode',
            default_value=scan_mode,
            description='Specifying scan mode of lidar'),


        # 添加角度屏蔽相关的参数声明
        DeclareLaunchArgument(
            'enable_angle_crop_func',
            default_value=enable_angle_crop_func,
            description='Specifying whether or not to enable angle cropping function'),
            
        DeclareLaunchArgument(
            'angle_crop_min',
            default_value=angle_crop_min,
            description='Specifying minimum angle to crop (in degrees)'),
            
        DeclareLaunchArgument(
            'angle_crop_max',
            default_value=angle_crop_max,
            description='Specifying maximum angle to crop (in degrees)'),

        Node(
            package='rplidar_ros',
            executable='rplidar_node',
            name='rplidar_node',
            parameters=[{'channel_type':channel_type,
                         'serial_port': serial_port,
                         'serial_baudrate': serial_baudrate,
                         'frame_id': frame_id,
                         'inverted': inverted,
                         'angle_compensate': angle_compensate,
                         'scan_mode': scan_mode,
                          # 添加角度屏蔽相关的参数
                         'enable_angle_crop_func': enable_angle_crop_func,
                         'angle_crop_min': angle_crop_min,
                         'angle_crop_max': angle_crop_max}],
            output='screen'),
    ])


import os
from pathlib import Path
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, GroupAction,
                            IncludeLaunchDescription, SetEnvironmentVariable)
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    Lslidar_dir = get_package_share_directory('lslidar_driver')
    Lslidar_launch_dir = os.path.join(Lslidar_dir, 'launch')

       
    Ld14_dir = get_package_share_directory('ldlidar_sl_ros2')
    Ld14_launch_dir = os.path.join(Ld14_dir, 'launch')
    
    Ld06_dir = get_package_share_directory('ldlidar_stl_ros2')
    Ld06_launch_dir = os.path.join(Ld06_dir, 'launch')
    
    Ldstl06n_dir = get_package_share_directory('ldlidar')
    Ldstl06n_launch_dir = os.path.join(Ldstl06n_dir, 'launch')
           
    #思岚雷达
    Rplidar_dir = get_package_share_directory('rplidar_ros')
    Rplidar_launch_dir = os.path.join(Rplidar_dir, 'launch')

    Lsm10_m10_uart = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsm10_uart_launch.py')),)
            
    Lsm10_m10_net = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsm10_net_launch.py')),)
            
    Lsm10_m10p_uart = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsm10p_uart_launch.py')),)
            
    Lsm10_m10p_net = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsm10p_net_launch.py')),)
             
    Lsn10 = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsn10_launch.py')),)
    Lsn10p = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsn10p_launch.py')),)
    Lsn10p2 = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Lslidar_launch_dir, 'lsn10p2_launch.py')),)
    Ld14 = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Ld14_launch_dir, 'ld14.launch.py')),)
    Ld06 = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Ld06_launch_dir, 'ld06.launch.py')),)
    Ldstl06n = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Ldstl06n_launch_dir, 'stl06n.launch.py')),)
    
    RplidarC1 = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(Rplidar_launch_dir, 'rplidar_c1_launch.py')),)
    # Create the launch description and populate
    ld = LaunchDescription()
    '''
    Please select your lidar here, options include:
    Lsm10_m10p_uart、Lsm10_m10p_net、Lsm10_m10_uart、Lsm10_m10_net、Lsn10、Lsn10p,ld14、Ld06、Ldstl06n,RplidarC1.
    1.If you are using LS* lidar (including lsn10, lsm10*), please don't forget to 
    modify the tf conversion parameters of robot_mode_description.launch.py
    according to the user guide file.
    2.If you are using m10 lidar, please pay attention to distinguish whether it is m10p or not.
    '''
    ld.add_action(Lsn10p)
    ld.add_action(Lsn10p2)
    
    dual_laser_merger_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                f"{get_package_share_directory('dual_laser_merger')}/launch/dual_laser_merger.launch.py"
            ]
        ),
        launch_arguments={
            'laser_1_topic': 'scan1',
            'laser_2_topic': 'scan2',
            'merged_topic': 'scan',
            'publish_rate': '100',
            'target_frame': 'base_footprint',
            'angle_increment': '0.001',
            'scan_time': '0.067',
            'range_min': '0.01',
            'range_max': '25.0',
            'min_height': '-1.0',
            'max_height': '1.0',
            'angle_min': '-3.141592654',
            'angle_max': '3.141592654',
            'use_inf': 'true',
        }.items(),
    )

    ld.add_action(dual_laser_merger_node)

    return ld


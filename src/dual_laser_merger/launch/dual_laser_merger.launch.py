# Copyright 2024 pradyum
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():

    ld = LaunchDescription()

    # Declare launch arguments
    laser_1_topic_arg = DeclareLaunchArgument(
        'laser_1_topic',
        default_value='/lidar1/scan',
        description='Input topic name of first laser scan'
    )
    
    laser_2_topic_arg = DeclareLaunchArgument(
        'laser_2_topic',
        default_value='/lidar2/scan',
        description='Input topic name of second laser scan'
    )
    
    merged_topic_arg = DeclareLaunchArgument(
        'merged_topic',
        default_value='/merged/scan',
        description='Output topic name of merged laser scan'
    )
    
    target_frame_arg = DeclareLaunchArgument(
        'target_frame',
        default_value='lsc_mount',
        description='The target TF frame on which the merged laser scan will be published'
    )
    
    angle_increment_arg = DeclareLaunchArgument(
        'angle_increment',
        default_value='0.001',
        description='Angular distance between measurements [rad] of merged laser scan data'
    )
    
    scan_time_arg = DeclareLaunchArgument(
        'scan_time',
        default_value='0.067',
        description='Time between scans [seconds] of merged laser scan data'
    )
    
    range_min_arg = DeclareLaunchArgument(
        'range_min',
        default_value='0.01',
        description='Minimum range value [m] of merged laser scan data'
    )
    
    range_max_arg = DeclareLaunchArgument(
        'range_max',
        default_value='25.0',
        description='Maximum range value [m] of merged laser scan data'
    )
    
    min_height_arg = DeclareLaunchArgument(
        'min_height',
        default_value='-1.0',
        description='Minimum height from target frame in which the scan points are accepted [m]'
    )
    
    max_height_arg = DeclareLaunchArgument(
        'max_height',
        default_value='1.0',
        description='Maximum height from target frame in which the scan points are accepted [m]'
    )
    
    angle_min_arg = DeclareLaunchArgument(
        'angle_min',
        default_value='-3.141592654',
        description='Minimum angle value [rad] of merged laser scan data'
    )
    
    angle_max_arg = DeclareLaunchArgument(
        'angle_max',
        default_value='3.141592654',
        description='Maximum angle value [rad] of merged laser scan data'
    )
    
    use_inf_arg = DeclareLaunchArgument(
        'use_inf',
        default_value='false',
        description='If true reports infinite values as +inf, else reported as range_max + 1'
    )

    # Additional advanced parameters
    inf_epsilon_arg = DeclareLaunchArgument(
        'inf_epsilon',
        default_value='1.0',
        description='Epsilon value for infinity handling'
    )
    
    allowed_radius_arg = DeclareLaunchArgument(
        'allowed_radius',
        default_value='0.45',
        description='Allowed radius for point filtering [m]'
    )
    
    enable_shadow_filter_arg = DeclareLaunchArgument(
        'enable_shadow_filter',
        default_value='true',
        description='Enable shadow filter for point cloud processing'
    )
    
    enable_average_filter_arg = DeclareLaunchArgument(
        'enable_average_filter',
        default_value='true',
        description='Enable average filter for point cloud processing'
    )

    # Additional parameters for fine-tuning
    laser_1_x_offset_arg = DeclareLaunchArgument(
        'laser_1_x_offset',
        default_value='0.0',
        description='X offset for laser 1 [m]'
    )
    
    laser_1_y_offset_arg = DeclareLaunchArgument(
        'laser_1_y_offset',
        default_value='0.0',
        description='Y offset for laser 1 [m]'
    )
    
    laser_1_yaw_offset_arg = DeclareLaunchArgument(
        'laser_1_yaw_offset',
        default_value='0.0',
        description='Yaw offset for laser 1 [rad]'
    )
    
    laser_2_x_offset_arg = DeclareLaunchArgument(
        'laser_2_x_offset',
        default_value='0.0',
        description='X offset for laser 2 [m]'
    )
    
    laser_2_y_offset_arg = DeclareLaunchArgument(
        'laser_2_y_offset',
        default_value='0.0',
        description='Y offset for laser 2 [m]'
    )
    
    laser_2_yaw_offset_arg = DeclareLaunchArgument(
        'laser_2_yaw_offset',
        default_value='0.0',
        description='Yaw offset for laser 2 [rad]'
    )
    
    tolerance_arg = DeclareLaunchArgument(
        'tolerance',
        default_value='0.01',
        description='Tolerance for message synchronization [s]'
    )
    
    queue_size_arg = DeclareLaunchArgument(
        'queue_size',
        default_value='5',
        description='Queue size for message synchronization'
    )

    # Add all arguments to launch description
    ld.add_action(laser_1_topic_arg)
    ld.add_action(laser_2_topic_arg)
    ld.add_action(merged_topic_arg)
    ld.add_action(target_frame_arg)
    ld.add_action(angle_increment_arg)
    ld.add_action(scan_time_arg)
    ld.add_action(range_min_arg)
    ld.add_action(range_max_arg)
    ld.add_action(min_height_arg)
    ld.add_action(max_height_arg)
    ld.add_action(angle_min_arg)
    ld.add_action(angle_max_arg)
    ld.add_action(use_inf_arg)
    ld.add_action(inf_epsilon_arg)
    ld.add_action(allowed_radius_arg)
    ld.add_action(enable_shadow_filter_arg)
    ld.add_action(enable_average_filter_arg)
    ld.add_action(laser_1_x_offset_arg)
    ld.add_action(laser_1_y_offset_arg)
    ld.add_action(laser_1_yaw_offset_arg)
    ld.add_action(laser_2_x_offset_arg)
    ld.add_action(laser_2_y_offset_arg)
    ld.add_action(laser_2_yaw_offset_arg)
    ld.add_action(tolerance_arg)
    ld.add_action(queue_size_arg)

    # Create dual laser merger node
    dual_laser_merger_node = ComposableNodeContainer(
        name='dual_laser_merger_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='dual_laser_merger',
                plugin='merger_node::MergerNode',
                name='dual_laser_merger',
                parameters=[
                    {'laser_1_topic': LaunchConfiguration('laser_1_topic')},
                    {'laser_2_topic': LaunchConfiguration('laser_2_topic')},
                    {'merged_topic': LaunchConfiguration('merged_topic')},
                    {'target_frame': LaunchConfiguration('target_frame')},
                    {'laser_1_x_offset': LaunchConfiguration('laser_1_x_offset')},
                    {'laser_1_y_offset': LaunchConfiguration('laser_1_y_offset')},
                    {'laser_1_yaw_offset': LaunchConfiguration('laser_1_yaw_offset')},
                    {'laser_2_x_offset': LaunchConfiguration('laser_2_x_offset')},
                    {'laser_2_y_offset': LaunchConfiguration('laser_2_y_offset')},
                    {'laser_2_yaw_offset': LaunchConfiguration('laser_2_yaw_offset')},
                    {'tolerance': LaunchConfiguration('tolerance')},
                    {'queue_size': LaunchConfiguration('queue_size')},
                    {'angle_increment': LaunchConfiguration('angle_increment')},
                    {'scan_time': LaunchConfiguration('scan_time')},
                    {'range_min': LaunchConfiguration('range_min')},
                    {'range_max': LaunchConfiguration('range_max')},
                    {'min_height': LaunchConfiguration('min_height')},
                    {'max_height': LaunchConfiguration('max_height')},
                    {'angle_min': LaunchConfiguration('angle_min')},
                    {'angle_max': LaunchConfiguration('angle_max')},
                    {'inf_epsilon': LaunchConfiguration('inf_epsilon')},
                    {'use_inf': LaunchConfiguration('use_inf')},
                    {'allowed_radius': LaunchConfiguration('allowed_radius')},
                    {'enable_shadow_filter': LaunchConfiguration('enable_shadow_filter')},
                    {'enable_average_filter': LaunchConfiguration('enable_average_filter')},
                ],
            )
        ],
        output='screen',
    )

    ld.add_action(dual_laser_merger_node)

    return ld

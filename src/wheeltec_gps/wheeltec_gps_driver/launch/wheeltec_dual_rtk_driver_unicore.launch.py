from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    return LaunchDescription([
         Node(
            package='wheeltec_dual_rtk_driver',
            executable='dual_rtk_driver_node',
            name='dual_rtk_driver_node',
            parameters=[
                {'port': '/dev/wheeltec_gnss'},
                {'baud': 115200},
                {'gps_frame_id': 'navsat_link'},
                ],
            output='screen',
            ),
        ])


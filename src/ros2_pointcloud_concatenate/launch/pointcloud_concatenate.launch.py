import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    param_file_path = os.path.join(
        get_package_share_directory("pointcloud_concatenate"),
        "config",
        "concatenate_params.yaml",
    )

    return LaunchDescription(
        [
            DeclareLaunchArgument("target_frame", default_value="base_link"),
            Node(
                package="pointcloud_concatenate",
                executable="pointcloud_concatenate_node",
                name="pointcloud_merge",
                output="screen",
                parameters=[param_file_path],
            ),
        ]
    )

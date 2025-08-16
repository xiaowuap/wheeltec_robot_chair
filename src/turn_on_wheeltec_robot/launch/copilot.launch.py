import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, GroupAction,
                            IncludeLaunchDescription, SetEnvironmentVariable)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.launch_description_sources import AnyLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import launch_ros.actions

def generate_launch_description():
    # Get the launch directory for wheeltec robot
    bringup_dir = get_package_share_directory('turn_on_wheeltec_robot')
    launch_dir = os.path.join(bringup_dir, 'launch')

    # Launch wheeltec robot base
#    wheeltec_robot = IncludeLaunchDescription(
#        PythonLaunchDescriptionSource(os.path.join(launch_dir, 'turn_on_wheeltec_robot.launch.py')),
#    )

    # Launch wheeltec lidar
#    wheeltec_lidar = IncludeLaunchDescription(
#        PythonLaunchDescriptionSource(os.path.join(launch_dir, 'wheeltec_lidar.launch.py')),
#    )

    wheeltec_slam = IncludeLaunchDescription(
         PythonLaunchDescriptionSource(os.path.join(get_package_share_directory('slam_gmapping'), 'launch', 'slam_gmapping.launch.py')),
    )
    # Launch foxglove bridge
    foxglove_bridge = IncludeLaunchDescription(
        AnyLaunchDescriptionSource([
            get_package_share_directory('foxglove_bridge'),
            '/launch/foxglove_bridge_launch.xml'
        ]),
    )

        # Robot footprint polygon publisher
    # Dimensions: front=0.82m, rear=0.25m, left=0.53m, right=0.53m from base_footprint
    robot_polygon_publisher = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='robot_polygon_transform',
        arguments=['0', '0', '0', '0', '0', '0', 'base_footprint', 'robot_polygon_frame'],
        output='screen'
    )

    # Create a custom polygon publisher using rostopic pub equivalent
    # Publishing robot footprint as PolygonStamped message
    # Points defined clockwise starting from front-right corner:
    # front-right: (0.82, -0.53)
    # front-left:  (0.82,  0.53) 
    # rear-left:   (-0.25, 0.53)
    # rear-right:  (-0.25, -0.53)
    polygon_static_publisher = launch_ros.actions.Node(
        package='turn_on_wheeltec_robot',
        executable='robot_polygon_publisher.py',
        name='robot_polygon_publisher',
        parameters=[{
            'frame_id': 'base_footprint',
            'front_distance': 0.82,
            'rear_distance': 0.25,
            'left_distance': 0.53,
            'right_distance': 0.53,
            'publish_rate': 10.0,
            'topic_name': '/robot_footprint_polygon'
        }],
        output='screen'
    )

    return LaunchDescription([
        # Launch the main components
#        wheeltec_robot,
#        wheeltec_lidar,
        wheeltec_slam,
        foxglove_bridge,
        
        # Add robot footprint polygon broadcasting
        robot_polygon_publisher,
        polygon_static_publisher,
        
        # Robot footprint polygon publisher - publishes exact robot dimensions
        # Front: 0.82m, Rear: 0.25m, Left: 0.53m, Right: 0.53m from base_footprint
    ])

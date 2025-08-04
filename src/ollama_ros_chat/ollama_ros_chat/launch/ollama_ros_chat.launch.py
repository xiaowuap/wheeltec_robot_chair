from launch import LaunchDescription
from launch_ros.actions import Node



def generate_launch_description():
    
    return LaunchDescription([
        # 服务器节点
        Node(
            package='ollama_ros_chat',
            executable='chat_service',
            name='chat_service',
            output='screen'
        )
    ])

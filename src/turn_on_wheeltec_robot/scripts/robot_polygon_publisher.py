#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PolygonStamped, Point32
from std_msgs.msg import Header
import time

class RobotPolygonPublisher(Node):
    """
    ROS2 Node that publishes robot footprint polygon
    Dimensions: front=0.82m, rear=0.25m, left=0.53m, right=0.53m from base_footprint
    """
    
    def __init__(self):
        super().__init__('robot_polygon_publisher')
        
        # Declare parameters
        self.declare_parameter('frame_id', 'base_footprint')
        self.declare_parameter('publish_rate', 10.0)
        self.declare_parameter('topic_name', '/robot_footprint_polygon')
        
        # Declare individual coordinate parameters for the robot polygon
        # Robot dimensions: front=0.82m, rear=0.25m, left=0.53m, right=0.53m
        self.declare_parameter('front_distance', 0.82)
        self.declare_parameter('rear_distance', 0.25)  
        self.declare_parameter('left_distance', 0.53)
        self.declare_parameter('right_distance', 0.53)
        
        # Get parameters
        self.frame_id = self.get_parameter('frame_id').get_parameter_value().string_value
        self.publish_rate = self.get_parameter('publish_rate').get_parameter_value().double_value
        self.topic_name = self.get_parameter('topic_name').get_parameter_value().string_value
        
        # Get robot dimensions
        self.front_dist = self.get_parameter('front_distance').get_parameter_value().double_value
        self.rear_dist = self.get_parameter('rear_distance').get_parameter_value().double_value
        self.left_dist = self.get_parameter('left_distance').get_parameter_value().double_value
        self.right_dist = self.get_parameter('right_distance').get_parameter_value().double_value
        
        # Create publisher
        self.publisher = self.create_publisher(
            PolygonStamped,
            self.topic_name,
            10
        )
        
        # Create timer for periodic publishing
        timer_period = 1.0 / self.publish_rate  # seconds
        self.timer = self.create_timer(timer_period, self.publish_polygon)
        
        # Create the polygon message
        self.create_polygon_message()
        
        self.get_logger().info(f'Robot polygon publisher started')
        self.get_logger().info(f'Publishing to: {self.topic_name}')
        self.get_logger().info(f'Frame ID: {self.frame_id}')
        self.get_logger().info(f'Publish rate: {self.publish_rate} Hz')
        self.get_logger().info(f'Robot dimensions - Front: {self.front_dist}m, Rear: {self.rear_dist}m, Left: {self.left_dist}m, Right: {self.right_dist}m')
        
    def create_polygon_message(self):
        """Create the polygon message from robot dimensions"""
        self.polygon_msg = PolygonStamped()
        
        # Set header
        self.polygon_msg.header.frame_id = self.frame_id
        
        # Create polygon points clockwise from front-right corner
        # Points: front-right, front-left, rear-left, rear-right
        points = [
            (self.front_dist, -self.right_dist, 0.0),  # front-right
            (self.front_dist, self.left_dist, 0.0),    # front-left
            (-self.rear_dist, self.left_dist, 0.0),    # rear-left
            (-self.rear_dist, -self.right_dist, 0.0)   # rear-right
        ]
        
        for x, y, z in points:
            point = Point32()
            point.x = float(x)
            point.y = float(y)
            point.z = float(z)
            self.polygon_msg.polygon.points.append(point)
        
        self.get_logger().info(f'Polygon created with {len(self.polygon_msg.polygon.points)} points')
        for i, point in enumerate(self.polygon_msg.polygon.points):
            self.get_logger().info(f'  Point {i+1}: ({point.x:.3f}, {point.y:.3f}, {point.z:.3f})')
    
    def publish_polygon(self):
        """Publish the polygon with updated timestamp"""
        # Update timestamp
        self.polygon_msg.header.stamp = self.get_clock().now().to_msg()
        
        # Publish the message
        self.publisher.publish(self.polygon_msg)
        
        # Log occasionally (every 50 messages = ~5 seconds at 10Hz)
        if hasattr(self, 'message_count'):
            self.message_count += 1
        else:
            self.message_count = 1
            
        if self.message_count % 50 == 0:
            self.get_logger().info(f'Published robot footprint polygon (message #{self.message_count})')

def main(args=None):
    rclpy.init(args=args)
    
    try:
        node = RobotPolygonPublisher()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(f'Error: {e}')
    finally:
        if 'node' in locals():
            node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

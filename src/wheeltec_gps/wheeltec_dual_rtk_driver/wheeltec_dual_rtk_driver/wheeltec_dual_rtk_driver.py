# coding=utf-8
import sys
import math

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from nav_msgs.msg import Odometry
from tf_transformations import quaternion_from_euler, euler_from_quaternion


from wheeltec_dual_rtk_driver.um982_serial import UM982Serial
from geometry_msgs.msg import Vector3Stamped


class wheeltec_dual_rtk_driver(Node):
    def _ros_log_debug(self, log_data):
        self.get_logger().debug(str(log_data))

    def _ros_log_info(self, log_data):
        self.get_logger().info(str(log_data))

    def _ros_log_warn(self, log_data):
        self.get_logger().warn(str(log_data))

    def _ros_log_error(self, log_data):
        self.get_logger().error(str(log_data))


    def __init__(self) -> None:
        super().__init__('um982_serial_driver')
        global gps_frame_id

        # Step1：从参数服务器获取port和baud
        self.declare_parameter('port', '/dev/wheeltec_gnss')
        self.declare_parameter('baud', 115200)
        self.declare_parameter('gps_frame_id', 'navsat_link')
        port = self.get_parameter('port').get_parameter_value().string_value
        baud = self.get_parameter('baud').get_parameter_value().integer_value
        gps_frame_id = self.get_parameter('gps_frame_id').get_parameter_value().string_value
        # Step2：打开串口
        try:
            self.um982serial = UM982Serial(port, baud)
            self._ros_log_info(f'serial {port} open successfully!')
        except:
            self._ros_log_error(f'serial {port} do not open!')
            sys.exit(0)
        # Step3：新建一个线程用于处理串口数据
        self.um982serial.start()
        # Step4：ROS相关
        self.fix_pub        = self.create_publisher(NavSatFix, '/gps/fix',     10)
        self.utm_pub        = self.create_publisher(Odometry,  '/gps/utm_pose',  10)
        self.euler_pub      = self.create_publisher(Vector3Stamped, '/gps/euler', 10)  

        self.pub_timer      = self.create_timer(1/20, self.pub_task)

    def pub_task(self):
        bestpos_hgt, bestpos_lat, bestpos_lon, bestpos_hgtstd, bestpos_latstd, bestpos_lonstd = self.um982serial.fix
        utm_x, utm_y = self.um982serial.utmpos
        vel_east, vel_north, vel_ver, vel_east_std, vel_north_std, vel_ver_std = self.um982serial.vel
        heading, pitch, roll = self.um982serial.orientation
        this_time = self.get_clock().now().to_msg()

        # Step 1: Publish GPS Fix Data
        fix_msg = NavSatFix()
        fix_msg.header.stamp = this_time
        fix_msg.header.frame_id = gps_frame_id
        fix_msg.latitude = bestpos_lat
        fix_msg.longitude = bestpos_lon
        fix_msg.altitude = bestpos_hgt
        fix_msg.position_covariance[0] = float(bestpos_latstd)**2
        fix_msg.position_covariance[4] = float(bestpos_lonstd)**2
        fix_msg.position_covariance[8] = float(bestpos_hgtstd)**2
        fix_msg.position_covariance_type = NavSatFix.COVARIANCE_TYPE_DIAGONAL_KNOWN
        self.fix_pub.publish(fix_msg)

        euler_msg = Vector3Stamped()
        euler_msg.header.stamp = this_time
        euler_msg.header.frame_id = 'euler_link'
        euler_msg.vector.x = roll     # x轴表示roll（横滚）?math.radians(roll)math.radians(pitch)math.radians(heading)
        euler_msg.vector.y = pitch    # y轴表示pitch（俯仰）
        euler_msg.vector.z = heading  # z轴表示heading（偏航）
        self.euler_pub.publish(euler_msg)

        # Step 2: Publish UTM Position Data
        odom_msg = Odometry()
        odom_msg.header.stamp = this_time
        odom_msg.header.frame_id = 'earth'
        odom_msg.child_frame_id  = 'base_link'
        odom_msg.pose.pose.position.x = utm_x
        odom_msg.pose.pose.position.y = utm_y
        odom_msg.pose.pose.position.z = bestpos_hgt
        quaternion = quaternion_from_euler(math.radians(roll), math.radians(pitch), math.radians(heading))
        odom_msg.pose.pose.orientation.x = quaternion[0]
        odom_msg.pose.pose.orientation.y = quaternion[1]
        odom_msg.pose.pose.orientation.z = quaternion[2]
        odom_msg.pose.pose.orientation.w = quaternion[3]
        odom_msg.pose.covariance         = [0.0] * 36
        odom_msg.pose.covariance[0]      = float(bestpos_latstd)**2
        odom_msg.pose.covariance[7]      = float(bestpos_lonstd)**2
        odom_msg.pose.covariance[14]     = float(bestpos_hgtstd)**2
        odom_msg.pose.covariance[21]     = 0.1
        odom_msg.pose.covariance[28]     = 0.1
        odom_msg.pose.covariance[35]     = 0.1
        odom_msg.twist.twist.linear.x    = vel_east
        odom_msg.twist.twist.linear.y    = vel_north
        odom_msg.twist.twist.linear.z    = vel_ver
        odom_msg.twist.covariance        = [0.0] * 36
        odom_msg.twist.covariance[0]     = float(vel_east_std)**2
        odom_msg.twist.covariance[7]     = float(vel_north_std)**2
        odom_msg.twist.covariance[14]    = float(vel_ver_std)**2
        self.utm_pub.publish(odom_msg)

        # Test
        _, _, yaw = euler_from_quaternion(quaternion)
        #print(heading)


    def run(self):
        if rclpy.ok():
            rclpy.spin(self)

    def stop(self):
        self.um982serial.stop()
        self.pub_timer.cancel()



import time
import signal

def signal_handler(sig, frame):
    dual_rtk_driver.stop()
    time.sleep(0.1)
    if rclpy.ok():
        rclpy.shutdown()
    sys.exit(0)


signal.signal(signal.SIGINT, signal_handler)
rclpy.init()
dual_rtk_driver = wheeltec_dual_rtk_driver()


def main():
    dual_rtk_driver.run()

if __name__ == "__main__":
    main()

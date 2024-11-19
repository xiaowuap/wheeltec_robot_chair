#!/usr/bin/env python
# encoding: utf-8

from visualization_msgs.msg import Marker
from visualization_msgs.msg import MarkerArray
import rospy
import math
from geometry_msgs.msg import PointStamped, PoseStamped
from std_msgs.msg import Int8
import actionlib
from move_base_msgs.msg import *
import sys, select, termios, tty
import time

count = 0
#rviz内标记按下的回调函数，输入参数：按下的位置[x, y, z=0]
def click_callback(msg):           
    global index, count

    print('Add a new target point '+str(count)+':')
    print('x:'+str(msg.point.x)+
        ', y:'+str(msg.point.y)+
        ', z:0'+', w:1') 

    marker = Marker()      #创建marker对象
    marker.header.frame_id = 'map' #以哪一个TF坐标为原点
    marker.type = marker.ARROW #一直面向屏幕的字符格式
    marker.action = marker.ADD #添加marker
    marker.scale.x = 0.2 #marker大小
    marker.scale.y = 0.05 #marker大小
    marker.scale.z = 0.05 #marker大小，对于字符只有z起作用
    marker.color.a = 1 #字符透明度
    marker.color.r = 1 #字符颜色R(红色)通道
    marker.color.g = 0 #字符颜色G(绿色)通道
    marker.color.b = 0 #字符颜色B(蓝色)通道
    marker.pose.position.x = msg.point.x #字符位置
    marker.pose.position.y = msg.point.y #字符位置
    marker.pose.orientation.z = 0 #字符位置
    marker.pose.orientation.w = 1 #字符位置
    markerArray.markers.append(marker) #添加元素进数组

    marker_number = Marker()      #创建marker对象
    marker_number.header.frame_id = 'map' #以哪一个TF坐标为原点
    marker_number.type = marker_number.TEXT_VIEW_FACING #一直面向屏幕的字符格式
    marker_number.action = marker_number.ADD #添加marker
    marker_number.scale.x = 0.5 #marker大小
    marker_number.scale.y = 0.5 #marker大小
    marker_number.scale.z = 0.5 #marker大小，对于字符只有z起作用
    marker_number.color.a = 1 #字符透明度
    marker_number.color.r = 1 #字符颜色R(红色)通道
    marker_number.color.g = 0 #字符颜色G(绿色)通道
    marker_number.color.b = 0 #字符颜色B(蓝色)通道
    marker_number.pose.position.x = msg.point.x #字符位置
    marker_number.pose.position.y = msg.point.y #字符位置
    marker_number.pose.position.z = 0.1 #字符位置
    marker_number.pose.orientation.z = 0 #字符位置
    marker_number.pose.orientation.w = 1 #字符位置
    marker_number.text = str(count) #字符内容
    markerArray_number.markers.append(marker_number) #添加元素进数组

    #markers的id不能一样，否则rviz只会识别最后一个元素
    id = 0
    for m in markerArray.markers:    #遍历marker分别给id赋值
        m.id = id
        id += 1

    for m in markerArray_number.markers:    #遍历marker分别给id赋值
        m.id = id
        id += 1
    
    mark_pub.publish(markerArray) #发布markerArray，rviz订阅并进行可视化
    mark_pub.publish(markerArray_number) #发布markerArray，rviz订阅并进行可视化

    count += 1 #有几个目标点


def send_mark():
    global markerArray, markerArray_number, count, try_again, mark_pub, goal_pub
    markerArray = MarkerArray() #目标点标记数组
    markerArray_number = MarkerArray() #目标点标记数组
    sendflagPublisher = rospy.Publisher('/send_flag', Int8, queue_size =1)
    rospy.init_node('path_point_demo') #初始化节点
    mark_pub    = rospy.Publisher('/path_point', MarkerArray, queue_size = 100) #用于发布目标点标记
    click_sub   = rospy.Subscriber('/clicked_point', PointStamped, click_callback) #订阅rviz内标记按下的位置

    while not rospy.is_shutdown():
        pass
def breakkey():
    fd = sys.stdin.fileno()
    new_settings = termios.tcgetattr(fd)
    new_settings[3]=new_settings[3] | termios.ECHO
    termios.tcsetattr(fd, termios.TCSADRAIN, new_settings)

if __name__ == '__main__':
    settings = termios.tcgetattr(sys.stdin) #获取键值初始化
    rospy.on_shutdown(breakkey)#退出前执行键值初始化
    send_mark()


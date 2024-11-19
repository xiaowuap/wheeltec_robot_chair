#!/usr/bin/env python

import cv2
import cv_bridge

import numpy as np
import rospy
import time
import numpy
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from std_msgs.msg import String as StringMsg

def nothing(s):
    pass


class Adjust_hsv:
    def __init__(self):
        self.bridge = cv_bridge.CvBridge()
        self.mat = None
    
        self.image_sub = rospy.Subscriber('/camera/rgb/image_raw',Image,self.image_callback)
        self.tmp=0


    def image_callback(self, msg):
        if self.tmp==0:
            cv2.namedWindow('Adjust_hsv',cv2.WINDOW_NORMAL)
            cv2.createTrackbar("lowerbH",'Adjust_hsv',0,255,nothing)
            cv2.createTrackbar("lowerbS",'Adjust_hsv',0,255,nothing)
            cv2.createTrackbar("lowerbV",'Adjust_hsv',0,255,nothing)
            cv2.createTrackbar("upperbH",'Adjust_hsv',0,255,nothing)
            cv2.createTrackbar("upperbS",'Adjust_hsv',0,255,nothing)
            cv2.createTrackbar("upperbV",'Adjust_hsv',0,255,nothing)
            self.tmp=1
        lowerbH=cv2.getTrackbarPos("lowerbH",'Adjust_hsv')
        lowerbS=cv2.getTrackbarPos("lowerbS",'Adjust_hsv')
        lowerbV=cv2.getTrackbarPos("lowerbV",'Adjust_hsv')
        upperbH=cv2.getTrackbarPos("upperbH",'Adjust_hsv')
        upperbS=cv2.getTrackbarPos("upperbS",'Adjust_hsv')
        upperbV=cv2.getTrackbarPos("upperbV",'Adjust_hsv')

        image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        # hsv将RGB图像分解成色调H，饱和度S，明度V
        hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        # 颜色的范围        # 第二个参数：lower指的是图像中低于这个lower的值，图像值变为0
        # 第三个参数：upper指的是图像中高于这个upper的值，图像值变为0
        # 而在lower～upper之间的值变成255
        kernel = numpy.ones((5,5),numpy.uint8)
        hsv_erode = cv2.erode(hsv,kernel,iterations=1)
        hsv_dilate = cv2.dilate(hsv_erode,kernel,iterations=1)


        mask=cv2.inRange(hsv_dilate,(lowerbH,lowerbS,lowerbV),(upperbH,upperbS,upperbV))
        masked = cv2.bitwise_and(image, image, mask=mask)
        # 在图像某处绘制一个指示，因为只考虑20行宽的图像，所以使用numpy切片将以外的空间区域清空
        #cv2.imshow("img", image)
        cv2.imshow("Adjust_hsv", masked)
        cv2.waitKey(3)


def main(args=None):
    rospy.init_node('Adjust_hsv')
    print('start patrolling')
    adjust_hsv = Adjust_hsv()
    try:
        rospy.spin()
    except rospy.ROSInterruptException:
        print('exception')

if __name__ == '__main__':
    main()


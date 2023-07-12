#!/usr/bin/env python
# encoding: utf-8
import sys
import math
import time
import rclpy
import random
import threading
import numpy as np
from rclpy.node import Node
from math import pi
from time import sleep
from faithcar_msgs.msg import *
from faithcar_msgs.srv import *
from Rosmaster_Lib import Rosmaster
from geometry_msgs.msg import Twist
# from dynamic_reconfigure.server import Server
# from yahboomcar_bringup.cfg import PIDparamConfig
from std_msgs.msg import String, Float32, Int32, Bool
from sensor_msgs.msg import Imu, MagneticField, JointState


class faithcar_driver(Node):
    def __init__(self, name):
        super().__init__(name)
        self.context.on_shutdown(self.cancel)
        # rospy.on_shutdown(self.cancel)
        self.declare_parameter('Kp', 1.5)
        self.declare_parameter('Ki', 0.3)
        self.declare_parameter('Kd', 0.2)
        self.declare_parameter('linear_max', 0.4)
        self.declare_parameter('angular_max', 2.0)
        self.declare_parameter('linear_min', 0.0)
        self.declare_parameter('angular_min', 0.0)
        self.declare_parameter('joint1', 90)
        self.declare_parameter('joint2', 145)
        self.declare_parameter('joint3', 0)
        self.declare_parameter('joint4', 0)
        self.declare_parameter('joint5', 90)
        self.declare_parameter('joint6', 30)
        self.declare_parameter('SetArmjoint', False)
        self.declare_parameter('imu_link', "imu_link")
        self.declare_parameter('prefix', "")
        self.declare_parameter('xlinear_speed_limit', 1.0)
        self.declare_parameter('ylinear_speed_limit', 1.0)
        self.declare_parameter('angular_speed_limit', 5.0)

        self.sub_cmd_vel = self.create_subscription(Twist, '/cmd_vel', self.cmd_vel_callback, 100)
        self.pub_timer = self.create_timer(0.05, self.pub_data)   

        self.ArmPubUpdate = self.create_publisher(ArmJoint, 'ArmAngleUpdate', 1000)
        self.EdiPublisher = self.create_publisher(Float32, 'edition', 100)
        self.volPublisher = self.create_publisher(Float32, 'voltage', 100)
        self.staPublisher = self.create_publisher(JointState, 'joint_states', 100)
        self.velPublisher = self.create_publisher(Twist, '/pub_vel', 100)
        self.imuPublisher = self.create_publisher(Imu, '/pub_imu', 100)
        self.magPublisher = self.create_publisher(MagneticField, '/pub_mag', 100)


    def cmd_vel_callback(self, msg):
        # 小车运动控制，订阅者回调函数
        # Car motion control, subscriber callback function
        if not isinstance(msg, Twist): print('invalid cmd_vel'); return
        # 下发线速度和角速度
        # Issue linear vel and angular vel
        vx = msg.linear.x
        vy = msg.linear.y
        angular = msg.angular.z
        print("vx: {}, vy: {}, angular: {}".format(vx, vy, angular))
        # 小车运动控制,vel: ±1, angular: ±5
        # Trolley motion control,vel=[-1, 1], angular=[-5, 5]
        # rospy.loginfo("cmd_velx: {}, cmd_vely: {}, cmd_ang: {}".format(vx, vy, angular))
        # self.car.set_car_motion(vx, vy, angular)

    def pub_data(self):
        # 发布小车运动速度、陀螺仪数据、电池电压
        ## Publish the speed of the car, gyroscope data, and battery voltage
            imu = Imu()
            twist = Twist()
            battery = Float32()
            edition = Float32()
            mag = MagneticField()
            # edition.data = float(self.car.get_version())
            # battery.data = self.car.get_battery_voltage()
            # ax, ay, az = self.car.get_accelerometer_data()
            # gx, gy, gz = self.car.get_gyroscope_data()
            # mx, my, mz = self.car.get_magnetometer_data()
            # vx, vy, angular = self.car.get_motion_data()
            edition.data = 1.0
            battery.data = 1.0
            ax, ay, az = 1.0, 1.0, 1.0
            gx, gy, gz = 1.0, 1.0, 1.0
            mx, my, mz = 1.0, 1.0, 1.0
            vx, vy, angular = 1.0, 1.0, 1.0
            # 发布陀螺仪的数据
            # Publish gyroscope data
            imu.header.stamp = self.get_clock().now().to_msg()

            self.imu_link = self.get_parameter('imu_link').get_parameter_value().string_value
            self.Prefix = self.get_parameter('prefix').get_parameter_value().string_value
            self.xlinear_limit = self.get_parameter('xlinear_speed_limit').get_parameter_value().double_value
            self.ylinear_limit = self.get_parameter('ylinear_speed_limit').get_parameter_value().double_value
            self.angular_limit = self.get_parameter('angular_speed_limit').get_parameter_value().double_value

            self.linear_max = self.get_parameter("linear_max").get_parameter_value().double_value
            self.linear_min = self.get_parameter("linear_min").get_parameter_value().double_value
            self.angular_max = self.get_parameter("angular_max").get_parameter_value().double_value
            self.angular_min = self.get_parameter("angular_min").get_parameter_value().double_value

            # self.Prefix = rospy.get_param("~prefix", "")
            # self.xlinear_limit = rospy.get_param('~xlinear_speed_limit', 1.0)
            # self.ylinear_limit = rospy.get_param('~ylinear_speed_limit', 1.0)
            # self.angular_limit = rospy.get_param('~angular_speed_limit', 5.0)

            imu.header.frame_id = self.imu_link
            imu.linear_acceleration.x = float(ax)
            imu.linear_acceleration.y = float(ay)
            imu.linear_acceleration.z = float(az)
            imu.angular_velocity.x = float(gx)
            imu.angular_velocity.y = float(gy)
            imu.angular_velocity.z = float(gz)
            mag.header.stamp = self.get_clock().now().to_msg()
            mag.header.frame_id = self.imu_link
            mag.magnetic_field.x = float(mx)
            mag.magnetic_field.y = float(my)
            mag.magnetic_field.z = float(mz)
            # 将小车当前的线速度和角速度发布出去
            # Publish the current linear vel and angular vel of the car
            twist.linear.x = float(vx)
            twist.linear.y = float(vy)
            twist.angular.z = float(angular)
            self.velPublisher.publish(twist)
            # print("ax: %.5f, ay: %.5f, az: %.5f" % (ax, ay, az))
            # print("gx: %.5f, gy: %.5f, gz: %.5f" % (gx, gy, gz))
            # print("mx: %.5f, my: %.5f, mz: %.5f" % (mx, my, mz))
            # rospy.loginfo("battery: {}".format(battery))
            # rospy.loginfo("vx: {}, vy: {}, angular: {}".format(twist.linear.x, twist.linear.y, twist.angular.z))
            self.imuPublisher.publish(imu)
            self.magPublisher.publish(mag)
            self.volPublisher.publish(battery)
            self.EdiPublisher.publish(edition)
            # self.joints_states_update()

    def cancel(self):
        # self.car.set_car_motion(0, 0, 0)
        self.velPublisher.destroy()
        self.imuPublisher.destroy()
        self.EdiPublisher.destroy()
        self.volPublisher.destroy()
        self.staPublisher.destroy()
        self.magPublisher.destroy()
        self.sub_cmd_vel.destroy()
        # self.sub_RGBLight.destroy()
        # self.sub_Buzzer.destroy()
        # Always stop the robot when shutting down the node
        self.get_logger().info("Stop the robot...")
        sleep(1)

import traceback

def main(args=None):
    rclpy.init(args=args)             	
    try:
        driver_node = faithcar_driver('faithcar_driver')
        sleep(2)
        #driver.joints = [90, 2.0, 60.0, 40.0, 90]
        #driver.car.set_uart_servo_angle_array(driver.joints, 1000)
        rclpy.spin(driver_node)
        # rclpy.shutdown()
    except Exception as e:
        print(e.args)
        print('===========')
        print(traceback.format_exc())


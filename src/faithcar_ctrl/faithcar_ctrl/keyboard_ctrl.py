#!/usr/bin/env python
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys, select, termios, tty

class keyPublisher(Node):
    def __init__(self, name):
        super().__init__(name)
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer_period = 0.1  # seconds

msg = """
Control Your SLAM-Bot!
---------------------------
Moving around:
   u    i    o
   j    k    l
   m    ,    .

q/z : increase/decrease max speeds by 10%
w/x : increase/decrease only linear speed by 10%
e/c : increase/decrease only angular speed by 10%
t/T : x and y speed switch
s/S : stop keyboard control
space key, k : force stop
anything else : stop smoothly

CTRL-C to quit
"""

moveBindings = {
    'i': (1, 0),
    'o': (1, -1),
    'j': (0, 1),
    'l': (0, -1),
    'u': (1, 1),
    ',': (-1, 0),
    '.': (-1, 1),
    'm': (-1, -1),
    'I': (1, 0),
    'O': (1, -1),
    'J': (0, 1),
    'L': (0, -1),
    'U': (1, 1),
    'M': (-1, -1),
}

speedBindings = {
    'Q': (1.1, 1.1),
    'Z': (.9, .9),
    'W': (1.1, 1),
    'X': (.9, 1),
    'E': (1, 1.1),
    'C': (1, .9),
    'q': (1.1, 1.1),
    'z': (.9, .9),
    'w': (1.1, 1),
    'x': (.9, 1),
    'e': (1, 1.1),
    'c': (1, .9),
}
settings = termios.tcgetattr(sys.stdin)

def getKey():
    # tty.setraw():将文件描述符fd模式更改为raw；fileno():返回一个整形的文件描述符(fd)
    tty.setraw(sys.stdin.fileno())
    # select():直接调用操作系统的IO接口；监控所有带fileno()方法的文件句柄
    rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
    # 读取一个字节的输入流
    if rlist: key = sys.stdin.read(1)
    else: key = ''
    # tcsetattr从属性设置文件描述符fd的tty属性
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key

def vels(speed, turn):
    return "currently:\tspeed %s\tturn %s " % (speed, turn)


def main(args=None):
    rclpy.init(args=args)
    key_publisher = keyPublisher('key_publisher')
    
    # linear_limit = rospy.get_param('~linear_speed_limit', 1.0)
    # angular_limit = rospy.get_param('~angular_speed_limit', 5.0)
    linear_limit = 1.0
    angular_limit = 5.0
    xspeed_switch = True
    (speed, turn) = (0.2, 1.0)
    (x, th) = (0, 0)
    status = 0
    stop = False
    count = 0
    try:
        print(msg)
        print(vels(speed, turn))
        while (1):
            # 获取当前按键信息
            key = getKey()
            if key=="t" or key == "T": xspeed_switch = not xspeed_switch
            elif key == "s" or key == "S":
                print ("stop keyboard control: {}".format(not stop))
                stop = not stop
            # 按键字符串判断是否在移动字典中
            if key in moveBindings.keys():
                x = moveBindings[key][0]
                th = moveBindings[key][1]
                count = 0
            # 按键字符串判断是否在速度字典中
            elif key in speedBindings.keys():
                speed = speed * speedBindings[key][0]
                turn = turn * speedBindings[key][1]
                count = 0
                # 速度限制
                if speed > linear_limit: speed = linear_limit
                if turn > angular_limit: turn = angular_limit
                print(vels(speed, turn))
                # 累计一定次数次打印一次msg信息
                if (status == 14): print(msg)
                status = (status + 1) % 15
            # 如果按键是' '或者'k'，则停止运动
            elif key == ' ': (x, th) = (0, 0)
            else:
                # 设置如果不是长按就停止运动功能
                count = count + 1
                if count > 4: (x, th) = (0, 0)
                if (key == '\x03'): break
            # 发布消息
            twist = Twist()
            if xspeed_switch: twist.linear.x = speed * x
            else: twist.linear.y = speed * x
            twist.angular.z = turn * th
            if not stop: key_publisher.publisher_.publish(twist)
    except Exception as e: print(e)
    finally: twist = Twist(); key_publisher.publisher_.publish(twist)
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)

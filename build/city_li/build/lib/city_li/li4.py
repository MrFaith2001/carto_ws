import rclpy
from rclpy.node import Node

def main(args=None):
    rclpy.init(args=args)
    li4_node = Node("li4_node")
    li4_node.get_logger().info("my names li4")
    rclpy.spin(li4_node)
    rclpy.shutdown()

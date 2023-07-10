import rclpy
from rclpy.node import Node

class writerNode(Node):
    def __init__(self, name):
        super().__init__(name)
        self.get_logger().info("my class name is li4")

def main(args=None):
    rclpy.init(args=args)
    li4_node = writerNode("li4_class_node")
    rclpy.spin(li4_node)
    rclpy.shutdown()

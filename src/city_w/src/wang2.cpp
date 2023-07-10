#include "rclcpp/rclcpp.hpp"

class SinglePerson: public rclcpp::Node
{
private:
    /* data */
public:
    SinglePerson(std::string name):Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s", name.c_str());
    }
};


int main(int argc, char ** argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SinglePerson>("wang2_class");
    rclcpp::spin(node);
    rclcpp::shutdown();
}
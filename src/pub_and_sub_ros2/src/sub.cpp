#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int64.hpp>

#include <memory>

using std::placeholders::_1;

class sub : public rclcpp::Node
{
public:
    sub() : Node("subscriber")
    {
        _sub = this->create_subscription<std_msgs::msg::Int64>("/topic", 10, std::bind(&sub::topic_callback, this, _1));
    }
private:
    void topic_callback(const std_msgs::msg::Int64::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Subscriber received : [%d]", msg->data);
    }
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr _sub;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<sub>());
    rclcpp::shutdown();
}
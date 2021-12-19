#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int64.hpp>

#include <chrono>
#include <functional>
#include <memory>

using namespace std::chrono_literals;

class Pub : public rclcpp::Node
{
public:
    Pub() : Node("Publish_node"), _count(0) {
        _pub = this->create_publisher<std_msgs::msg::Int64>("/topic", 10);
        _timer = this->create_wall_timer(100ms, std::bind(&Pub::timerCallBack, this));
    }
private:
    void timerCallBack()
    {
        auto msg_ = std_msgs::msg::Int64();
        msg_.data = _count++;
        RCLCPP_INFO(this->get_logger(), "Publish integer value : [%d]", msg_.data);
        _pub->publish(msg_);
    }
    rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;
    int _count;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Pub>());
    rclcpp::shutdown();
}
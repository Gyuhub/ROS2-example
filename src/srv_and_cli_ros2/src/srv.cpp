#include <rclcpp/rclcpp.hpp>
#include "srv_and_cli_ros2/srv/tutorial.hpp"

#include <memory>

void add(const std::shared_ptr<srv_and_cli_ros2::srv::Tutorial_Request> req, std::shared_ptr<srv_and_cli_ros2::srv::Tutorial_Response> res)
{
    res->sum = req->a + req->b + req->c;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incomming request\na: %ld" " b : %ld" " c : %ld", req->a, req->b, req->c);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sending back response : [%ld]", res->sum);
}

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("Add_three_ints_server");

    rclcpp::Service<srv_and_cli_ros2::srv::Tutorial>::SharedPtr servie = 
    node->create_service<srv_and_cli_ros2::srv::Tutorial>("Service", &add);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add three ints");

    rclcpp::spin(node);
    rclcpp::shutdown();
}
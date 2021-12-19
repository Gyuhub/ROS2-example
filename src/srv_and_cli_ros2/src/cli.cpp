#include <rclcpp/rclcpp.hpp>
#include <srv_and_cli_ros2/srv/tutorial.hpp>

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);

    if (argc != 4)
    {
        RCLCPP_FATAL(rclcpp::get_logger("rclcpp"), "USAGE : Add_THREE_INTS_CLIENT A B C");
        return 1;
    }

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("Add_three_ints_client");
    rclcpp::Client<srv_and_cli_ros2::srv::Tutorial>::SharedPtr client = 
    node->create_client<srv_and_cli_ros2::srv::Tutorial>("Service");

    auto req = std::make_shared<srv_and_cli_ros2::srv::Tutorial::Request>();
    req->a = atoll(argv[1]);
    req->b = atoll(argv[2]);
    req->c = atoll(argv[3]);

    while (!client->wait_for_service(1s))
    {
        if (!rclcpp::ok())
        {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Terminating...");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }
    
    auto res = client->async_send_request(req);
    // Wait for the result
    if (rclcpp::spin_until_future_complete(node, res) == rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum : %ld", res.get()->sum);
    }
    else
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service Add_three_ints");
    }
    rclcpp::shutdown();
    
}
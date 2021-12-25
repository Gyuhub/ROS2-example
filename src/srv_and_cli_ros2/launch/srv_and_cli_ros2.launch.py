from os import name
import launch
import launch.actions
import launch.substitutions
import launch_ros.actions


def generate_launch_description():
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='srv_and_cli_ros2', executable='server', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'server']),
        launch_ros.actions.Node(
            package='srv_and_cli_ros2', executable='client', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'client']
        )
    ])
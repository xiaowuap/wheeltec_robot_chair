#include "pointcloud_concatenate/pointcloud_concatenate.hpp"

int main(int argc, char **argv)
{
  // Create node
  rclcpp::init(argc, argv);
  auto node = std::make_shared<PointcloudConcatenate>();

  double hz = node->getHz();

  auto timer = node->create_wall_timer(
      std::chrono::milliseconds(static_cast<int>(1000.0 / hz)),
      [&node]()
      {
        node->update();
      });

  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}
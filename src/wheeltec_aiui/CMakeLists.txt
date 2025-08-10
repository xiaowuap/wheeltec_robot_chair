cmake_minimum_required(VERSION 3.8)
project(wheeltec_aiui)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories( /usr/include/alsa
                     ${CMAKE_CURRENT_LIST_DIR}/include
                     ${CMAKE_CURRENT_LIST_DIR}/src/utils
                     ${CMAKE_CURRENT_LIST_DIR}/src/jsoncpp)

install(DIRECTORY launch AIUI
  DESTINATION share/${PROJECT_NAME})

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(ollama_ros_msgs REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

file(GLOB_RECURSE SOURCE_FILE
        "src/*.cpp")

link_directories(${CMAKE_CURRENT_LIST_DIR}/libs/arm64)

add_executable(${PROJECT_NAME}  ${SOURCE_FILE})
ament_target_dependencies(${PROJECT_NAME} rclcpp std_msgs ollama_ros_msgs)
target_link_libraries(${PROJECT_NAME} aiui asound pthread stdc++)

install(TARGETS
  ${PROJECT_NAME}
  RUNTIME DESTINATION lib/${PROJECT_NAME}    
)

ament_package()

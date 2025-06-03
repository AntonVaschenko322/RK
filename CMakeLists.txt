cmake_minimum_required(VERSION 3.10)
project(RK)

add_subdirectory(class_lib)
add_subdirectory(test)
add_subdirectory(third-party/gtest)
add_executable(main main.cpp)
target_link_libraries(main Drink)

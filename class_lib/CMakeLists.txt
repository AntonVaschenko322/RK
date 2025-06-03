cmake_minimum_required(VERSION 3.10)
project(DrinkDecorator)

add_library(Drink INTERFACE)

target_include_directories(Drink INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

cmake_minimum_required(VERSION 3.20)

project(TEST_STATE)

include_directories(head)

add_subdirectory(src)

add_executable(state_demo demo.cpp)

target_link_libraries(state_demo state)
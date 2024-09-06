cmake_minimum_required(VERSION 3.22)

project(CMAKE_DEMO)

message(STATUS "PROJECT_SOURCE_DIR = " ${PROJECT_SOURCE_DIR})

# 指定包含的搜索头文件
include_directories(${PROJECT_SOURCE_DIR}/factory/head)
include_directories(${PROJECT_SOURCE_DIR}/proxy/head)

# 子目录的源文件，并指定中间件的目标地址
add_subdirectory(${PROJECT_SOURCE_DIR}/factory/src factory_bin)
add_subdirectory(${PROJECT_SOURCE_DIR}/proxy/src proxy_bin2)

# 以上已经将子目录构建成库，下边是构建可执行文件
set(SRC main.cpp)
add_executable(main_exe ${SRC})

# 使用src目录下构建成静态链接, 必须在add_executable后
target_link_libraries(main_exe factory)
target_link_libraries(main_exe proxy)
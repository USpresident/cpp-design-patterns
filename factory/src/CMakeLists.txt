
# 方式1：逐个指定要编译的源文件
set(SUB_SRC bus.cpp car.cpp)
# 方式2：将目录下的所有源文件保存到变量中
# aux_source_directory(. SUB_SRC)

# 只需在最顶层包头文件就OK？
# include_directories(../head ../factory)

# src目录下的源文件生成静态链接
add_library(factory ${SUB_SRC})

message(STATUS "PROJECT_SOURCE_DIR2 = " ${PROJECT_SOURCE_DIR})


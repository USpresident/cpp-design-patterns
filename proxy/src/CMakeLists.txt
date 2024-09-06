aux_source_directory(. SUB_SRC)

# 编译成动态库
add_library(proxy SHARED ${SUB_SRC})
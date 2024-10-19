cmake_minimum_required(VERSION 3.13) 

set(PROJECT_NAME Enum)

project(${PROJECT_NAME})                    # 工程名，及编译出来的可执行文件叫什么

set(CMAKE_CXX_STANDARD 11)            # 设定C++标准，如果是C，则是CMAKE_C_STANDARD

include_directories(${CMAKE_SOURCE_DIR}/inc)  # 指定包含的头文件路径,"$..."表示CMakeLists.txt所在的路径

# 下面的
#find_package(OpenCV REQUIRED)        # find_package命令用于在系统中寻找库的路径，REQUIRED关键字表示如果找不到会报错，不加这个关键字则不会
#include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB src_file ${CMAKE_SOURCE_DIR}/src/*.cpp) # 使用GLOB命令寻找CMakeLists.txt所在的路径下的全部.cpp文件，并将其路径变量存储到src_file里

add_executable(${PROJECT_NAME} ${src_file})  # 将src_file里的文件打包并一起编译为名叫hello_world的可执行文件
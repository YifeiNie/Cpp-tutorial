cmake_minimum_required(VERSION 3.13)

project(HELLO_world)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/include)


file(GLOB src_file ${CMAKE_SOURCE_DIR}/*.cpp)

add_executable(HELLO_world ${src_file})

target_link_libraries(HELLO_world 
    ${OpenCV_LIBS}
)

cmake_minimum_required(VERSION 3.13) 

set(PROJECT_NAME Inherit)

project(${PROJECT_NAME})                  

set(CMAKE_CXX_STANDARD 11)            

include_directories(${CMAKE_SOURCE_DIR}/inc)  

file(GLOB src_file ${CMAKE_SOURCE_DIR}/src/*.cpp) 

add_executable(${PROJECT_NAME} ${src_file})  
cmake_minimum_required(VERSION 3.23)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)

include_directories(../untitled1)
#add_executable(untitled2 main.cpp Vector.cpp Vector.h)
add_library(Vector SHARED Vector.cpp Vector.h)
find_library(NUMBER libNumber.a ../untitled1/cmake-build-debug)
target_link_libraries(Vector LINK_PUBLIC ${NUMBER})

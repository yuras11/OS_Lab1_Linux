cmake_minimum_required(VERSION 3.23)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

include_directories(../untitled1 ../untitled2)
find_library(NUMBER libNumber.a ../untitled1/cmake-build-debug)
find_library(VECTOR libVector.so ../untitled2/cmake-build-debug)

add_executable(untitled3 main.cpp)
target_link_libraries(untitled3 LINK_PUBLIC ${NUMBER})
target_link_libraries(untitled3 LINK_PUBLIC ${VECTOR})
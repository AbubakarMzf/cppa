cmake_minimum_required(VERSION 3.0)
project(is_prime)
set(CMAKE_CXX_STANDARD 20) # Project wide C++ standard
add_executable(prime src/prime.cpp)
add_compile_options(-Wall -Wextra -Werror) # Project wide coding standard
#set(CMAKE_BUILD_TYPE Debug)

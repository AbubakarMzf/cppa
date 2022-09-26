cmake_minimum_required(VERSION 3.0)
project(find_motive)
set(CMAKE_CXX_STANDARD 20) # Project wide C++ standard
add_executable(main src/find_motive.cpp)
add_compile_options(-Wall -Wextra -Werror) # Project wide coding standard
#set(CMAKE_BUILD_TYPE Debug)

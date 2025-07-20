cmake_minimum_required(VERSION 3.31)
project(bit_arithmetic)

set(CMAKE_CXX_STANDARD 23)

add_executable(bit_arithmetic getones.cpp main.cpp
        chess.cpp)

target_link_libraries(bit_arithmetic PRIVATE stdc++exp)
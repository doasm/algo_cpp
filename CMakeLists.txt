cmake_minimum_required(VERSION 3.0)
project(algo_cpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRE True)

add_subdirectory(src/algorithms)

add_executable(algo_cpp src/main.cpp)

target_link_libraries(
    algo_cpp
    PRIVATE
    sort_algo
)
cmake_minimum_required(VERSION 3.22)
project(mylib
        VERSION 0.1.0.0
        DESCRIPTION "What does it do?"
        LANGUAGES CXX
        )

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_POSTION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

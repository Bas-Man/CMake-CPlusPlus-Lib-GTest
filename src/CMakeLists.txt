
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_POSTION_INDEPENDENT_CODE ON)

set(LIB_BINARY ${CMAKE_PROJECT_NAME})

set(headers
    Example.hpp)
set(sources
    EXample.cpp)
set(SOURCES ${headers} ${sources})

add_library(${LIB_BINARY} STATIC ${SOURCES})
target_include_directories( ${LIB_BINARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
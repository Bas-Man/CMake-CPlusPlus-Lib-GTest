cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_POSTION_INDEPENDENT_CODE ON)


#set(NAME ${CMAKE_PROJECT_NAME}Tester)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.hpp *.cpp)

set(test1 Test1Tester)
set(test1src lib-tester.cpp)

# Specify second test program and source files
#set(test2 Test2Tester)
#set(test2src lib-tester2.cpp)

add_executable(${test1} ${test1src})

# Specify executable for second tester
#add_executable(${test2} ${test2src})

find_package( GTest REQUIRED )      
# adds the gtest include directory
include_directories( ${GTEST_INCLUDE_DIRS} )
# links gtest
target_link_libraries( ${test1} LINK_PUBLIC ${GTEST_LIBRARIES} ${CMAKE_PROJECT_NAME})

# Specify target for second test program
#target_link_libraries( ${test2} LINK_PUBLIC ${GTEST_LIBRARIES} ${CMAKE_PROJECT_NAME})

enable_testing()
add_test(
   NAME ${test1}}
   COMMAND ${test1}
)

cmake_minimum_required(VERSION 3.1)
project(ProgrammingSkillsAndSQL)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-Wall)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(FooBaa 2.cpp)

add_executable(ConcatRemove 3.cpp)

add_executable(ConcatRemoveUnitTest 4.cpp)
target_link_libraries(ConcatRemoveUnitTest ${GTEST_LIBRARIES} pthread)

add_executable(StringLength 9.cpp)

add_executable(ReverseString 10.cpp)

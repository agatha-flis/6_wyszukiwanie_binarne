cmake_minimum_required(VERSION 3.10)
project(mpbin)

set (CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB_RECURSE MPBIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_library(mpbin_src ${MPBIN_SRC})
target_include_directories(mpbin_src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(mpbin ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(mpbin mpbin_src)

file(GLOB_RECURSE MPBIN_TEST_SRC ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
add_executable(tests ${MPBIN_TEST_SRC})
target_link_libraries(tests mpbin_src)
target_link_libraries(tests ${CONAN_LIBS})

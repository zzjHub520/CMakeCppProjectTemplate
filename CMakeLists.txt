cmake_minimum_required(VERSION 3.24)
project(CMakeCppProjectTemplate)

set(CMAKE_CXX_STANDARD 14)

include(cmake/messagecolor.cmake)

add_subdirectory(3rdparty)
add_subdirectory(src)
add_subdirectory(tests)


cmake_minimum_required(VERSION 3.0.0)
project(arpack C)
add_definitions(-std=c89 -fPIC)

if (NOT ${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
    set(ARPACK_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/src PARENT_SCOPE)
endif ()

include_directories(contrib)
add_subdirectory(contrib)
add_subdirectory(util)
add_subdirectory(src)


cmake_minimum_required(VERSION 3.20)
project(ours_config VERSION "${OURS_VERSION}" LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(ours_config INTERFACE)
add_library(ours::config ALIAS ours_config)
target_include_directories(ours_config 
INTERFACE 
    "include"
)

if(BUILD_TESTING AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/test/CMakeLists.txt")
    add_subdirectory(test)
endif()
cmake_minimum_required(VERSION 3.20)
project(acpi VERSION "${OURS_VERSION}" LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(ours_config INTERFACE)
add_library(ours::config ALIAS ours_config)
target_include_directories(ours_config 
INTERFACE 
    "include"
)

add_executable(ours_config_test)
target_sources(ours_config_test 
PRIVATE 
    "test/literal.cpp"
)
target_link_libraries(ours_config_test
PRIVATE
    "ours::config"
)
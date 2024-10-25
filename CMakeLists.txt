cmake_minimum_required(VERSION 3.10)
project(HawkTUI)

# Include directories
include_directories(include)

# Add core, widget, and utils source files
file(GLOB CORE_SRC "src/core/*.c")
file(GLOB WIDGETS_SRC "src/widgets/*.c")
file(GLOB UTILS_SRC "src/utils/*.c")

# Define the library
add_library(HawkTUI ${CORE_SRC} ${WIDGETS_SRC} ${UTILS_SRC})

# Examples
add_executable(example examples/example1.c)
target_link_libraries(example HawkTUI)

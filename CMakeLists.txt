cmake_minimum_required(VERSION 3.10)
project(C_Game)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES src/*.c)
add_executable(game ${SOURCES})

# Link SDL2
find_package(SDL2 REQUIRED)
target_link_libraries(game ${SDL2_LIBRARIES})

# Compiler options
add_compile_options(-Wall -Wextra)

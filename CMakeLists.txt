cmake_minimum_required(VERSION 3.21)
project(SillyPlantSimulator LANGUAGES CXX)

find_package(raylib CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

add_executable(main src/Main.cpp)
target_compile_features(main PRIVATE cxx_std_17)
# The installed static raylib package does not propagate GLFW.
target_link_libraries(main PRIVATE raylib glfw)

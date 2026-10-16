cmake_minimum_required(VERSION 3.21)
project(SillyPlantSimulator LANGUAGES CXX)

find_package(raylib CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

add_executable(main MACOSX_BUNDLE 
    src/Main.cpp
    src/Game.cpp
    src/plant.cpp
)
set_target_properties(main PROPERTIES
    MACOSX_BUNDLE_BUNDLE_NAME "Silly Plant Simulator"
    MACOSX_BUNDLE_GUI_IDENTIFIER "local.sillyplantsimulator.v2"
)
target_compile_features(main PRIVATE cxx_std_17)
# The installed static raylib package does not propagate GLFW.
target_link_libraries(main PRIVATE raylib glfw)

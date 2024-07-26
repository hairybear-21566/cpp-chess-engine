cmake_minimum_required(VERSION 3.10)
project(ChessEngine)  # Replace with your project name

set(CMAKE_CXX_STANDARD 17)  # Adjust if needed

find_package(vcpkg REQUIRED)
vcpkg_integrate_setup(${CMAKE_SOURCE_DIR})  # Setup vcpkg for CMake

find_package(OpenGL REQUIRED)
find_package(glad REQUIRED)
find_package(GLFW3 REQUIRED)  # Assuming you're using GLFW

# Link your main C++ file
add_executable(ChessEngine ChessEngineMain.cpp)

target_link_libraries(ChessEngine PUBLIC OpenGL glad GLFW3)

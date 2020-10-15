cmake_minimum_required(VERSION 3.16)

# Project name
project(pingme VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(PROJECT_BINARY_DIR "build")
set(Qt5_DIR "/usr/include/qt5")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(pingme src/pingme.cpp)

target_link_libraries(pingme Qt5::Core Qt5::Widgets)
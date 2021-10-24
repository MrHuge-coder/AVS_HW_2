# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(task LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
    # Headers
    rnd.h
        Train/train.h
        Ship/ship.h
        Transport/transport.h
        Container/container.h

    # Sources
        Train/train.cpp
        Ship/ship.cpp
        Transport/transport.cpp
        Container/container.cpp
    main.cpp
        Plane/plane.cpp Plane/plane.h)

add_executable(task ${SOURCE_FILES})

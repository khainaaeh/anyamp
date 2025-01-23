cmake_minimum_required(VERSION 3.30)
project(anyamp)

set(CMAKE_CXX_STANDARD 20)

add_executable(anyamp src/main.cpp
        src/player.cpp
        src/player.h
        src/audio_loader.h
        src/audio_loader.cpp
        src/utils.cpp)

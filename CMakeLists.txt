cmake_minimum_required(VERSION 3.8)
project(sha256)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp sha256.cpp sha256.h md5.cpp md5.h)
add_executable(sha256 ${SOURCE_FILES})
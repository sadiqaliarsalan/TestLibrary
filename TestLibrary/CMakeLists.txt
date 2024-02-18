cmake_minimum_required(VERSION 3.0.0)
project(TestLibrary VERSION 1.0.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create a DLL with the specified source files
add_library(TestLibrary SHARED Customer.cpp)

# Specify the public headers of the library
target_include_directories(TestLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
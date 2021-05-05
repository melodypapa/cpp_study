cmake_minimum_required(VERSION 3.10)

project(CPP_Study)

set(CMAKE_BUILD_TYPE debug)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
#set(CMAKE_CXX_COMPILER /opt/local/bin/g++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HelloWorld src/hello_world/hello_world.cpp)
add_executable(enum_class src/enum_class/enum_class.cpp)
add_executable(structs src/structs/main.cpp)
add_executable(copy_string src/strings/copy_string.cpp)
add_executable(string_class src/strings/string_class.cpp)
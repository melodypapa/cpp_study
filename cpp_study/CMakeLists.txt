cmake_minimum_required(VERSION 3.10)

project(CPP_Study)

set(CMAKE_BUILD_TYPE debug)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")
#set(CMAKE_CXX_COMPILER /opt/local/bin/g++)
#set(CMAKE_CXX_COMPILER C:\\cygwin64\\bin\\g++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



FILE(GLOB SpreadSheetSources ./src/spreadsheet/*.cpp)

add_executable(HelloWorld src/hello_world/hello_world.cpp)
add_executable(Testcpp src/hello_world/test.cpp)
add_executable(enum_class src/enum_class/enum_class.cpp)
add_executable(structs src/structs/main.cpp)
add_executable(copy_string src/strings/copy_string.cpp)
add_executable(string_class src/strings/string_class.cpp)
add_executable(ptr_to_ptr src/memory/ptr_to_ptr.cpp)
add_executable(obj_array src/memory/obj_array.cpp)
add_executable(multi_dimension src/memory/multi_dimension.cpp)
add_executable(double_ints src/memory/double_ints.cpp)
add_executable(shared_ptr_file src/memory/shared_ptr_file.cpp)
add_executable(custom_deleter src/memory/custom_deleter.cpp)
add_executable(spreadsheet ${SpreadSheetSources})
add_executable(obj_create src/object/create.cpp)
add_executable(step src/hello_world/step.cpp)
add_executable(character src/strings/character.cpp)
add_executable(base_type_byte src/base_type/byte.cpp)
add_executable(base_type_array src/base_type/array.cpp)
add_executable(base_type_for_loop src/base_type/for_loop.cpp)
add_executable(base_type_initial src/base_type/initial.cpp)
add_executable(exception_throw src/exception/throw.cpp)
add_executable(template_def src/template/template_def.cpp)
add_executable(template_cast src/template/cast.cpp)
add_executable(concept src/template/concept.cpp)
add_executable(comma src/expression/comma.cpp)
add_executable(checked_integer src/expression/checked_integer.cpp)
add_executable(bucket src/expression/bucket.cpp)
add_executable(type_conv src/expression/type_conv.cpp)
add_executable(explicit_conv src/expression/explicit_conv.cpp)

target_compile_options(concept PRIVATE -fconcepts)
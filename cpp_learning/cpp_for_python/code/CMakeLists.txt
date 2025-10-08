CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

PROJECT("cpp_for_python" 
VERSION 0.0.1
LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)            # 使用 C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)   # 必须使用指定标准

set(pybind11_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../deps/share/cmake/pybind11")

find_package(pybind11 REQUIRED PATHS ${pybind11_DIR})

message(STATUS "pybind11版本: ${pybind11_VERSION}")
message(STATUS "pybind11头文件路径: ${pybind11_INCLUDE_DIRS}")
message(STATUS "pybind11库文件: ${pybind11_LIBRARIES}")

pybind11_add_module(example example.cpp)
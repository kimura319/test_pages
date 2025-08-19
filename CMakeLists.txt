cmake_minimum_required(VERSION 3.1)
# CMake setup for main library and sample executable
project(CMake_test)
add_executable(
    hello src/hello.cpp
)
# マクロ（cppに #ifndef を使うことで上書き可能）
target_compile_definitions(
    hello PRIVATE ADD_NUM=2
)


cmake_minimum_required(VERSION 3.1)
# CMake setup for main library and sample executable
project(CMake_test)
# add_library(libSampleApi STATIC
#     src/libSampleApi/libSampleApi.cpp
#     src/libSampleCoreLib/libSampleCoreLib.cpp
# )
add_executable(
    hello src/hello.cpp
)
# マクロ（cppに #ifndef を使うことで上書き可能）
target_compile_definitions(
    hello PRIVATE ADD_NUM=2
)

# target_link_libraries(test
#     libSampleApi
#     gtest_main
# )
# target_include_directories(test PUBLIC
#     ./include
#     third_party/googletest/googletest/include
# )


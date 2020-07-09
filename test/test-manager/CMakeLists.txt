cmake_minimum_required(VERSION 3.2)

include_directories(${SOURCE_DIR}/test-manager)

add_executable(TestModuleTest main.cpp)
target_link_libraries(TestModuleTest libTestModule)

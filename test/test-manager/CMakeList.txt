cmake_minimum_required(VERSION 3.2)

include_directories(${SOURCE_DIR}/qtSeedDb ${SOURCE_DIR}/qtSeedComms ${SOURCE_DIR}/qtSeedApp)

add_executable(TestModule TestComms.cpp)
target_link_libraries(TestComms qtSeedComms qtSeedDb)

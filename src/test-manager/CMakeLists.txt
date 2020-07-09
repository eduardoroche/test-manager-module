# TestModule as static library
file(GLOB_RECURSE SRC "*.cpp")
file(GLOB_RECURSE HDR "*.h")
add_library(${TEST_MODULE} STATIC ${SRC} ${HDR})

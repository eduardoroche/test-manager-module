# Test-Module as static library
file(GLOB_RECURSE MODULE_SRC "*.cpp")
file(GLOB_RECURSE MODULE_HDR "*.h")
add_library(${TEST_MODULE} STATIC ${MODULE_SRC} ${MODULE_HDR})

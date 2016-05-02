#=================== setting up tests ===================
file(GLOB_RECURSE UnitTests "." "*_test.cpp")
add_executable(unittests ${UnitTests} unittests.cpp)
target_link_libraries(unittests ${LIB})
add_test(NAME unittests COMMAND unittests)

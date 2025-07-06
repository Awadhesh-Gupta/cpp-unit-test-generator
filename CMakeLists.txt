cmake_minimum_required(VERSION 3.10)
project(UnitTestGenerator)

set(CMAKE_CXX_STANDARD 14)

# Enable testing functionality
enable_testing()

# Add your executable that includes both source and tests
add_executable(runTests
   src/calculator.cpp
    tests/calculator_test.cpp
)

# Link Google Test libraries and pthread for threading support
target_link_libraries(runTests gtest gtest_main pthread)

# Register the test with CTest
add_test(NAME AllTests COMMAND runTests)

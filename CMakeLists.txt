cmake_minimum_required(VERSION 2.6.2) # TODO: Somewhat arbitrary

project(scratchpad)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

# Here is one executable
add_executable(hello_world hello_world.cpp)

# Here is a shared library
include_directories(src/foo)

# Can manually add source files using set command as in:
# set(FOO_SOURCES src/foo/foo.cpp)
# Or we can use the file(GLOB...) as in:
file(GLOB FOO_SOURCES "src/foo/*.cpp")

# Generate shared library from sources
add_library(foo SHARED ${FOO_SOURCES})

# Here is another executable using shared library
add_executable(test_foo test_foo.cpp)
target_link_libraries(test_foo foo)

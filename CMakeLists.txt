cmake_minimum_required(VERSION 2.6.2) # TODO: Somewhat arbitrary

project(scratchpad)

# Here is one executable
add_executable(hello_world hello_world.cpp)

# Here is another executable
include_directories(src/foo)

# Can manually add source files using set command as in:
# set(FOO_SOURCES src/foo/foo.cpp)
# Or we can use the file(GLOB...) as in:
file(GLOB FOO_SOURCES "src/foo/*.cpp")

add_executable(test_foo test_foo.cpp ${FOO_SOURCES})

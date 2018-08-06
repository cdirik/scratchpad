cmake_minimum_required(VERSION 2.6.2) # TODO: Somewhat arbitrary

project(scratchpad)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

# Here is one executable
add_executable(hello_world hello_world.cpp)

# Here is a shared library
include_directories(src/foo)
include_directories(src/bar)
include_directories(src/baz)

# Can manually add source files using set command as in:
# set(FOO_SOURCES src/foo/foo.cpp)
# Or we can use the file(GLOB...) as in:
file(GLOB SOURCES "src/foo/*.cpp" "src/bar/*.cpp" "src/baz/*.cpp")

# Generate shared library from sources
add_library(scratchpad_lib SHARED ${SOURCES})

# Here is another executable using shared library
add_executable(test_foo test_foo.cpp)
target_link_libraries(test_foo scratchpad_lib)

# Here is another executable using shared library
add_executable(test_bar test_bar.cpp)
target_link_libraries(test_bar scratchpad_lib)

# Here is another executable using shared library
add_executable(test_foo_bar_baz test_foo_bar_baz.cpp)
target_link_libraries(test_foo_bar_baz scratchpad_lib)

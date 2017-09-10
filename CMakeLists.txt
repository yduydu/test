cmake_minimum_required (VERSION 2.8.4 FATAL_ERROR)
project (myTest)

# The version number.
set (test_VERSION_MAJOR 0)
set (test_VERSION_MINOR 1)



set (CMAKE_C_FLAGS "-Werror -Wall -pedantic")

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_BINARY_DIR}/printUtils/include")
include_directories("${PROJECT_BINARY_DIR}/utils/include")


add_subdirectory(./printUtils/src)

set(myTest_source_files test.c)
add_executable(myTest ${myTest_source_files})

target_link_libraries(myTest printUtils)


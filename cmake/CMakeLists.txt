cmake_minimum_required (VERSION 2.8.4 FATAL_ERROR)
project (myTest)

# The version number.
set (myTest_VERSION_MAJOR 0)
set (myTest_VERSION_MINOR 1)
set (myTest_VERSION_PATCH 0)
set(myTest_VERSION  ${myTest_VERSION_MAJOR}.${myTest_VERSION_MINOR}.${myTest_VERSION_PATCH})

# Make relative paths absolute (needed later on)
foreach(p LIB BIN INCLUDE CMAKE)
  set(var INSTALL_${p}_DIR)
  if(NOT IS_ABSOLUTE "${${var}}")
    set(${var} "${CMAKE_INSTALL_PREFIX}/${${var}}")
  endif()
endforeach()

  
# exe management
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)


# GCC build flags
set (CMAKE_C_FLAGS "-Werror -Wall -pedantic")



# add the binary tree to the search path for include files
include_directories("${PROJECT_BINARY_DIR}/..")
include_directories("${PROJECT_BINARY_DIR}/../printUtils/include")
include_directories("${PROJECT_BINARY_DIR}/../utils/include")


add_subdirectory(../printUtils/src ./printUtils)

set(myTest_source_files ../test.c)
add_executable(myTest ${myTest_source_files})

target_link_libraries(myTest printUtils)


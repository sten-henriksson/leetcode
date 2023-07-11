cmake_minimum_required(VERSION 3.11...3.15)

project(Your_Project_Name)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.x
)

FetchContent_MakeAvailable(Catch2)

# Adds Catch2::Catch2
add_subdirectory(src)
add_subdirectory(test)
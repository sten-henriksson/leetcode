
add_library(your_library my_functions.cpp)
add_executable(main main.cpp)
target_link_libraries(main your_library)

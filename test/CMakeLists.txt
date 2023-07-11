
add_executable(tests main_test.cpp) 
target_link_libraries(tests PRIVATE Catch2::Catch2 your_library)

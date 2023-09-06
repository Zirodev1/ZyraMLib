# Declare the statistics library
add_library(autograd autograd.cpp)

# Declare the test application
add_executable(autograd_test autograd_test.cpp)
target_link_libraries(autograd_test autograd)


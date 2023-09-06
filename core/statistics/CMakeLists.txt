# Declare the statistics library
add_library(statistics statistics.cpp)

# Declare the test application
add_executable(statistics_test statistics_test.cpp)
target_link_libraries(statistics_test statistics)



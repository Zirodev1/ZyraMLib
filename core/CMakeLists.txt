# Add subdirectories for each component within core
add_subdirectory(linear_algebra)
add_subdirectory(statistics)
add_subdirectory(autograd)

# Declare the core library (if needed)
add_library(core core.cpp)

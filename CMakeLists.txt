cmake_minimum_required(VERSION 3.10)
project("3rdParty" VERSION 1.0.0)
 

add_subdirectory(glm)
add_subdirectory(rapidobj)
# add_subdirectory(eigen)

# test 
enable_testing() 
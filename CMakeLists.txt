cmake_minimum_required(VERSION 3.10)
project("3rdParty" VERSION 1.0.0)
 
# 3rdParty======================
set(ROOT_3rdParty ${CMAKE_CURRENT_SOURCE_DIR})


add_subdirectory(glm)
add_subdirectory(rapidobj)
# add_subdirectory(eigen)

# test 
enable_testing() 
add_subdirectory(test/Eigen)
add_subdirectory(test/json)

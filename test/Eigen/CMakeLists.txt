include(../../common.cmake)

# include Eigen
include_directories(${ROOT_3rdParty}/Eigen)

# === test ===
add_executable(test_Tensor "test_Tensor.cpp")
add_test(NAME "test_Tensor" COMMAND test_Tensor)

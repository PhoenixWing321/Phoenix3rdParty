include(../../common.cmake)

# include Eigen
include_directories(${ROOT_3rdParty} )

# === test ===
add_executable(test_json "test_json.cpp")
add_test(NAME "test_json" COMMAND test_json)

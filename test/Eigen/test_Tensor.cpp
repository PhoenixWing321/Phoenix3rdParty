#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "test_Tensor.hpp"

using namespace Phoenix::Test;

//----------------------------------------------------------
TEST_CASE("Basic Tensor operations", "[tensor]") {
    Eigen::Tensor<float, 3> tensor(2, 3, 4);
    tensor.setZero();
    
    SECTION("Tensor initialization") {
        REQUIRE(tensor.dimension(0) == 2);
        REQUIRE(tensor.dimension(1) == 3);
        REQUIRE(tensor.dimension(2) == 4);
        REQUIRE(tensor(0,0,0) == 0.0f);
    }

    SECTION("Tensor assignment") {
        tensor.setConstant(1.0f);
        REQUIRE(tensor(1,1,1) == 1.0f);
    }
}
//----------------------------------------------------------
TEST_CASE("Tensor storage layout", "[tensor]") {
    SECTION("Column-major (default)") {
        Eigen::Tensor<float, 3> tensor(2, 3, 4);  // Default column-major storage
        fillAndPrintTensor(tensor, "Column-major");
    }

    SECTION("Row-major") {
        Eigen::Tensor<float, 3, Eigen::RowMajor> tensor(2, 3, 4);  // Row-major storage
        fillAndPrintTensor(tensor, "Row-major");
    }
}
//----------------------------------------------------------    
TEST_CASE("Matrix storage layout", "[matrix]") {
    SECTION("Column-major (default)") {
        Eigen::Matrix<float, 3, 4> matrix;  // Default column-major storage
        fillAndPrintMatrix(matrix, "Column-major");
    }

    SECTION("Row-major") {
        Eigen::Matrix<float, 3, 4, Eigen::RowMajor> matrix;  // Row-major storage
        fillAndPrintMatrix(matrix, "Row-major");
    }
}

#pragma once

#include <Eigen/Core>
#include <unsupported/Eigen/CXX11/Tensor>
#include <iostream>
#include <iomanip>

namespace Phoenix {
namespace Test {

// Helper function for Matrix operations
template<typename MatrixType>
void fillAndPrintMatrix(MatrixType& matrix, const std::string& storageType) {
    // Fill data sequentially
    float counter = 0;
    for(int i = 0; i < matrix.rows(); i++) {
        for(int j = 0; j < matrix.cols(); j++) {
            matrix(i,j) = counter++;
        }
    }

    // Print logical layout and memory layout
    std::cout << "\n" << storageType << " Matrix in logical layout:" << std::endl;
    std::cout << matrix << std::endl;

    std::cout << storageType << " Memory layout:" << std::endl;
    const float* data = matrix.data();
    for(int i = 0; i < matrix.rows() * matrix.cols(); i++) {
        std::cout << std::setw(2) << data[i] << " ";
    }
    std::cout << std::endl;
}

// Helper function for Tensor operations
template<typename TensorType>
void fillAndPrintTensor(TensorType& tensor, const std::string& storageType) {
    // Fill data sequentially
    float counter = 0;
    for(int i = 0; i < tensor.dimension(0); i++) {
        for(int j = 0; j < tensor.dimension(1); j++) {
            for(int k = 0; k < tensor.dimension(2); k++) {
                tensor(i,j,k) = counter++;
            }
        }
    }

    // Print layer by layer layout
    std::cout << "\n" << storageType << " Tensor layout by layers:" << std::endl;
    for(int i = 0; i < tensor.dimension(0); i++) {
        std::cout << "\nLayer " << i << ":" << std::endl;
        std::cout << "-------------" << std::endl;
        for(int j = 0; j < tensor.dimension(1); j++) {
            for(int k = 0; k < tensor.dimension(2); k++) {
                std::cout << std::setw(2) << tensor(i,j,k) << " ";
            }
            std::cout << std::endl;
        }
    }

    // Print raw memory layout
    std::cout << "\nMemory layout:" << std::endl;
    std::cout << "-------------" << std::endl;
    const float* data = tensor.data();
    for(int i = 0; i < tensor.size(); i++) {
        std::cout << std::setw(2) << data[i] << " ";
    }
    std::cout << std::endl;
} 
}
}
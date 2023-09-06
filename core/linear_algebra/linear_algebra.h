#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

#include <vector>

namespace ZyroMLib {
namespace core {

// Vector Addition
std::vector<double> add_vectors(const std::vector<double>& a, const std::vector<double>& b);

// Vector Subtraction
std::vector<double> subtract_vectors(const std::vector<double>& a, const std::vector<double>& b);

// Scalar Multiplication
std::vector<double> scalar_multiply(double scalar, const std::vector<double>& vec);

// Dot Product
double dot_product(const std::vector<double>& a, const std::vector<double>& b);

// Matrix Addition
std::vector<std::vector<double>> add_matrices(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b);

// Matrix Subtraction
std::vector<std::vector<double>> subtract_matrices(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b);

// Matrix Multiplication
std::vector<std::vector<double>> multiply_matrices(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b);

// Matrix Transpose
std::vector<std::vector<double>> transpose_matrix(const std::vector<std::vector<double>>& mat);

} // namespace core
} // namespace MyMLLibrary

#endif // LINEAR_ALGEBRA_H

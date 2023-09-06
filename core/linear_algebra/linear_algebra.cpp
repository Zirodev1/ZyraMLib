#include "linear_algebra.h"
#include <vector>
#include <cmath>
#include <stdexcept>

namespace ZyroMLib {

// Implement dot product
double dot(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Vectors must have the same size for dot product");
    }

    double result = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }

    return result;
}

// Implement vector addition
std::vector<double> vec_add(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Vectors must have the same size for addition");
    }

    std::vector<double> result(vec1.size());
    for (size_t i = 0; i < vec1.size(); ++i) {
        result[i] = vec1[i] + vec2[i];
    }

    return result;
}

// Implement vector subtraction
std::vector<double> vec_subtract(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Vectors must have the same size for subtraction");
    }

    std::vector<double> result(vec1.size());
    for (size_t i = 0; i < vec1.size(); ++i) {
        result[i] = vec1[i] - vec2[i];
    }

    return result;
}

// Implement vector magnitude
double magnitude(const std::vector<double>& vec) {
    double sum_of_squares = 0.0;
    for (const auto& val : vec) {
        sum_of_squares += val * val;
    }
    
    return std::sqrt(sum_of_squares);
}

} // namespace ZyroMLib

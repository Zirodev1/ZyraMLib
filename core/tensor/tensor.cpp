#include "tensor.h"
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

namespace ZyraMLib {

Tensor::Tensor(std::vector<int> shape, std::vector<double> data) : shape_(shape), data_(data) {}

int Tensor::size() {
    return std::accumulate(shape_.begin(), shape_.end(), 1, std::multiplies<int>());
}

void Tensor::print() {
    for (double d : data_) {
        std::cout << d << " ";
    }
    std::cout << std::endl;
}

Tensor Tensor::add(const Tensor& other) const {
    if (shape_ != other.shape_) {
        throw std::invalid_argument("Shapes must match for addition");
    }
    std::vector<double> result_data(data_.size());
    std::transform(data_.begin(), data_.end(), other.data_.begin(), result_data.begin(), std::plus<double>());
    return Tensor(shape_, result_data);
}

Tensor Tensor::subtract(const Tensor& other) const {
    if (shape_ != other.shape_) {
        throw std::invalid_argument("Shapes must match for subtraction");
    }
    std::vector<double> result_data(data_.size());
    std::transform(data_.begin(), data_.end(), other.data_.begin(), result_data.begin(), std::minus<double>());
    return Tensor(shape_, result_data);
}

Tensor Tensor::multiply(const Tensor& other) const {
    if (shape_ != other.shape_) {
        throw std::invalid_argument("Shapes must match for multiplication");
    }
    std::vector<double> result_data(data_.size());
    std::transform(data_.begin(), data_.end(), other.data_.begin(), result_data.begin(), std::multiplies<double>());
    return Tensor(shape_, result_data);
}

Tensor Tensor::divide(const Tensor& other) const {
    if (shape_ != other.shape_) {
        throw std::invalid_argument("Shapes must match for division");
    }
    std::vector<double> result_data(data_.size());
    std::transform(data_.begin(), data_.end(), other.data_.begin(), result_data.begin(), std::divides<double>());
    return Tensor(shape_, result_data);
}

} // namespace ZyraMLib

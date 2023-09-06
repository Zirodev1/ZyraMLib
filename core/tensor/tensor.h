#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

namespace ZyraMLib {

class Tensor {
private:
    std::vector<int> shape_;
    std::vector<double> data_;
public:
    Tensor(std::vector<int> shape, std::vector<double> data);
    int size();
    void print();
    Tensor add(const Tensor& other) const;
    Tensor subtract(const Tensor& other) const;
    Tensor multiply(const Tensor& other) const;
    Tensor divide(const Tensor& other) const;
};

} // namespace ZyraMLib

#endif // TENSOR_H

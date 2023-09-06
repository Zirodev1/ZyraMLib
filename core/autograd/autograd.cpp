#include "autograd.h"
#include <memory>

namespace ZyroMLib {

Variable::Variable(double value, std::shared_ptr<Function> grad_fn)
    : value(value), grad_fn(grad_fn) {}

std::shared_ptr<Variable> Variable::backward() {
    if (grad_fn) {
        return grad_fn->apply(shared_from_this());
    }
    return nullptr;
}

std::shared_ptr<Variable> SquareFunction::apply(const std::shared_ptr<Variable>& input) {
    double result = input->value * input->value;
    return std::make_shared<Variable>(result, std::make_shared<SquareFunction>());
}

}  // namespace ZyroMLib

#ifndef AUTOGRAD_H
#define AUTOGRAD_H

#include <memory>
#include <vector>

namespace ZyroMLib {

class Variable;

class Function {
public:
    virtual std::shared_ptr<Variable> apply(const std::shared_ptr<Variable>& input) = 0;
};

class Variable : public std::enable_shared_from_this<Variable> {
public:
    double value;
    std::shared_ptr<Function> grad_fn;

    Variable(double value, std::shared_ptr<Function> grad_fn = nullptr);

    std::shared_ptr<Variable> backward();
};

class SquareFunction : public Function {
public:
    std::shared_ptr<Variable> apply(const std::shared_ptr<Variable>& input) override;
};

}  // namespace ZyroMLib

#endif  // AUTOGRAD_H

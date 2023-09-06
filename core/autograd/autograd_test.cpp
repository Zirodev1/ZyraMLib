#include <iostream>
#include "autograd.h"

int main() {
    auto var = std::make_shared<ZyroMLib::Variable>(3.0);
    auto square_fn = std::make_shared<ZyroMLib::SquareFunction>();
    auto result = square_fn->apply(var);

    std::cout << "Square of 3 is: " << result->value << std::endl;

    auto grad = result->backward();
    std::cout << "Gradient at x = 3 is: " << grad->value << std::endl;

    return 0;
}


#include "statistics.h"
#include <iostream>

int main() {
    std::vector<double> data = {1, 2, 3, 4, 5};
    
    double meanValue = ZyroMLib::Statistics::mean(data);
    double medianValue = ZyroMLib::Statistics::median(data);
    double modeValue = ZyroMLib::Statistics::mode(data);
    double varianceValue = ZyroMLib::Statistics::variance(data);
    double stdDevValue = ZyroMLib::Statistics::standardDeviation(data);
    
    std::cout << "Mean: " << meanValue << std::endl;
    std::cout << "Median: " << medianValue << std::endl;
    std::cout << "Mode: " << modeValue << std::endl;
    std::cout << "Variance: " << varianceValue << std::endl;
    std::cout << "Standard Deviation: " << stdDevValue << std::endl;
    
    return 0;
}

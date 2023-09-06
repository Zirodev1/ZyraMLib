#pragma once
#include <vector>

namespace ZyroMLib {

class Statistics {
public:
    // Statistical Measures
    static double mean(const std::vector<double>& data);
    static double median(const std::vector<double>& data);
    static double mode(const std::vector<double>& data);
    static double variance(const std::vector<double>& data);
    static double standardDeviation(const std::vector<double>& data);
};

} // namespace ZyroMLib


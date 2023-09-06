#include "statistics.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <map>
// Include necessary standard library headers

namespace ZyroMLib {

// Implement mean
double Statistics::mean(const std::vector<double>& data) {
    if (data.empty()) return 0.0;

    double sum = 0.0;
    for (const auto& val : data) {
        sum += val;
    }
    return sum / static_cast<double>(data.size());
}

// Implement median
double Statistics::median(const std::vector<double>& data) {
    if (data.empty()) return 0.0;

    std::vector<double> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());

    size_t size = sortedData.size();
    if (size % 2 == 1) {
        return sortedData[size / 2];
    } else {
        return (sortedData[(size / 2) - 1] + sortedData[size / 2]) / 2.0;
    }
}

// Implement mode
double Statistics::mode(const std::vector<double>& data) {
        std::map<double, int> freqMap;
    
    // Count the frequency of each element in the dataset
    for (const auto& val : data) {
        freqMap[val]++;
    }
    
    double modeVal = data[0];
    int maxCount = 0;
    
    // Find the mode (element with maximum frequency)
    for (const auto& [val, count] : freqMap) {
        if (count > maxCount) {
            maxCount = count;
            modeVal = val;
        }
    }
    
    return modeVal;
}

// Implement variance
double Statistics::variance(const std::vector<double>& data) {
        double mean = 0.0;
    double var = 0.0;
    
    // Calculate the mean
    for (const auto& val : data) {
        mean += val;
    }
    mean /= data.size();
    
    // Calculate the variance
    for (const auto& val : data) {
        var += (val - mean) * (val - mean);
    }
    var /= data.size();
    
    return var;
}

// Implement standard deviation
double Statistics::standardDeviation(const std::vector<double>& data) {
    return std::sqrt(variance(data));
}

} // namespace ZyroMLib

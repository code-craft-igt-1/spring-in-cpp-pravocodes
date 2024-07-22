#include "stats.h"
#include <iostream>
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here

    Stats stats;

    if (a.empty()) {
        stats.average = 0.0f;
        stats.max = 0.0f;
        stats.min = 0.0f;
    }
    else {
        float sum = 0;
        float maxi = INT_MIN, mini = INT_MAX;
        for (int i = 0; i < a.size(); i++) {
            sum += a[i];
            if (maxi < a[i])maxi = a[i];
            if (mini > a[i])mini = a[i];
        }

        stats.average = static_cast<float>(sum / a.size());
        stats.max = static_cast<float>(maxi);
        stats.min = static_cast<float>(mini);


    }



    return stats;
}

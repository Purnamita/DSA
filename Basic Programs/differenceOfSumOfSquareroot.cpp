#include <iostream>
#include <cmath>
#include <iomanip>

class SquareRootDifference {
public:
    static double squareRootDifference(int m, int n) {
        double sum_even = 0, sum_odd = 0;
        for (int i = m; i <= n; ++i) {
            double squareRoot = std::sqrt(i);
            if (i % 2 == 0) {
                sum_even += squareRoot;
            } else {
                sum_odd += squareRoot;
            }
        }
        return sum_even - sum_odd;
    }
};
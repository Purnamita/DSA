#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

int thirdLargest(std::vector<int>& arr) {
    if (arr.size() < 3) {
        return -1; 
    }

   
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    return (third == INT_MIN) ? -1 : third;
}
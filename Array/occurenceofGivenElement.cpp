#include <iostream>
#include <vector>

class OccurrenceCounter {
public:
    static int countOccurrences(const std::vector<int>& arr, int element) {
        int count = 0;
        for (int num : arr) {
            if (num == element) {
                count++;
            }
        }
        return count;
    }
};
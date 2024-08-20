#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BinarySearch {
public:
    static int binarySearch(const vector<int>& array, int target) {

        sort(array.begin(), array.end()); // to sort the array in ascending order

        int left = 0;
        int right = array.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (array[mid] == target) {
                return mid;
            }
            
            if (array[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};



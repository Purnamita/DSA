// find the maximum element in the array


// Optimal Method (Binary search)
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int left = 0;
        int right = a.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if mid is a peak element
            if ((mid == 0 || a[mid] > a[mid - 1]) && (mid == a.size() - 1 || a[mid] > a[mid + 1])) {
                return a[mid];
            }

            // If the element to the right is greater, move right
            if (mid < a.size() - 1 && a[mid] < a[mid + 1]) {
                left = mid + 1;
            }
            // If the element to the left is greater, move left
            else {
                right = mid - 1;
            }
        }

        // In case of invalid input, though per constraints this should not happen
        return -1;
    }
};

//Bruteforce method

#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        int max = a[0];
        
        // Traverse the entire array to find the maximum element
        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        return max;
    }
};


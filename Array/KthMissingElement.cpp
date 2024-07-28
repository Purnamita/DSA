//1539. Kth Missing Positive Number

// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
// Return the kth positive integer that is missing from this array.

// Example 1:
// Input: arr = [2,3,4,7,11], k = 5
// Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current_missing_count = 0;
        int current_number = 1;
        int i = 0;
        int n = arr.size();
        
        // Iterate until we find the kth missing number
        while (current_missing_count < k) {
            if (i < n && arr[i] == current_number) {
                // If the current number is in the array, move to the next element in arr
                i++;
            } else {
                // If the current number is missing, increment the missing count
                current_missing_count++;
            }
            //If the missing count has not yet reached k, increment the current number.
            
            if (current_missing_count < k) {
                current_number++;
            }
        }
        
        return current_number;
    }
};

// Example usage:
// int main() {
//     Solution sol;
//     vector<int> arr = {2, 3, 4, 7, 11};
//     int k = 5;
//     int result = sol.findKthPositive(arr, k);
//     cout << result; // Output: 9
//     return 0;
// }

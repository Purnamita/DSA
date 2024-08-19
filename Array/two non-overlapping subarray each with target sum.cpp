// //Find Two Non-overlapping Sub-arrays Each With Target Sum
// You are given an array of integers arr and an integer target.

// You have to find two non-overlapping sub-arrays of arr each with a sum equal target. There can be multiple answers so you have to find an answer where the sum of the lengths of the two sub-arrays is minimum.

// Return the minimum sum of the lengths of the two required sub-arrays, or return -1 if you cannot find such two sub-arrays.

 

// Example 1:

// Input: arr = [3,2,2,4,3], target = 3
// Output: 2
// Explanation: Only two sub-arrays have sum = 3 ([3] and [3]). The sum of their lengths is 2.
// Example 2:

// Input: arr = [7,3,4,7], target = 7
// Output: 2
// Explanation: Although we have three non-overlapping sub-arrays of sum = 7 ([7], [3,4] and [7]), but we will choose the first and third sub-arrays as the sum of their lengths is 2.
// Example 3:

// Input: arr = [4,3,2,6,2,3,4], target = 6
// Output: -1
// Explanation: We have only one sub-array of sum = 6.

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> min_len(n, INT_MAX); // min_len[i] stores the minimum length of a subarray ending at or before i
        int left = 0, sum = 0, min_len_so_far = INT_MAX, result = INT_MAX;
        
        // Sliding window to find the subarrays
        for (int right = 0; right < n; ++right) {
            sum += arr[right];
            
            while (sum > target && left <= right) {
                sum -= arr[left];
                ++left;
            }
            
            if (sum == target) {
                int current_len = right - left + 1;
                
                // If there is a valid subarray before the current subarray
                if (left > 0 && min_len[left - 1] != INT_MAX) {
                    result = min(result, current_len + min_len[left - 1]);
                }
                
                min_len_so_far = min(min_len_so_far, current_len);
            }
            
            // Update the min_len array
            min_len[right] = min_len_so_far;
        }
        
        return result == INT_MAX ? -1 : result;
    }
};



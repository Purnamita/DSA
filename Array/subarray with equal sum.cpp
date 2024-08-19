// Example 1:

// Input: nums = [4,2,4]
// Output: true
// Explanation: The subarrays with elements [4,2] and [2,4] have the same sum of 6.
// Example 2:

// Input: nums = [1,2,3,4,5]
// Output: false
// Explanation: No two subarrays of size 2 have the same sum.
// Example 3:

// Input: nums = [0,0,0]
// Output: true
// Explanation: The subarrays [nums[0],nums[1]] and [nums[1],nums[2]] have the same sum of 0. 
// Note that even though the subarrays have the same content, the two subarrays are considered different because they are in different positions in the original array.

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        // unordered_set<int> sums;
        // for (int i = 0; i < nums.size() - 1; i++) {
        //     int sum = nums[i] + nums[i + 1];
        //     if (sums.find(sum) != sums.end()) {
        //         return true;
        //     }
        //     sums.insert(sum);
        // }
        // return false;

        int n = nums.size();
        
        // Loop through the array and compare every pair of subarrays of length 2
        for (int i = 0; i < n - 1; i++) {
            int sum1 = nums[i] + nums[i + 1];
            for (int j = i + 1; j < n - 1; j++) {
                int sum2 = nums[j] + nums[j + 1];
                if (sum1 == sum2) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
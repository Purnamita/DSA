#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>

using namespace std;

//method - 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_index;

        for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_index.find(complement) != num_index.end()) {
            return {num_index[complement], i};
        }
        num_index[nums[i]] = i;
    }
    return {};
        
    }
};

//method - 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // Check all pairs
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};  // Return the indices of the two numbers
                }
            }
        }
        return {};
    }
};
//given an integer array nums, find subarray with the largest sum, and return its sum. 
// input = [-2 , 1 , -3 , 4 , -1 , 2 , 1 , -5 , 4]
//output = 6

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

class Solution{
    public:
int maxSubArray(vector<int>& nums)
{
    int sum = 0 ; 
    int maxSum = INT_MIN;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        sum = sum += nums[i];
        maxSum = max(maxSum,sum);

        if(sum < 0)
        {
            sum = 0 ;
        }
    }
    return maxSum;

}
};
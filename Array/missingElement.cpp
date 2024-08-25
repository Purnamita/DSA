#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(int n, vector<int>& arr) {
        int totalSum = n * (n + 1) / 2; 
        int arraySum = 0;
        
        for (int i = 0; i < n - 1; ++i) { 
            arraySum += arr[i];
        }
        
        return totalSum - arraySum;
    }
};


//method - 2


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); // Get the size of the array
        int total = n * (n + 1) / 2; // Calculate the expected total sum
        int sum = 0;

        // Sum up all the numbers in the array
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        // The missing number is the difference between the expected sum and the actual sum
        return total - sum;
    }
};
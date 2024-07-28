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

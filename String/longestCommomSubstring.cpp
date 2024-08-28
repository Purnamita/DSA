#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int longestCommonSubstringSum(std::string S1, std::string S2) {
        int n = S1.length();
        int m = S2.length();
        std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));
        int maxLength = 0;
        int maxSum = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (S1[i - 1] == S2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    int currentLength = dp[i][j];
                    
                    // Calculate ASCII sum for this substring
                    int currentSum = 0;
                    for (int k = 0; k < currentLength; ++k) {
                        currentSum += S1[i - 1 - k];
                    }

                    // Update maximum length and sum if needed
                    if (currentLength > maxLength) {
                        maxLength = currentLength;
                        maxSum = currentSum;
                    } else if (currentLength == maxLength) {
                        maxSum = std::max(maxSum, currentSum);
                    }
                }
            }
        }

        return maxSum;
    }
};

int main() {
    Solution solution;
    std::string S1, S2;
    std::cout << "Enter string S1: ";
    std::cin >> S1;
    std::cout << "Enter string S2: ";
    std::cin >> S2;
    int result = solution.longestCommonSubstringSum(S1, S2);
    std::cout << "The sum of the ASCII values of the longest common substring is: " << result << std::endl;
    return 0;
}

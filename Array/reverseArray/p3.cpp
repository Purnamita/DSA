#include <string>
#include <cctype>  // For isalpha
#include <algorithm>  // For swap

class Solution {
public:
    std::string reverseOnlyLetters(std::string s) {
        int left = 0, right = s.size() - 1;
    
        while (left < right) {
            if (!isalpha(s[left])) {
                left++;
            } else if (!isalpha(s[right])) {
                right--;
            } else {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
    
        return s;
    }
};

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        vector<string> stack;
        string temp = "";

        // Iterate through the string and split words by spaces
        for(size_t i = 0 ; i < s.length() ; i++) {
            if(s[i] == ' ') {
                if(!temp.empty()) {
                    stack.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }

        // Push the last word to the stack if there is any
        if(!temp.empty()) {
            stack.push_back(temp);
        }

        // Create the result by reversing the order of the stack
        for(int i = stack.size() - 1 ; i >= 0 ; --i) {
            result += stack[i];
            if (i != 0) {
                result += " ";
            }
        }

        return result;
    }
};
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        
        for (int i = 0; i < s.length(); ++i) {
            // Rotate the string by moving the first character to the end
            s = s.substr(1) + s[0];
            
            if (s == goal) {
                return true;
            }
        }
        
        return false;
    }
};

int main() {
    Solution solution;
    string s, goal;

    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string goal: ";
    cin >> goal;

    bool result = solution.rotateString(s, goal);
    cout << boolalpha << result << endl; 
    
    return 0;
}

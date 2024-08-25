#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        int map[26] = {0}; // Initialize an array of size 26 with all elements set to 0
        
        for (int i = 0; i < s.length(); i++) {
            map[s[i] - 'a']++; // Increment the count for the character in `s`
            map[t[i] - 'a']--; // Decrement the count for the character in `t`
        }
        
        for (int i = 0; i < 26; i++) {
            if (map[i] != 0) {
                return false; // If any count is not 0, s and t are not anagrams
            }
        }
        
        return true; // If all counts are 0, s and t are anagrams
    }
};

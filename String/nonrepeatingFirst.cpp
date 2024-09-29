#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    char nonrepeatingCharacter(string s) {
        
        int frequency[26] = {0}; // Array to count frequency of each character
     //frequency of each character
    for (char ch : s) {
        frequency[ch - 'a']++; 
    }

   //first non-repeating character
    for (char ch : s) {
        if (frequency[ch - 'a'] == 1) {
            return ch; 
        }
    }
    return '$';
    }
};
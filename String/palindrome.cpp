#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


//Method - 1
int isPalindrome(string S)
	{
	    int left = 0;
	    int right = S.size()-1;
	    
	    while(left < right)
	    {
	        if(S[left] != S[right])
	        {
	            return 0;
	        }
	        left++;
	        right--;
	    }
	    return 1;
	}


//Method -2 (By skipping odd character)

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false

bool validPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            // Check by skipping either the left or the right character
            int l1 = left + 1, r1 = right;
            int l2 = left, r2 = right - 1;
            
            // Check if skipping the left character makes it a palindrome
            while (l1 < r1 && s[l1] == s[r1]) {
                l1++;
                r1--;
            }
            if (l1 >= r1) return true;
            
            // Check if skipping the right character makes it a palindrome
            while (l2 < r2 && s[l2] == s[r2]) {
                l2++;
                r2--;
            }
            return l2 >= r2;
        }
        left++;
        right--;
    }
    return true;
}


//Method - 2

class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    int left = 0;
	    int right = s.size()-1;
	    
	    while(left < right)
	    {
	        while(!isalnum(s[left]) && left < right)
	        {
	            left++;
	        }
	        while(!isalnum(s[right]) && left < right)
	        {
	            right--;
	        }
	        if(tolower(s[left]) != tolower(s[right]))
	        {
	            return 0;
	        }
	        left++;
	        right--;
	    }
	    return 1;
	}
};
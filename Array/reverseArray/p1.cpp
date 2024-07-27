// NO Repeatation and space included

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string reverseString(string s)
{
    unordered_set<char> seen;
    string result;
    
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] != ' ' && seen.find(s[i]) == seen.end()) {
            result += s[i];
            seen.insert(s[i]);
        }
    }
    
    return result;
    //code here.
}

int main() {
    string S1 = "GEEKS FOR GEEKS";
    string S2 = "I AM AWESOME";
    
    cout << reverseString(S1) << endl;  // Output: "SKEGROF"
    cout << reverseString(S2) << endl;  // Output: "EMOSWAI"
    
    return 0;
}
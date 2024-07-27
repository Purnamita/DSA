#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string reverseString(string s){
    string str;
    for(int i = 0 ; i < s.length() ; i++)
    {
        str = s[i] + str ;
    }
    return str ;

}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string areAnagram(string str1 , string str2)
{
    if(str1.length() != str2.length())
    {
        return "no";
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2 ? "yes" : "no" ;
}
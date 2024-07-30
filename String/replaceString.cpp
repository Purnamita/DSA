//replace the string in such a manner that ch1 is replaced by ch2 and viceversa 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string replaceCharacter(const string& str, char ch1, char ch2)
{
    string result = str;
    for(char &c : result)
    
    {
        if(c == ch1)
        {
            c = ch2;
        }
        else if(c == ch2)
        {
            c = ch1;
        }
    }
    return result;
}

//replacing all occurences of the character 'a' with the character 'b' and viceversa.

string transformString(string str)
{
    for (char& c :str)
    {
        if(c == 'a')
        c = 'b';
        else if(c == 'b')
        c='a';
    }
    return str;
}
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    string str;
    for(int i = 0 ; i < s.length() ; i++)
    {
        str = s[i] + str ;
    }
    cout<< str ;

}

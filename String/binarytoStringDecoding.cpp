#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";
    int count = 0;
    
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '0' && count == 0)
        {
            count = 0;
        }
        else if(s[i] == '0' && count > 0)
        {
            char letter = 'A' + (count - 1);
            res = res + letter ;
            count = 0;
        }
        else{
            count++;
        }
    }

    if(s[s.length() - 1] == '1')
    {
        char letter = 'A' + (count - 1);
        res = res + letter ;
    }
    
    cout << res << endl;
    return 0;
}
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int countUp = 0;
    int countLo = 0 ;

    for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            countUp++;
        } 
        else{
            if(s[i] >= 97 && s[i] <= 122)
            {
                countLo++;
            }
        }
    }

if(countLo > countUp)
    {
        for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
}
else{
    for(int i = 0 ; i < s.length() ; i++){
    if(s[i] >= 97 && s[i] <= 122)
            {
                s[i] -= 32;
            }
    }
}

cout << s <<endl;

}
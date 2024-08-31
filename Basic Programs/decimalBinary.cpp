#include<iostream>

using namespace std;

string helper(int n)
{
    if(n==0)
    cout<<"0";
    if(n==1)
    cout<<"1";

    string ans ="";
    while(n>0){
        if(n&1)
        {
            ans = "1" + ans ;
        }
        else{
            ans = "0" + ans ;
        }
        n = n >> 1 ;
    }
    return ans ;
}

int main()
{
    int n;
    cin>>n;
    cout<<helper(n);
}
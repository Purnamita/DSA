#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;
    int reversed = 0;

    while(num != 0)
    {
        int digit = num % 10 ;
        reversed = reversed * 10 + digit;
        num = num / 10 ; 
    }
    cout<< reversed;

    return 0;
}
#include<iostream>

using namespace std;

int helper(int n)
{
    if(n==0 || n == 1)
    {
        cout <<"1";
    }
    int a = 0;
    int b = 1 ;
    int c;

    for(int i = 2 ; i <= n ; i++)
    {
        c = a + b ;
        a = b ;
        b = c;
    }  
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<helper(n);

}

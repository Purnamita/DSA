#include<iostream>

using namespace std;

int helper(int n)
{
    if(n==0)
    return 0;

    int count = 0;
    for(int i = 1 ; i<= n ;i++)
    {
        int sum = 0;
        int j = i;
        while(j>0){
        if(j&1)
        {
            sum += 2;
        }
        else{
            sum += 1;
        }
        j = j >> 1;
        }
        if(sum % 2 != 0 ){
        count++;
        }
    }
    return count;
}

int main()
{
    int n ;
    cout<<"n:";
    cin>>n;

    cout<<helper(n)<<endl;
}
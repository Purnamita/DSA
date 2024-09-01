#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int>arr , int n)
{
    if(n==0 || n==1)
    return 0;
    int count = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] < arr[i-1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"n";//array size
    cin>>n;

    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    cout<<helper(arr,n)<<endl;

    return 0;

}
#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int>arr,int n)
{
    int count = 0;
    for(int i = 0 ; i < n ;i ++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    int mid = (count+1)/2 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > 0)
        {
            mid--;
            if(mid==0)
            return arr[i];
        }
    }
    return -1;
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
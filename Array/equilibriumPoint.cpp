#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int>arr , int n)
{
    int right = 0;
    int left = 0; 
    for(int i = 0 ; i < n ; i++)
    {
        right += arr[i];
    }

    for(int i =0 ; i< n ; i++)
    {
        right = right - arr[i];

        if(right == left)
        {
            return i;
        }
        else{
            left = left + arr[i];
        }
    }
    return -1 ;
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

#include<iostream>
#include<vector>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    int n ; 
    cout<<"array size:";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int sup = INT_MIN;
    int count = 0;

    for(int i = n - 1 ; i >= 0 ; i-- )
    {
        if(arr[i] > sup)
        {
            count++;
            sup = arr[i];
        }
    }
    cout<< count;

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 1 ; i <= n ; i++)
    {
        cin>>arr[i];
    }

    int money;
    cout<<"money:";
    cin>>money;

    int count = 0;
    sort(arr.begin(),arr.end());

    for(int i = 1 ; i <= n ; i++)
    {
        if(arr[i-1]%5 == 0)
        {
            count++;
        }
        else if(money >= arr[i-1])
        {
            count++;
            money -= arr[i-1];
        }
        
    }

    cout<<count<<endl;
    

}
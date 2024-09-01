#include<iostream>
#include<string>

using namespace std;
int helper(string s,int k)
{
    int i = 0 , j = 0 ;
    int currCount = 0;
    int maxCount = 0 ;

    while(j<k)
    {
        if(s[j] == 'a')
        {
            currCount++;
        }
        j++;
    }
    maxCount = max(maxCount, currCount);

    while(j<s.length())
    {
        if(s[i] == 'a')
        currCount--;
        if(s[j] == 'a')
        currCount++;

        maxCount = max(maxCount,currCount);
        i++;
        j++;
    }
    return maxCount;
}
int main()
{
    string s;
    cout<<"S:";
    cin>>s;

    int k;
    cout<<"k";
    cin>>k;

    cout<<helper(s,k)<<endl;

    return 0;
}
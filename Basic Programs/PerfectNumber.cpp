#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)  
        {
            sum += i;  
        }
    }

    if(sum == n && n != 0)
    {
        cout << n << " " << "is a Perfect number" << endl;
    }
    else
    {
        cout << n << " " << "is Not a perfect number" << endl;
    }

    return 0;
}

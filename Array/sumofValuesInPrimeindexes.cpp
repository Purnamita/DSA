#include<iostream>
#include <cmath>
#include <vector>
using namespace std; 

bool isPrime(int N)
    {
        if(N == 0 || N == 1)
        {
            return false;
        }
        for(int k = 2 ; k <= sqrt(N) ; k++)
        {
            if (N % k == 0) 
            {
                return false;
            }
        }
        return true;

    }

    int sumPrime(vector<int> arr)
    {
        int sum = 0 ;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(isPrime(i))
            {
                sum = sum + arr[i];
            }
        }
        return sum;

    }

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sumPrime(arr);

    cout << "Sum of values at prime indices: " << result << std::endl;

    return 0;
}
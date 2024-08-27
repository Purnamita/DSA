#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else{
        for (int i = 2 ; i < sqrt(n) ; i++)
        {
            if (n % i == 0) 
            {
                return false;
            }
        }
    }
    return true;
}

 int googlyPrime(int num)
 {
    int sum = 0;
    if(num > 0)
    {
        int digit = num % 10 ;
        sum = sum + digit ;
        num = num/10;
    }

    return sum ;

 }
 int main()
 {
    int num;
    cin>>num;

    int sum = googlyPrime(num);
    bool ans = isPrime(sum);

    cout << (ans ? "True" : "False") << endl;

 }
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int product = 1;
    int temp = n; 

    if (n % 2 == 0) { 
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        cout<< sum << endl;
    } 
    
    else { 
        while (temp != 0) {
            int digit = temp % 10;
            product *= digit;
            temp /= 10;
        }
        cout<< product << endl;
    }

    return 0;
}

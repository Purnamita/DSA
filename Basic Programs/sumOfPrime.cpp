#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    cout<< sum << endl;

    return 0;
}

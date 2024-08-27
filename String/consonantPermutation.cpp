#include <iostream>
#include <string>
#include <set>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    string s;
    cout << "ENTER THE STRING: ";
    getline(cin, s);

    string vowels = "aeiouAEIOU";
    int count = 0;

    // to get the consonants in the string
    for (int i = 0; i < s.length(); i++) {
        if (vowels.find(s[i]) == string::npos) {
            count++;
        }
    }

    int ans = factorial(count);
    cout << "Factorial of the number of consonants: " << ans << endl;

    return 0;
}

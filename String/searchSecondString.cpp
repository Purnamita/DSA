#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    int result = -1;

    // Substring search using a for loop with 1-based indexing
    for (int i = 0; i <= str1.length() - str2.length(); ++i) {
        if (str1.substr(i, str2.length()) == str2) {
            result = i + 1;  
            break;
        }
        else{
            return -1;
        }
    }

    cout << result << endl;

    return 0;
}




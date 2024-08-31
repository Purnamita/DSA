#include <iostream>
using namespace std;

int main() {
    int mangoes, persons;
    cin >> mangoes >> persons;

    int ways = 1;
    for (int i = 1; i <= persons - 1; i++) {
        ways *= (mangoes + i);
        ways /= i;
    }

    cout << ways << endl;
    return 0;
}

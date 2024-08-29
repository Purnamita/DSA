#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (n < 2) {
        cout << 0 << endl; // Not enough elements to have a second highest
        return 0;
    }

    int highest = arr[n - 1];
    int secondHighest = -1;

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] < highest) {
            secondHighest = arr[i];
            break;
        }
    }

    if (secondHighest == -1) {
        
        cout << 0 << endl;
        return 0;
    }

    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == secondHighest) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int length;
    cout<< "Enter the size of the array: ";
    cin >> length;
    
    if (length <= 3) {
        cout<< "Output: 0" << endl;
        return 0;
    }

    vector<int> arr(length);
    cout<< "Enter the array elements: ";
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }

    vector<int> evenPositions;
    vector<int> oddPositions;

    for (int i = 0; i < length; ++i) {
        if (i % 2 == 0) {
            evenPositions.push_back(arr[i]);
        } else {
            oddPositions.push_back(arr[i]);
        }
    }

    if (evenPositions.size() < 2 || oddPositions.size() < 2) {
        cout<< "Output: 0" << endl;
        return 0;
    }

    sort(evenPositions.begin(), evenPositions.end());
    sort(oddPositions.begin(), oddPositions.end());

    int secondLargestEven = evenPositions[evenPositions.size() - 2];
    int secondSmallestOdd = oddPositions[1];

    int result = secondLargestEven + secondSmallestOdd;

    cout<< "Output: " << result << std::endl;

    return 0;
}

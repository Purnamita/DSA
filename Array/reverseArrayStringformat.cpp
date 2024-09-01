//RETURN WITH STRING FORMAT

// #include <iostream>
// #include <vector>
// #include <string>
// #include <sstream>

// using namespace std;

// string reverse(vector<int> arr, int n) {  // Change return type to string
//     // Reverse the array

//      // for (int i = 0; i < n / 2; i++) {
//     //     swap(arr[i], arr[n - i - 1]);
//     // }
//     int start = 0;
//     int end = n - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }

//     // Strings to hold even and odd position elements
//     stringstream evenStream, oddStream;

//     // Traverse the reversed array
//     for (int i = 0; i < n; i++) {
//         if ((i + 1) % 2 == 0) {  // Even position (1-based index)
//             evenStream << arr[i] << " ";
//         } else {  // Odd position (1-based index)
//             oddStream << arr[i] << " ";
//         }
//     }

//     // Combine even and odd position strings
//     string evenPos = "Even position elements: " + evenStream.str();
//     string oddPos = "Odd position elements: " + oddStream.str();

//     return evenPos + "\n" + oddPos;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";  // Prompt for array size
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";  // Prompt for array elements
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Call the reverse function and print the result
//     cout << reverse(arr, n) << endl;

//     return 0;
// }





// RETURN WITHOUT STRING FORMAT

#include <iostream>
#include <vector>

using namespace std;

void reverseAndPrint(vector<int>& arr, int n) {  
    // Reverse the array

    // for (int i = 0; i < n / 2; i++) {
    //     swap(arr[i], arr[n - i - 1]);
    // }

    
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    
    cout << "Even position elements: ";
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {  // Even position (1-based index)
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd position elements: ";
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 != 0) {  // Odd position (1-based index)
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";  
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseAndPrint(arr, n);  

    return 0;
}

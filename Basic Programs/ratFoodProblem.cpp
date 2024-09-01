#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, unit, n;
    cout<< "Enter the number of rats (r): ";
    cin >> r;
    cout<< "Enter the amount of food each rat consumes (unit): ";
    cin >> unit;
    cout<< "Enter the number of houses (n): ";
    cin >> n;

    if (n <= 0) {
        cout<< "Output: -1" <<endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the amount of food in each house: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int totalFoodRequired = r * unit;
    int availFood = 0;

    for(int i = 0 ; i < n ; i++)
    {
        availFood += arr[i];
    }

    if(availFood < totalFoodRequired)
    {
        cout<<0;
    }
    else{
        cout<<availFood;
    }


}
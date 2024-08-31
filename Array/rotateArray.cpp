#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<"enter no of position to rotate:";

    k = k % n;

    vector<int> rotated(n);
    for (int i = 0; i < n; ++i) {
        rotated[(i + k) % n] = arr[i];
    }

    cout << "Array after rotation: ";
    for (int i = 0; i < n; ++i) {
        cout << rotated[i] << " ";
    }
    cout << endl;

    return 0;

}

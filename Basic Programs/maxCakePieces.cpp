#include <iostream>
using namespace std;

int main()
{
    int cut;
    cin>>cut;

    int ans ;
    ans = (cut*(cut + 1))/2;
    ans = ans + 1;

    int maxPieces;
    maxPieces = ans % 1000000009;

    cout << maxPieces<<endl;
}
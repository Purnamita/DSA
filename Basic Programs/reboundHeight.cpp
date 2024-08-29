#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int H , V , Vn ;
    cout << "enter H" <<endl;
    cout << "enter V" <<endl;
    cout << "enter Vn" <<endl;
    cin>> H >> V >> Vn ;

    int Hn ;
    int temp;
    temp = (V/Vn)*(V/Vn);

    Hn = H * temp;

    cout << "rebound height " << Hn << endl ;
    return 0 ;
}
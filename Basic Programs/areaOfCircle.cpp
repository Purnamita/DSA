// area of canopy

#include <iostream>

using namespace std;

int main() 
{
    int d;
    cin>>d;
    
    float area=3.14*d*d;
    
    if(area-int(area)<=0.5)
    {
        cout<<int(area);
    }
    else
    {
         cout<<int(area)+1;
    }
    
    return 0;
}
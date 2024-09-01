#include<iostream>

using namespace std;

bool isLeapYear(int year)
{
    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }

}

int main()
{
    int year;
    cin>>year;

    if(isLeapYear(year))
    {
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
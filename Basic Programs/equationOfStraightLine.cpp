#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n;
    cout<<"enter no of points in the plane:";
    cin>>n;

    vector<pair<int,int>>points(n);
    for(int i = 0 ; i < n ; i++)
    {
        int x,y;
        cin>>x>>y;
        points[i] = {x,y};
    }

    if(n == 1){
        cout<<"0"<<endl;
    return 0;
    }

    int dx = points[1].first - points[0].first;
    int dy = points[1].second - points[0].second;

    bool isStraightLine = true;

    for (int i = 2; i < n; ++i) {
        int dx_i = points[i].first - points[0].first;
        int dy_i = points[i].second - points[0].second;
        if (dx * dy_i != dy * dx_i) {
            isStraightLine = false;
            break;
        }
    }
        if (isStraightLine) {
        int a = dy;
        int b = -dx;
        int c = dx * points[0].second - dy * points[0].first;
        
        if (a < 0 || (a == 0 && b < 0)) {
            a = -a;
            b = -b;
            c = -c;
        }

        cout << a << "x";
        if (b >= 0) cout << "+";
        cout << b << "y=" << -c << endl;
    } else {
        cout << "0" << endl;
    }
return 0;


}
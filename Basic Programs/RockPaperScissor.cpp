#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;

    if(s=="rock")
    cout<<"paper";
    else if(s=="paper")
    cout<<"scissor";
    else
    cout<<"rock";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch1, ch2;

    cout << "Enter the string: ";
    cin >> str;

    cout << "Enter the first character to replace: ";
    cin >> ch1;

    cout << "Enter the second character to replace: ";
    cin >> ch2;

    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch1)
        {
            result += ch2;
        }
        else if (str[i] == ch2)
        {
            result += ch1;
        }
        else
        {
            result += str[i];
        }
    }

    cout << "Resulting string: " << result << endl;

    return 0;
}

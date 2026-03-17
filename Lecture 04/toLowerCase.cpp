#include <iostream>
#include <string>
using namespace std;

string toLower(string &s)
{

    cout << "String is " << s.length();

    string str = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            str += s[i] + 32;
        else
            str += s[i];
    }

    cout << "str" << str;

    return str;
}

int main()
{

    string s, str;
    cout << "Enter a string : ";
    cin >> s;

    string result = toLower(s);
    cout << "Lower case string is: " << result;

    return 0;
}
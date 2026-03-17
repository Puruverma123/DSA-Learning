#include <iostream>
#include <string>
using namespace std;

string toUpper(string &str)
{

    string str = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            str += s[i] - 32;
        else
            str += s[i];
    }

    return str;
}
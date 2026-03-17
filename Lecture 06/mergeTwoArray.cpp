#include <iostream>
using namespace std;

bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    // bool flag = true;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            // flag = false;
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main()
{
    cout << checkPalindrome("abba");
    return 0;
}
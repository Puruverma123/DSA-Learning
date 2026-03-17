#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str1 = "123";
    string str2 = "456";
    // string str3 = str1[0] + str2[0];

    string str3 = "hello world";

    reverse(str3.begin(), str3.end());

    cout << str3 << endl;
    return 0;
}
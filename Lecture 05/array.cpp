#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int s = 0;

    // cout<<a[0];
    // cout<<a[1];
    // cout<<a[2];
    // cout<<a[3];
    // cout<<a[4];
    // cout<<a[5];

    int length = sizeof(a) / sizeof(a[0]);

    cout << "Length of array is " << length << endl;
    ;

    for (int i = 0; i < length; i++)
    {
        s += a[i];
    }

    cout << "Sum of array is " << s;
}
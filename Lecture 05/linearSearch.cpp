#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < n; i++)
    {
        if (a[i] == n)
        {
            cout << "Element Found";
            return 0;
        }
    }

    cout << "No element found";

    return 0;
}
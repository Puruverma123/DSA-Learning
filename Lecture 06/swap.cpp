#include <iostream>
using namespace std;

int main()
{

    int a = 5, b = 10;

    cout << "Before Swap: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap(a, b);
    cout << "After Swap: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
}
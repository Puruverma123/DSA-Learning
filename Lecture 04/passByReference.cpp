#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{

    int a, b;
    cout << "Enter value of a :";
    cin >> a;
    cout << "Enter value of b :";
    cin >> b;

    cout << "Number before swapping " << a << " " << b << endl;

    swap(a, b);

    cout << "Number after swapping " << a << " " << b;
}
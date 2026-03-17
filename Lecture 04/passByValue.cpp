#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;

    return a, b;
}

int main()
{

    int a, b;
    cout << "Enter value of a :";
    cin >> a;
    cout << "Enter value of b :";
    cin >> b;

    cout << "Number before swapping " << a << " " << b<<endl;

    int c = swap(a, b);

    cout << "Number after swapping " << a << " " << b;
}
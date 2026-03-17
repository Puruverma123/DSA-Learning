#include <iostream>
using namespace std;

// void print(int n)
// {
//     if (n >= 5)
//     {
//         return;
//     }

//     cout << n << " ";
//     print(n + 1);
// }

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{

    cout << sum(20) << endl;

    return 0;
}
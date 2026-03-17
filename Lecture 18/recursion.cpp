#include <iostream>
using namespace std;

void printHappyBirthday(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << "Happy Birthday " << n << endl;

    printHappyBirthday(n - 1);
}

int main()
{

    // for (int i = 0; i < 30; i++)
    // {
    //     cout << "Happy Birthday " << i + 1 << endl;
    // }

    printHappyBirthday(30);

    return 0;
}
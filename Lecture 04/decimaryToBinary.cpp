#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int reverseNumber(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n, rem, ans = 0, final;

    cout << "Enter a number : ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 2;
        ans = ans * 10 + rem;
        n = n / 2;
    }

    final = reverseNumber(ans);

    cout << "Binary is " << final;

    return 0;
}

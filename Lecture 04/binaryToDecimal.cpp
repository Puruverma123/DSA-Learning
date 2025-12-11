#include <iostream>
using namespace std;

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
    int n, rem, ans = 0, final, i = 1, s = 0;

    cout << "Enter a number : ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        ans = ans * 10 + (rem + (2 * i));
        s += ans;
        cout << ans << endl;
        n = n / 10;
        i++;
    }

    cout << "Binary is " << ans;
    cout << "Binary is " << s;

    return 0;
}

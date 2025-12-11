#include <iostream>
using namespace std;

// Function prototype or Function Decalration
// void print(string str);

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

int main()
{
    int number;

    cout << "Enter a number : ";
    cin >> number;

    if (isPrime(number))
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }

    return 0;
}
// void print(string str)
// {
//     cout << "I am a function " << str;
// }
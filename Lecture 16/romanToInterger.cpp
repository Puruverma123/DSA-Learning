#include <iostream>
#include <string>
#include <vector>

using namespace std;

int num(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int romnanToInteger(string str)
{

    int sum = 0;

    int index = 0;

    while (index < str.length() - 1)
    {
        if (num(str[index]) < num(str[index + 1]))
        {
            sum -= num(str[index]);
        }
        else
        {
            sum += num(str[index]);
        }

        index++;
    }

    sum += num(str[str.length() - 1]);

    return sum;
}

int main()
{
    string str = "MCMXCIV"; // Example Roman numeral

    int sum = romnanToInteger(str);

    cout << "Sum is " << sum;

    return 0;
}
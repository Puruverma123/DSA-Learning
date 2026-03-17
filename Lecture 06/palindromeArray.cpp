#include <iostream>
using namespace std;

bool checkPalindromeArray(int arr[], int size)
{

    int i = 0;
    int j = size - 1;

    bool flag = false;

    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            flag = true;
        }
        i++;
        j--;
    }

    return flag;
}

int main()
{
   int arr[] = {1, 2, 3, 2, 1};

    if (checkPalindromeArray(arr, 5))
    {
        cout << "Array is palindrome";
    }
    else
    {
        cout << "Array is not palindrome";
    }
}
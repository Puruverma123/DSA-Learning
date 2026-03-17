#include <iostream>
using namespace std;

int arraySum(int arr[], int start, int end)
{

    int sum = 0;

    if (start == end)
    {
        return sum;
    }

    cout << arr[start];

    sum += arr[start];

    arraySum(arr, start + 1, end);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 6};

    cout << arraySum(arr, 0, 7);

    return 0;
}
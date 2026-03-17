#include <iostream>
using namespace std;

void printSum(int arr[], int index, int size)
{

    if (index == size)
    {
        return;
    }

    cout << arr[index] << " ";

    printSum(arr, index + 1, size);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 6};

    printSum(arr, 0, 7);

    return 0;
}
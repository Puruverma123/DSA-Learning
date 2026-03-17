#include <iostream>
using namespace std;

void reversePrint(int arr[], int end)
{

    if (end == -1)
    {
        return;
    }

    cout << arr[end] << " ";

    reversePrint(arr, end - 1);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 6};

    reversePrint(arr, 6);

    return 0;
}
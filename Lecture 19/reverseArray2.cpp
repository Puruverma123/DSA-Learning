#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start == end)
    {
        return;
    }

    reverseArray(arr, start + 1, end);
    cout << arr[start] << " ";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 6};
            //   0  1  2  3  4  5  6

    reverseArray(arr, 0, 7);

    return 0;
}
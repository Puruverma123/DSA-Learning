#include <iostream>
using namespace std;

void reverseArray(int arr[], int index)
{
    if (index == -1)
    {
        return;
    }

    reverseArray(arr, index - 1);
    cout << arr[index] << " ";

}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 6};
    reverseArray(arr, 6);

    return 0;
}
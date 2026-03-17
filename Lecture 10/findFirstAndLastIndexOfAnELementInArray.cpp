#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 3, 3, 3, 4, 5};
    int target = 3;
    int beg = 0;
    int end = 7;

    int index1 = -1;

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (target == arr[mid])
        {
            end = mid - 1;
            index1 = mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    cout << "First index is " << index1;

    int index2 = -1;
    beg = 0, end = 7;

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (target == arr[mid])
        {
            index2 = mid;
            beg = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    cout << "Second index is " << index2;
}
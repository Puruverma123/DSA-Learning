#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-17, 23, -31, 47, -53, 61, -71, 83};

    int i = 0, j = 7;

    while (i < j)
    {
        // if (arr[i] < 0 && arr[j]>0)
        // {
        //     swap(arr[i], arr[j]);
        //     i++, j--;
        // }
        // else if (arr[i] > 0 && arr[j] < 0)
        // {
        //     i++; j--;
        // }
        // else if (arr[i] < 0 && arr[j] < 0)
        // {
        //     j--;
        // }
        // else
        // {
        //     i++, j--;
        // }

        if (arr[0] > 0 && arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        i++;
        j--;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
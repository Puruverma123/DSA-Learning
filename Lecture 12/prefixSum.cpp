#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();

    // Print all subarrays of the given array

    // 1
    // 2
    // 3
    // 4
    // 5
    // 1 2
    // 3 4
    // 4 5
    // 1 2 3
    // 3 4 5
    // 1 2 3 4
    // 2 3 4 5
    // 1 2 3 4 5

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << arr[j] << " ";

    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k]<<" ";
            }
            cout << endl;
        }
    }

    return 0;
}
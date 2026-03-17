#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // vector<int> arr = {-3, -5, 7, 11};
    vector<int> arr = {1,2,3,4,5};


    for (int i = 0; i < arr.size()-1; i++)
    {
        cout << arr[i] << " ";
    }
    




    // int target = 15;

    // sort(arr.begin(), arr.end());

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int start = 0;
    // int end = arr.size() - 1;

    // while (start <= end)
    // {
        
    //     if (arr[start] * arr[end] == target)
    //     {
    //         return true;
    //     }
    //     else if (arr[start] * arr[end] < target)
    //     {
    //         start++;
    //     }
    //     else
    //     {
    //         end--;
    //     }
    // }

    return 0;
}

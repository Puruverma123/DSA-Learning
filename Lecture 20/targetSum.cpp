#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int index, int n, int target)
{

    if (target == 0)
    {
        return true;
    }

    if (index == n || target < 0)
    {
        return false;
    }

    return isValid(arr, index + 1, n, target - arr[index]) || isValid(arr, index + 1, n, target);
}

int main()
{

    vector<int> arr = {3, 6, 4, 5};

    int target = 21;

    if (isValid(arr, 0, arr.size(), target))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
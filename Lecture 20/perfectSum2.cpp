#include <iostream>
#include <vector>
using namespace std;

int findSubsets(vector<int> arr, int index, int sum, int n)
{
    if (index == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    return findSubsets(arr, index + 1, sum - arr[index], n) + findSubsets(arr, index + 1, sum, n);
}

int main()
{
    vector<int> arr = {5, 2, 3, 6, 10, 8};

    int target = 10;

    cout << findSubsets(arr, 0, target, arr.size()) << " ";

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 2, 1, 0, 6, 4, 0, 3, 2};
    int n = arr.size();

    // Time complexity is n * n * n
    // Space complexity is n^2
    // Total 3 pass required

    vector<int> leftMax(n, 0);  // prefixMax
    vector<int> rightMax(n, 0); // suffixMax

    leftMax[0] = arr[0], rightMax[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(arr[i], leftMax[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(arr[i], rightMax[i + 1]);
    }

    int totalWater = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int minLeftOrRight = min(leftMax[i - 1], rightMax[i + 1]);

        if (minLeftOrRight > arr[i])
        {
            totalWater += minLeftOrRight - arr[i];
        }
    }

    cout << "Total Water is " << totalWater;
}

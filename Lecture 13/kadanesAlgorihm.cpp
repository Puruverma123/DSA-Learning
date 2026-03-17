#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{

    // Brute Force Approach O(n^2)

    // vector<int> arr = {5, 4, 1, 7, 8};
    // int n = arr.size();
    // int ans = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //     }

    //     if (sum > ans)
    //     {
    //         ans = sum;
    //     }
    //     cout << "Sum is " << sum << endl;
    //     ;
    // }

    // cout << "Ans is " << ans; endl;


    // Optimized Approach O(n) Kadane's Algorithm

    vector<int> arr = {5, 4, 1, 7, 8};
    int n = arr.size();

    int maxSum = INT_MIN;

    int subSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (subSum < 0)
        {
            subSum = arr[i];
        }
        else
        {
            subSum += arr[i];
        }

        maxSum = max(maxSum, subSum);
    }

    return maxSum;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int subsetSum(vector<int> arr, int index, int n, int sum)
{
    if (sum == 0)
    {
        return 1;
    }

    if (sum < 0)
    {
        return 0;
    }

    if (index == n)
    {
        return 0;
    }

    return subsetSum(arr, index, n, sum - arr[index]) + subsetSum(arr, index + 1, n, sum);
}

int main()
{

    vector<int> arr = {2, 3, 4,0};

    int sum = 6;

    int result = subsetSum(arr, 0, arr.size(), sum);

    cout << result << " ";

    return 0;
    ;
};

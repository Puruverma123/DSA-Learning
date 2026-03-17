#include <iostream>
#include <vector>

using namespace std;

void calculateCount(vector<int> arr, int index, int n, int &count, int target, int sum)
{

    if (sum == target)
    {
        count++;
        return;
    }

    if (index == n)
    {
        return;
    }

    // include
    calculateCount(arr, index + 1, n, count, target, sum + arr[index]);
    calculateCount(arr, index + 1, n, count, target, sum);
}

int main()
{

    vector<int> arr = {5, 2, 3, 6, 10, 8};

    int count = 0;
    int target = 10;

    calculateCount(arr, 0, arr.size(), count, target, 0);

    cout << count << " ";

    return 0;
}
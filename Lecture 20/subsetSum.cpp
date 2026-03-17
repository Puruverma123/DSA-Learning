#include <iostream>
#include <vector>
using namespace std;

void subsetSum(vector<int> arr, int index, int n, int sum, vector<int> &temp)
{

    if (index == n)
    {
        temp.push_back(sum);
        return;
    }

    subsetSum(arr, index + 1, n, sum + arr[index], temp);
    subsetSum(arr, index + 1, n, sum, temp);
}

int main()
{

    vector<int> arr = {3, 4, 5};
    int sum = 0;

    vector<int> temp;

    subsetSum(arr, 0, arr.size(), sum, temp);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
    ;
}

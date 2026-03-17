#include <iostream>
#include <vector>
using namespace std;

void subSeq(vector<int> arr, int index, int size, vector<vector<int>> &ans, vector<int> temp)
{

    if (index == arr.size())
    {
        ans.push_back(temp);
        return;
    }

    // exclude
    subSeq(arr, index + 1, size, ans, temp);
    // include
    temp.push_back(arr[index]);
    subSeq(arr, index + 1, size, ans, temp);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subSeq(arr, 0, arr.size(), ans, temp);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
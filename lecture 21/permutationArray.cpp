#include <iostream>
#include <vector>

using namespace std;

void permutation(vector<int> arr, vector<vector<int>> &res, vector<int> &temp, vector<bool> &visited)
{
    if (temp.size() == arr.size())
    {
        res.push_back(temp);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permutation(arr, res, temp, visited);
            temp.pop_back();
            visited[i] = 0;
        }
    }
}

int main()
{

    vector<int> arr = {1, 2, 3};
    vector<vector<int>> res;
    vector<int> temp;
    vector<bool> visited(arr.size(), 0);

    permutation(arr, res, temp, visited);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
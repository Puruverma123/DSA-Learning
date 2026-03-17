#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    vector<int> ans;

    int rowStart = 0, rowEnd = 5;
    int colStart = 0, colEnd = 5;

    for (int i = colStart; i < colEnd; i++)
    {
        ans.push_back(arr[rowStart][i]);
        cout << arr[rowStart][i] << " ";
    }
    rowStart++; //1
    for (int i = rowStart; i < rowEnd; i++)
    {
        ans.push_back(arr[i][colEnd]);
        cout << arr[i][colEnd] << " ";
    }

    return 0;
}
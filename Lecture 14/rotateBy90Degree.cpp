#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int matrix[2][2] = {{1, 2}, {3, 4}};

    vector<int> ans;

    int row = 2, col = 2;
    // int colStart = 0, colEnd = 2;

    // Transpose of a matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int rowStart = 0, rowEnd = 1;
    

    while (rowStart < rowEnd)
    {
        for (int i = 0; i < row; i++)
        {
            swap(matrix[i][rowStart], matrix[i][rowEnd]);
        }
        rowStart++, rowEnd--;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
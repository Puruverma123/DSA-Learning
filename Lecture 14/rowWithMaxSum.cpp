#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int maxSum = 0;
    int index = -1;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            index = i;
        }
    }

    cout << "Max sum is" << maxSum << " " << "index is" << index;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int **arr = new int *[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[5];
    }

    // Assigning values to the 2D array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = i + j;
        }
    }

    // Printing the 2D array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
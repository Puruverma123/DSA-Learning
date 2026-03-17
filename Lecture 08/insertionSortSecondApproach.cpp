#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {90, 70, 50, 30, 20, 5};

    int n = arr.size();

    cout << "Before Swap " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
                break;
        }
    }
    cout << endl;
    cout << "After Swap " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
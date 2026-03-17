// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {4, 2, 1, 0, 6, 4, 0, 3, 2};

    int n = arr.size();

    vector<int> result(n);

    result[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        result[i] = max(arr[i], result[i + 1]);
    }

    cout << "Suffix Maximum Array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {4, 2, 1, 0, 6, 4, 0, 3, 4};

    int n = arr.size();

    vector<int> result(n);

    result[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        result[i] = max(arr[i], result[i - 1]);
    }

    cout << "Prefix Maximum Array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
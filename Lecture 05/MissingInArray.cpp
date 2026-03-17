#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int>arr[5] = {1, 2, 3, 4, 5};
    vector<int> arr = {1, 2, 3, 5};

    int n = arr.size();
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }

    for (int i = 1; i <= n + 1; i++)
    {
        sum2 += i;
    }

    cout << "Sum 1 is: " << sum1 << endl;
    cout << "Sum 2 is: " << sum2 << endl;
}
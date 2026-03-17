#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};
    int sum1 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum1 += arr[i];
    }

    int sum2 = 0;

    for (int i = 1; i <= arr.size(); i++)
    {
        sum2 += i;
    }

    cout << "Sum is " << sum1 << " " << sum2;

    if (sum1 == sum2)
    {
        return sum1;
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4};
    int size = arr.size();
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size; j++)
        {

            if (i == j)
            {
                continue;
            }
            else if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            sum += arr[i];
        }
    }

    cout << "Sum of unique elements is: " << sum << endl;
}
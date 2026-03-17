#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> nums = {4, 9, 18, 27, 31};
    int target = 31;

    int n = nums.size();

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == target)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}
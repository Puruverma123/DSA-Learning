#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 9, 18, 27, 31};

    int target = 35;

    cout << "Length of nums: " << nums.size() << endl;
    cout << "Nums elements: " << nums[nums.size()] << endl;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}
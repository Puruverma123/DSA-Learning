#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> nums = {2, 7, 11, 15};
    vector<int> nums = {3, 2, 4};
    vector<int> ans;
    int target = 9;

    int i = 0;
    int j = nums.size() - 1;

    while (i <= j)
    {
        if (nums[i] + nums[j] == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if (nums[i] + nums[j] >= target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "size" << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
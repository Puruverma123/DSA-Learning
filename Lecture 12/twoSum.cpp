#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans;
    int target = 9;

    int i = 0;
    int j = nums.size() - 1;

    while (i <= j)
    {
        if (nums[i] + nums[j] == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
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
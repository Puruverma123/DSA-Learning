#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Single Pass Approach O(n)

    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = arr.size();

    int leftMax = 0, rightMax = 0;
    int left = 0, right = n - 1;

    int tappedWater = 0;

    while (left < right)
    {
        if (arr[left] < arr[right])
        {

            if (arr[leftMax] > arr[left])
            {
                tappedWater += arr[leftMax] - arr[left];
            }
            else
            {
                leftMax = arr[left];
            }

            left++;
        }
        else if (arr[left] > arr[right])
        {

            if (arr[rightMax] > arr[right])
            {
                tappedWater += arr[rightMax] - arr[right];
            }
            else
            {
                rightMax = arr[right];
            }

            right--;
        }
    }
    
    
    cout << "Tapped Water till now is " << tappedWater << endl;



    return 0;
}
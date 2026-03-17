#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {4, 5, 6, 1, 2, 3};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = end + (start - end) / 2;

        // Left portion, move to right side

        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
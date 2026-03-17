#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = arr.size();
    int key = 0;
    int beg = 0;
    int end = n - 1;
    bool flag = false;
    int index = -1;
    int count = 0;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (arr[mid] == key)
        {
            flag = true;
            index = mid;
            count++;
            // break;
        }
        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }

    cout << index << endl;
    cout << "Count is " << count << endl;

    if (flag)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
                    //    0, 1, 2, 3, 4, 5
    int target = 10;
    int i = 0;
    int j = arr.size() - 1;

    cout<<j;
    while (i < j)
    {
        if ((arr[i] + arr[j]) == target)
        {
            break;
        }
        i++;
        j--;
    }
    cout << "i " << i << endl
         << "j " << j;
    return 0;
}
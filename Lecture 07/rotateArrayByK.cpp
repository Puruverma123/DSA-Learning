#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int size = arr.size();

    vector<int> new_arr(size);

    int k = 3;

    for (int i = 0; i < size; i++)
    {
        arr[(i + k) % k] = arr[i];
    }

    // for (int i = 0; i < size; i++)
    // {
    //     ne
    // }
}
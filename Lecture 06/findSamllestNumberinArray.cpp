#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 23, 4, 45, 6};

    int size = arr.size();

    // cout<<"Size of an array is "<<arr[size-1];

    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }


    cout<<"Smallest number is "<<smallest;
}
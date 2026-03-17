#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {5, 2, 3, 10};

    int size = arr.size();

    // cout<<"Size of an array is "<<arr[size-1];
    // int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }

    // cout << "Smallest number is " << arr;
}
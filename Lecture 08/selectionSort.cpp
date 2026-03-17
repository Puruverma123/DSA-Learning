#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {10, 1, 3, 9, 5};

    int size = arr.size();

    // cout<<"Size of an array is "<<arr[size-1];
    // int smallest = arr[0];

    for (int j = 0; j < size; j++)
    {
        int index = j;

        for (int i = j; i < size; i++)
        {

            if (arr[i] < arr[index])
            {
                // smallest = arr[i];
                index = i;
            }
        }
        swap(arr[index], arr[j]);
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }

    // cout << "Smallest number is " << arr;
}
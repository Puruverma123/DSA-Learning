#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {12,35,1,10,34,1};

    int largest = arr[0];
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest Element is " << largest << endl;

    int second_largest = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == largest)
        {
            continue;
        }
        else if (arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }

    cout << "Second Largest Element is " << second_largest;
}
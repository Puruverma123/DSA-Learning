#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 5};

    arr.push_back(4); // Increase size of vector by 1
    arr.push_back(6);

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    arr.pop_back(); // Decrease size of vector by 1

    n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
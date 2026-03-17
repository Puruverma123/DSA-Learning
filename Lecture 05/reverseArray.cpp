#include<iostream>
#include<vector>
using namespace std;


int main()
{
    // vector<int>arr[5] = {1, 2, 3, 4, 5};
    vector<int>arr = {1, 2, 3, 4, 5};

    int n = arr.size();


    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    

}
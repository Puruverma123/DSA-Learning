#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{

    stack<int> s;
    int arr[] = {10, 20, 30, 40, 50};

    // Push array elements in stack
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }

    // move stack element into the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    // print all the elements
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
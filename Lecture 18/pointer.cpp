#include <iostream>
#include <vector>
using namespace std;

int sum(int *ptr, int n) // int sum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

    return sum;
}

int main()
{

    int a = 10;

    // int address = &a;

    // cout << "a  " << a << endl;

    // int *ptr = &a;
    // cout << "ptr  " << ptr << endl;
    // cout << "*ptr  " << *ptr << endl;
    // cout << "address of ptr " << &ptr << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr + i << " " << *(arr + i) << endl;
    // }

    // cout << "Sum is " << sum(arr, 5);

    // char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ch + i << " " << *(ch + i) << endl;
    // }

    int *ptr = new int[5]; // dynamic array

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Prirnt address " << ptr + i << " value " << *(ptr + i) << endl;
    }

    delete[] ptr; // Freeing the dynamically allocated memory

    return 0;
}
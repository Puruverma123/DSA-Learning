#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int s = 0;
    int largest = a[0];
    int secondLargest = a[1];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
            if (a[i] > largest)
            {
                secondLargest = largest;
            }
        }
    }

    cout << "Largest element in array " << largest << endl;
    cout << "Second Largest element in array " << secondLargest << endl;
}
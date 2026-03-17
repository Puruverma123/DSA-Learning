#include <iostream>
using namespace std;

int main()
{
    // print some numbers
    // for (int i = 1; i <= 27; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // compare ASCII value behind the scenes
    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // infinite loop
    // for ( ;;)
    // {
    //     cout<<"Hello world";
    // }

    // Sum of first 10 number
    // int sum;
    // for (int i = 0; i <= 10; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum is " << sum;

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }

    // print 10 to 1
    // for (int i = 10; i > 0; i--)
    // {
    //     cout<<i <<" ";
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 1;
}
#include <iostream>
using namespace std;

int sqrt(int x)
{

    int beg = 0;
    int end = x - 1;

    int answer = 1;

    int mid;
    while (beg <= end)
    {
        mid = beg + (end - beg) / 2;

        cout << "mid is " << mid << endl;

        if (mid * mid == x)
        {
            answer = mid;
            return answer;
        }
        else if (mid > x)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // cout << "mid is " << mid << endl;

    return answer;
}

int main()
{

    int ans = sqrt(36);
    cout << "Square root " << ans;
}
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int mid, int k)
{
    int student_count = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            student_count++;
            if (student_count > k || arr[i] > mid;)
            {
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];
        }
    }

    return true;
}

int main()
{
    int start = 0;
    int sum = 0;
    int k = 2;

    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;

    int answer = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, n, mid, k))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return answer;

    // cout << "Sum is " << sum;
}
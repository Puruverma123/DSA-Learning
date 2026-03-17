#include <iostream>
#include <vector>
#include <climits> // <-- ye add karo
using namespace std;

int main()
{

    vector<int> arr = {3, 2, 1, 5, 7, 8};

    int n = arr.size();

    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }


    int leftSum = 0;
    int rightSum;
    vector<int> ans(3);

    ans[0] = INT_MAX; // <-- ye add karo

    for (int i = 0; i < n - 1; i++)
    {
       leftSum += arr[i];
       rightSum = totalSum - leftSum;

         int diff = abs(leftSum - rightSum);
         
    }
    

    return 0;
}
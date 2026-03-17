#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "aaAAAaaBBbb";
                //   AaaB A BaaA 
    // "ABaabbaaAB"

    vector<int> freq(256, 0);

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++; // ye auto convert kar dega char to int
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    int ans = 0;
    bool odd = false;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] % 2)
        {
            ans += freq[i] - 1;
            odd = true;
        }
        else
        {
            ans += freq[i];
        }
    }

    if (odd)
    {
        ans += 1;
    }

    cout << "Answer " << ans;

    return 0;
}
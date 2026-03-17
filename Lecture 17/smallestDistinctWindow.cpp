#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string str = "aabcbcdbca";

    int start = 0, end = 0;

    vector<int> freq(256, 0);

    int diff = 0, len = str.length();

    while (start < str.length())
    {
        if (freq[str[start]] == 0)
        {
            freq[str[start]]++;
            diff++;
        }
        else
        {
            freq[str[start]]++;
        }
        start++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i) << " occurs " << freq[i] << " times" << endl;
        }
    }

    // reset frequency array
    // freq = vector<int>(256, 0);
    for (int i = 0; i < 256; i++)
    {
        freq[i] = 0;
    }
    start = 0;

    while (end < str.size())
    {

        // diff exist krta h
        while (diff && end < str.size()) // end < str.size() is important to avoid overflow
        {
            if (freq[str[end]] == 0)
            {
                diff--;
            }
            freq[str[end]]++;
            end++;
        }

        len = min(len, end - start);

        // diff ki value 1 naa ban jaaye

        while (diff != 1)
        {
            len = min(len, end - start);
            freq[str[start]]--;
            if (freq[str[start]] == 0)
            {
                diff++;
            }
            start++;
        }
    }


    // return len

    return 0;
}
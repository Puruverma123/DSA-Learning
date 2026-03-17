#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1 = "coderarmystrike is the best army in the world";
    string s2 = "strike";
    int prefix = 0, suffix = 1;
    vector<int> lps(s2.length(), 0);

    while (suffix < s2.length())
    {
        if (s2[prefix] == s2[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++;
            suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }

    for (int i = 0; i < lps.size(); i++)
    {
        cout << lps[i] << " ";
    }

    // string s3 = s2 + s1;

    // cout << s3 << endl;

    return 0;
}
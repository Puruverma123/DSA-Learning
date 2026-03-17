#include <iostream>
#include <string>
#include <vector>

using namespace std;

void findLPS(vector<int> &lps, string s)
{

    int prefix = 0, suffix = 1;

    while (suffix < s.size())
    {
        if (s[prefix] == s[suffix])
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
}

int main()
{
    string s = "cdeabroab";
    string s2 = "abcde";

    // if (s.size() != s2.size())
    // {
    //     cout << "Not rotation";
    //     return 0;
    // }
    int s1 = s.size();

    string temp = s + s;

    vector<int> lps(s2.size(), 0);
    findLPS(lps, s2);

    for (int i = 0; i < lps.size(); i++)
    {
        cout << lps[i] << " ";
    }
    int first = 0, second = 0;

    cout << "Temp string " << temp << endl;

    while (first < temp.size() && second < s2.size())
    {
        if (temp[first] == temp[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
        if (second == s2.size())
        {
            cout << "Rotation found";
            return 0;
        }
    }

    cout << "Not rotation";

    return 0;
}

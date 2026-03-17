#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subseq(string str, int index, int size, vector<string> &ans, string temp)
{

    if (index == str.size())
    {
        ans.push_back(temp);
        return;
    }

    // exclude
    subseq(str, index + 1, size, ans, temp);
    // include
    temp.push_back(str[index]);
    subseq(str, index + 1, size, ans, temp);
    temp.pop_back();
}

int main()
{
    string str = "abc";
    vector<string> ans;
    string temp;

    subseq(str, 0, str.size(), ans, temp);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    cout << endl;
}
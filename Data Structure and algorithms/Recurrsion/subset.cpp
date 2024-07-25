#include <bits/stdc++.h>
using namespace std;

void generateSubset(string s, string curr, int i)
{
    if (i == s.size())
    {
        cout << curr << " ";
        return;
    }
    generateSubset(s, curr, i + 1);
    generateSubset(s, curr + s[i], i + 1);
}

int main()
{
    string s;
    cin >> s;
    string curr = "";
    generateSubset(s, curr, 0);
    return 0;
}
#include <algorithm>
#include <bits/stdc++.h>
const int N = 256;
using namespace std;
int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // for (int i = 0; i < n; i++)
    // {
    //     if (s1[i] != s2[i])
    //     {
    //         cout << s2[i] << endl;
    //         return 0;
    //     }
    // }
    // cout << s2[n] << endl;
    // *********************using xor operator **********************
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ s1[i] ^ s2[i];
    }
    res = res ^ s2[n];
    cout << char(res) << endl;

    return 0;
}
// DATE: 13-01-2024
// TIME: 13-13-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    string s;
    cin >> s;
    // int x = stoi(s);
    int sum = 0;
    // -------------don't use when given a string ---------------------
    // while (x != 0)
    // {
    //     int r = x % 10;
    //     sum = sum + r;
    //     x /= 10;
    // }
    // cout << sum;
    // return;
    // ------------------------------------
    for (auto &x : s)
    {
        int digit = x - '0';
        sum = sum + digit;
    }
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

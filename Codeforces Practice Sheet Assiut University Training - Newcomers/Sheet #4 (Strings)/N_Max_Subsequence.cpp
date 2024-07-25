// DATE: 14-01-2024
// TIME: 21-22-36
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ct = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            ct++;
        }
    }
    cout<<ct;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

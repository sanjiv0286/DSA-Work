// DATE: 14-01-2024
// TIME: 05-14-47
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
    string s, t;
    cin >> s >> t;
    int n = max(s.size(), t.size());
    for (int i = 0; i < n; i++)
    {
        if (i < s.size())
            cout << s[i];
        if (i < t.size())
            cout << t[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

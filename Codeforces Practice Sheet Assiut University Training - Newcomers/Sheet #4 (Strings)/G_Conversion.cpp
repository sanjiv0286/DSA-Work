// DATE: 13-01-2024
// TIME: 13-41-58
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
    for (auto &x : s)
    {
        if (x == ',')
        {
            cout << " ";
        }
        else if (isupper(x))
        {
            cout << char(x + 32);
        }
        else if (islower(x))
        {
            cout << char(x - 32);
        }
    }
    // cout<<s; 
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

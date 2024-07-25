// DATE: 13-01-2024
// TIME: 12-31-31
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
    int n = min({s.size(), t.size()});
    ll x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < t[i])
        {
            cout << s;
            return;
        }
        else if (s[i] > t[i])
        {
            cout << t;
            return;
        }
        else if (s[i] == t[i])
        {
            x++;
        }
    }
     if(s.size()<t.size()){
        cout<< s;
        return;
     }
     else{
        cout<< t;
        return;
     }
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

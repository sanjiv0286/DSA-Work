// DATE: 17-01-2024
// TIME: 01-09-53
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
    int n = s.size();
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            j = i + 1;
            break;
        }
    }
    for (int i = j; i < n; i++)
    {
        if (s[i] == '=')
        {
            // s[i]=':';
            // s.erase(i, 1);
            cout << ": ";
        }
        else if (s[i] == '&')
        {
            // s[i] ='';
            // s.erase(i, 1);
            cout << endl;
        }
        else
            cout << s[i];
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

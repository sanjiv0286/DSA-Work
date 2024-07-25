// DATE: 17-01-2024
// TIME: 01-36-21
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
    vector<string> v;
    int n = s.size();
    int cl = 0, cr = 0;
    string str = "";
    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'L')
            cl++;
        else
            // (s[i] == 'R')
            cr++;
        if (cl == cr)
        {
            v.push_back(str);
            str = "";
        }

        str += s[i];
    }
    cout << v.size() << endl;
    for (auto &x : v)
    {
        cout << x << endl;
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

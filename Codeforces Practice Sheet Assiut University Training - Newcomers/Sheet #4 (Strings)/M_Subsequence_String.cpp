// DATE: 14-01-2024
// TIME: 22-13-55
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n && i < t.size(); i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    string s;
    cin >> s;
    string t = "hello";
    int j, i = 0;
    for (int i = 0; i < s.size(); i++)
    // while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            // i++;
            j++;
        }
        // else
        // {
        //     i++;
        // }
    }
    if (j == t.size())
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
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


// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// DATE: 14-01-2024
// TIME: 22-13-55
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n && i < t.size(); i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    string s;
    cin >> s;
    string t = "hello";
    int j, i = 0;
    // for (int i = 0; i < s.size(); i++)
    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == t.size())
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
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

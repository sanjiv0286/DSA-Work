// // DATE: 15-01-2024
// // TIME: 11-14-48
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// void solve()
// {
// string s;
// cin >> s;
//     map<char, int> m;
//     for (int i = 0; i < s.size(); i++)
//     {
//         m[s[i]]++;
//     }
//     int mini=INT_MAX;
//     for (auto &x : m)
//     {
//         if (x.first == 'E' || x.first == 'e' || x.first == 'G' || x.first == 'g' || x.first == 'P' || x.first == 'p' || x.first == 'T' || x.first == 't' || x.first == 'Y' || x.first == 'y'){
//            mini = min(mini,x.second);
//         }
//     }
//     cout<<mini;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
// *********************************************

// DATE: 15-01-2024
// TIME: 11-28-49
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
    int e = 0, g = 0, p = 0, t = 0, y = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
        {
            e++;
        }
        else if (s[i] == 'G' || s[i] == 'g')
        {
            g++;
        }
        else if (s[i] == 'Y' || s[i] == 'y')
        {
            y++;
        }
        else if (s[i] == 'P' || s[i] == 'p')
        {
            p++;
        }
        else if (s[i] == 'T' || s[i] == 't')
        {
            t++;
        }
    }
    int res = min({e, g, p, t, y});
    cout << res << endl;
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

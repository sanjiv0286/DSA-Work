// DATE: 16-01-2024
// TIME: 19-15-56
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
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        v.push_back(x);
    }
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 'V')
        {
            score += 5;
        }
        else if (v[i] == 'W')
        {
            score += 2;
        }
        else if (v[i] == 'X')
        {
            if (i != v.size() - 1)
            {
                v[i + 1] = '0';
            }
        }
        else if (v[i] == 'Y')
        {
            if (i != v.size() - 1)
            {
                v.push_back(v[i + 1]);
                v[i + 1] = '0';
            }
        }
        else if (v[i] == 'Z')
        {
            if (i != v.size() - 1)
            {
                if (v[i + 1] == 'W')
                {
                    score /= 2;
                    v[i + 1] = '0'; // 48
                }
                else if (v[i + 1] == 'V')
                {
                    score /= 5;
                    v[i + 1] = '0'; // 48
                }
            }
        }
    }
    cout << score;
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

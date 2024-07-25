// *PARTIALLY ACCEPTED

// DATE: 01-06-2023
// TIME: 17-01-38
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

// const ll N = 1e5 + 10;
const double PI = 3.14;
// extern ll x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        int n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        ll ans = 0;
        // cout << s;
        forn(i, n)
        {
            if (s[i] == '1')
            {
                ans = ans + pow(2, i) * 1;
            }
            else
            {
                ans = ans + 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
// ========================================================

// * ACCEPTED

// DATE: 01-06-2023
// TIME: 17-01-38
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

// const ll N = 1e5 + 10;
const double PI = 3.14;
// extern ll x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        int n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        ll ans = 0;
        // cout << s;
        ll x = 1;
        forn(i, n)
        {
            int bd = s[i] - '0';
            ans = ans + x * bd;
            x *= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
// **********************************************************
// * ACCEPTED

// DATE: 01-06-2023
// TIME: 17-01-38
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

// const ll N = 1e5 + 10;
const double PI = 3.14;
// extern ll x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        int n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        ll ans = 0;
        // cout << s;
        forn(i, n)
        {
            ll x = pow(2, i);
            if (s[i] == '1')
            {
                ans = ans + x * 1;
            }
            else
            {
                ans = ans + 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
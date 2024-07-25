// DATE: 01-06-2023
// TIME: 22-01-38
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> v;

    for (ll i = 1;;)
    {
        if (i % a == 0 || i % b == 0 )
        {
            while (c--)
            {
                v.push_back(i);
            }
        }
    }
    for (ll i = 1;;)
    {
        cout << v[i] << " ";
    }

    return 0;
}

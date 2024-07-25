// *************** TLE ******************************

#include <iostream>

using namespace std;

typedef long long ll;

ll calculateSum(ll n)
{
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        sum += (n % i);
    }
    return sum;
}

ll findDemandedSum(ll L, ll R)
{
    ll sum = 0;
    for (ll n = L; n <= R; n++)
    {
        ll fn = calculateSum(n);
        ll fnMinus1 = calculateSum(n - 1);
        if (fn == fnMinus1)
        {
            sum += n;
        }
    }
    return sum;
}

int main()
{
    ll L, R;
    cin >> L >> R;

    ll demandedSum = findDemandedSum(L, R);
    cout << demandedSum << endl;

    return 0;
}

// *************** TLE ******************************

// DATE: 30-05-2023
// TIME: 20-22-08
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

ll calculatedsum(ll n)
{
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        sum += (n % i);
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll l, r;
    cin >> l >> r;
    ll sum = 0;
    for (ll n = l; n <= r; n++)
    {
        ll fn = calculatedsum(n);
        ll fnminus1 = calculatedsum(n - 1);
        if (fn == fnminus1)
        {
            sum += n;
        }
    }
    cout << sum << endl;

    return 0;
}

// *imp practice problem

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll l, r;
    cin >> l >> r;
    r--;
    l--;
    ll ans = 0;
    if (r > 0)
    {
        ll n = log2(r);
        n++;
        ans = 1;
        while (n--)
        {
            ans *= (ll)2;
        }
        ans--;
    }
    if (l > 0)
    {
        ll n = log2(l);
        n++;
        ll a = 1;
        while (n--)
        {
            a *= (ll)2;
        }
        a--;
        ans -= a;
    }
    cout << ans << endl;
}

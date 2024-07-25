// DATE: 22-05-2023
// TIME: 13-35-37
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

    int t;
    cin >> t;
    while (t--)
    {
        multiset<ll> bags;
        int n, k;
        cin >> n >> k;
        forn(i, n)
        {
            ll x;
            cin >> x;
            bags.insert(x);
        }
        ll total_candies = 0;
        forn(i, k)
        {
            // auto last_it = (bags.end()--); // * NOT Allowed
            auto last_it = (--bags.end()); // * Allowed
            // auto last_it = (bags.end()); // *Allowed
            // --last_it;
            ll max_candi_ct = *last_it;
            total_candies += max_candi_ct;
            // * multiple values ko erase kar sakta hai don't use this here
            // bags.erase(max_candi_ct);
            bags.erase(last_it);
            bags.insert(max_candi_ct / 2);
        }
        cout << total_candies << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}

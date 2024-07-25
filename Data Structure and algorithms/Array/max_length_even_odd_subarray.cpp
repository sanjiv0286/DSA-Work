// DATE: 03-02-2024
// TIME: 09-27-32
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x
// #define vin() for(ll i=0;i<n;i++) cin>>v[i]
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
// #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

const int M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // ll even = 0, odd = 0;
    ll curr = 1, res = 1;
    for (int i = 1; i < n; i++)
    {
        // if (v[i] % 2 == 0)
        // {
        //     even++;
        // }
        // else
        // {
        //     odd++;
        // }
        if ((v[i] % 2 == 0 && v[i - 1] % 2 != 0) || (v[i] % 2 != 0 && v[i - 1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 1;
        }
    }
    cout << res << endl;
    // if (even == 0 || odd == 0)
    // {
    //     cout << 1 << endl;
    //     return;

    // }

    // int val = min(even, odd);
    // if (even == odd)
    // {
    //     cout << n << endl;
    //     return;
    // }
    // else
    // {
    //     cout << val + 1 << endl;
    //     return;
    // }
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

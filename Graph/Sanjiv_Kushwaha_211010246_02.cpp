// DATE: 26-09-2023
// TIME: 17-23-40
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(n) n.begin(), n.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, n, m) for (int i = n; i <= m; i++)
#define dep(i, m, n) for (int i = m; i >= n; i--)

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
// #define vout(n,m,v) for(int i=n;i<m;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

const int M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

vector<ll> lengthOfCycle(vector<vector<ll>> &adj, ll cv, ll p, vector<ll> &visited, ll d)
{
    visited[cv] = d;
    vector<ll> arr(2);
    for (auto &x : adj[cv])
    {
        if (!visited[x])
        {
            vector<ll> result = lengthOfCycle(adj, x, cv, visited, d + 1);
            arr[0] += result[0];
            arr[1] = max(arr[1], result[1]);
        }
        else if (p != x)
        {
            arr[1] = max(arr[1], visited[x] - d + 1);
        }
    }
    return arr;
}

void hello()
{
    ll v, n, m;
    cin >> v;
    vector<vector<ll>> adj(v + 1);
    for (ll i = 0; i < v; i++)
    {
        cin >> n >> m;
        adj[n].push_back(m);
        adj[m].push_back(n);
    }
    vector<ll> visited(v + 1, 0);
    vector<ll> ans = lengthOfCycle(adj, 0, -1, visited, 1);
    cout << ans[0] + ans[1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        hello();
    }
    return 0;
}

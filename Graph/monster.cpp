#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define F first
#define S second
#define dbl double
#define pb push_back
#define ll long long int
#define uset unordered_set
#define umap unordered_map
long long int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
 
#define vin(v) for(auto &x:v)cin >> x
#define deb(v) cout << #v << " " << v << "\n"
#define vout(v) for(auto x:v)cout << x << " " ;cout<<endl
#define deb2(v, k) cout << #v << " " << v << "\n" \<< #k << " " << k << "\n"
 
typedef tree<long long int, null_type, less<long long int>, rb_tree_tag, tree_order_statistics_node_update>sat;
typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag, tree_order_statistics_node_update>multisat;
 
void HHM() {
    ll  n, i, j, k;
    cin >> n >> k; vector<string>v(n);
    vector<vector<ll>>vis(n, vector<ll>(k, 1e18));
 
 
    queue<pair<ll, ll>>q; ll sti, stj;
 
    for (i = 0;i < n; i++) {
        cin >> v[i]; for (j = 0;j < k; j++) {
            if (v[i][j] == 'M') q.push({ i, j }), vis[i][j] = 0;
            if (v[i][j] == 'A') sti = i, stj = j;
        }
    }
 
    ll dir[4][2] = { { -1, 0 }, { 0, 1 }, { 1, 0 }, { 0, -1 } };
    char ch[4] = { 'U', 'R', 'D', 'L' };
 
    vector<vector<ll>>path(n, vector<ll>(k, -1));
 
    while (q.size()) {
        ll x = q.front().F, y = q.front().S; q.pop();
        for (ll i = 0; i < 4; i++) {
            ll ii = x + dir[i][0], jj = y + dir[i][1];
            if (ii >= 0 && ii < n && jj >= 0 && jj < k && v[ii][jj] != '#' && vis[ii][jj] == 1e18) {
                vis[ii][jj] = vis[x][y] + 1;
                q.push({ ii, jj });
            }
        }
    }
 
    q.push({ sti, stj }); ll eni = -1, enj = -1; vis[sti][stj] = 0;
 
    while (q.size()) {
        ll x = q.front().F, y = q.front().S; q.pop();
 
        if (x == 0 || x == n - 1 || y == 0 || y == k - 1) {
            cout << "YES\n"; eni = x, enj = y; break;
        }
 
        for (ll i = 0; i < 4; i++) {
            ll ii = x + dir[i][0], jj = y + dir[i][1];
            if (ii >= 0 && ii < n && jj >= 0 && jj < k && vis[x][y] + 1 < vis[ii][jj] && v[ii][jj] != '#') {
                vis[ii][jj] = vis[x][y] + 1;
                path[ii][jj] = i;
                q.push({ ii, jj });
            }
        }
    }
 
    if (eni == -1) {
        cout << "NO\n"; return;
    }
 
    string ans = "";
    while (eni != sti || enj != stj) {
        ll r = path[eni][enj]; ans += ch[r];
        eni -= dir[r][0]; enj -= dir[r][1];
    }
 
    cout << ans.size() << endl;
    reverse(all(ans));
    cout << ans << endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--) { HHM(); }
}
// ******************** Using Bfs ***************************

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void bfs(vector<vector<int>> &adj, int v, int s, vector<bool>&vis)
// {
//     // vector<bool> vis(v + 1, false);
//     queue<int> q;
//     vis[s] = true;
//     q.push(s);
//     while (q.empty() == false)
//     {
//         int u = q.front();
//         q.pop();
//         // cout << u << " ";
//         for (auto &v : adj[u])
//         {
//             if (vis[v] == false)
//             {
//                 vis[v] = true;
//                 q.push(v);
//             }
//         }
//     }
// }

// int  bfsdis(vector<vector<int>> &adj, int v)
// {
//     int ct =0;
//     vector<bool> vis(v + 1, false);
//     for (int i = 0; i < v; i++)
//     {
//         if (vis[i] == false)
//         {
//             ct++;
//             bfs(adj, v, i, vis);
//         }
//     }
//     return ct;
// }

// int main()
// {
//     int v, e;
//     cin >> v >> e;
//     vector<vector<int>> adj(v);
//     for (int i = 0; i < e; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     // int start_node;
//     // cin >> start_node;
//     // bfsdis(adj, v, start_node);
//     int result =  bfsdis(adj, v);
//     cout << result;
//     return 0;
// }

// ******************** Using DFS **********************************************************

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void DFS(vector<vector<int>> &adj, int s, vector<bool> &vis)
{
    // vector<bool> vis(v + 1, false);

    vis[s] = true;
    // cout << s << " ";
    for (auto &x : adj[s])
    {
        if (vis[x] == false)
        {
            DFS(adj, x, vis);
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // int start_node;
    // cin >> start_node;
    // bfsdis(adj, v, start_node);
    int ct = 0;
    vector<bool> vis(v, false);
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == false)
        {
            DFS(adj, i, vis);
            ct++;
        }
    }
    cout << ct << endl;
    return 0;
}

// **************************** Using Dfs *******************************************

// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define all(a) a.begin(), a.end()
// #define forn(i, n) for (int i = 0; i < n; i++)
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// #define print(x) cout << x << "\n"
// #define vin(v)        \
//     for (auto &x : v) \
//     cin >> x
// // #define vin() for(ll i=0;i<n;i++) cin>>v[i]
// #define vout(v)           \
//     for (auto x : v)      \
//         cout << x << " "; \
//     cout << endl
// // #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// // #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
// #define vect(type1, name) vector<type1> name
// #define vectp(type1, type2, name) vector<pair<type1, type2>> name
// #define set(type, name) set<type> name
// #define mpp(type1, type2, name) map<type1, type2> name

// const int M = 1e9 + 7;
// const int N = 1e5 + 7;
// #define Pi 3.1415926535897932384626
// // extern int x;

// bool visited[N];
// vector<int> g[N];

// int dfs(int vertex)
// {
//     visited[vertex] = true;
//     for (int child : g[vertex])
//     {
//         if (!visited[child])
//             dfs(child);
//     }
//     return 0;
// }

// void solve()
// {
//     int n, e;
//     cin >> n >> e;
//     for (int i = 0; i < e; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     int ct = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             dfs(i);
//             ct++;
//         }
//     }
//     cout << ct << endl;
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
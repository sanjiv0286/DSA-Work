// ***** Depth First Search | DFS **************************

// *time complexity : O(v+E)

// // DATE: 03-06-2023
// // TIME: 13-48-54
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// const int N = 1e5 + 10;
// vector<int> g[N];
// bool vis[N];

// void dfs(int vertex)
// {
//     // if (vis[child])  return; // *this code can also written here
//     // or
//     // if(vis[vertex])  return;
//     cout << vertex << endl;
//     //** Take action on vertex after entering the vertex
//     vis[vertex] = true;
//     for (int child : g[vertex])
//     {
//         cout << "par " << vertex << ", child " << child << endl;
//         if (vis[child])
//             continue;
//         //** Take action on child before entering the child node
//         dfs(child);
//         //** Take action on child  after exiting child node
//     }
//     //** Take action on vertex before  exiting the vertex
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < 9; ++i)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//         dfs(v2);
//     }

//     return 0;
// }

// ******************** DFS Traversal when source is given  *******************************

// #include <bits/stdc++.h>
// using namespace std;
// void dfs(vector<vector<int>> &adj, int s, vector<bool> &vis)
// {
// vis[s] = true;
// cout << s << " ";
// for (auto &x : adj[s])
// {
//     if (vis[x] == false)
//     {
//         dfs(adj, x, vis);
//     }
// }
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
//     int s;
//     cin >> s;
//     vector<bool> vis(v + 1, false);
//     dfs(adj, s, vis);
// }

// ******************** DFS Traversal when source is Not Given  *******************************

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void DFS(vector<vector<int>> &adj, int s, vector<bool> &vis)
{
    // vector<bool> vis(v + 1, false);
    vis[s] = true;
    cout << s << " ";
    for (auto &x : adj[s])
    {
        if (vis[x] == false)
        {
            DFS(adj,x, vis);
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
    vector<bool> vis(v , false);
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == false)
        {
            DFS(adj, i, vis);
        }
    }

    cout << endl;
    return 0;
}

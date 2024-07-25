

#include <bits/stdtr1c++.h>
using namespace std;
#define ll long long int


void DFS(vector<vector<int>> &adj, int s, vector<bool> &vis)
{
    vis[s] = true;
    cout << s << " ";
    for (auto &x : adj[s])
    {
        if (vis[x] == false)
        {
            DFS(adj, x, vis);
        }
    }
}

void Bfs(vector<vector<int>> &adj, int n, int s, vector<bool> &vis, vector<int> &dist)
{
    dist[s] = 0;
    queue<int> q;
    vis[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        // cout << u << " ";
        for (auto &v : adj[u])
        {
            if (vis[v] == false)
            {
                dist[v] = dist[u] + 1;
                vis[v] = true;
                q.push(v);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
    // cout << endl;
}


int main()
{
    int t = 1;
    // int t ;
    // cin >> t;
    while (t--)
    {
        int n, e;
        cin >> n >> e;
        vector<vector<int>> adj(n);
        for (int i = 0; i < e; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n + 1, false);
        vector<int> dist(n, INT_MAX);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == false)
            {
                // DFS(adj, i, vis);
                Bfs(adj, n, i, vis, dist);
            }
        }
        cout << endl;
    }
    return 0;
}
// **********************************************************************************


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void DFS(vector<vector<int>> &adj, int s, vector<bool> &vis)
// {
//     vis[s] = true;
//     cout << s << " ";
//     for (auto &x : adj[s])
//     {
//         if (vis[x] == false)
//         {
//             DFS(adj, x, vis);
//         }
//     }
// }

// void Bfs(vector<vector<int>> &adj, int n, int s, vector<int> &dist)
// {
//     dist[s] = 0;
//     queue<int> q;
//     // vis[s] = true;
//     q.push(s);
//     while (q.empty() == false)
//     {
//         int u = q.front();
//         q.pop();
//         // cout << u << " ";
//         for (auto &v : adj[u])
//         {
//             if (dist[v] == INT_MAX)
//             {
//                 dist[v] = dist[u] + 1;
//                 // vis[v] = true;
//                 q.push(v);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << dist[i] << " ";
//     }
//     // cout << endl;
// }

// int main()
// {
//     int t = 1;
//     // int t ;
//     // cin >> t;
//     while (t--)
//     {
//         int n, e;
//         cin >> n >> e;
//         vector<vector<int>> adj(n);
//         for (int i = 0; i < e; i++)
//         {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         // vector<bool> vis(n + 1, false);
//         vector<int> dist(n, INT_MAX);
//         for (int i = 0; i < n; i++)
//         {
//             if (dist[i] == INT_MAX)
//             {
//                 // DFS(adj, i, vis);
//                 Bfs(adj, n, i, dist);
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

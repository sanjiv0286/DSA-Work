// ***************** Topological Sorting using BFS & Khan's Algorithms **********************

// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<int> topoSort(int V, vector<int> adj[])
// {
//     vector<int> res;
//     vector<int> indegree(V, 0);

//     for (int i = 0; i < V; i++)
//     {
//         for (int nbr : adj[i])
//         {
//             indegree[nbr]++;
//         }
//     }

//     queue<int> q;
//     for (int i = 0; i < V; i++)
//     {
//         if (indegree[i] == 0)
//         {
//             q.push(i);
//         }
//     }

//     while (!q.empty())
//     {
//         int curr = q.front();
//         q.pop();
//         res.push_back(curr);

//         for (int nbr : adj[curr])
//         {
//             indegree[nbr]--;
//             if (indegree[nbr] == 0)
//             {
//                 q.push(nbr);
//             }
//         }
//     }

//     return res;
// }

// int main()
// {
//     int V, E;
//     cin >> V;
//     cin >> E;
//     vector<int> adj[V];
//     for (int i = 0; i < E; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//     }

//     vector<int> result = topoSort(V, adj);

//     cout << "Topological Sort Order: ";
//     for (int node : result)
//     {
//         cout << node << " ";
//     }

//     return 0;
// }
// ----------------------------------------------------------------


// #include <bits/stdc++.h>

// // #include <iostream>
// // #include <vector>
// // #include <queue>
// using namespace std;
// #define ll long long int

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
//             // adj[v].push_back(u);
//         }
//         vector<int> indegree(n, 0);
//         for (int i = 0; i < n; i++)
//         {
//             for (auto &x : adj[i])
//                 indegree[x]++;
//         }
//         queue<int> q;
//         for (int i = 0; i < n; i++)
//         {
//             if (indegree[i] == 0)
//             {
//                 q.push(i);
//             }
//         }
//         while (!q.empty())
//         {
//             int u = q.front();
//             q.pop();
//             cout << u << " ";
//             for (auto &x : adj[u])
//             {
//                 indegree[x]--;
//                 if (indegree[x] == 0)
//                 {
//                     q.push(x);
//                 }
//             }
//         }
//     }
//     return 0;
// }


// ***************** Topological Sorting using DFS **********************

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(int start, vector<bool> &vis, stack<int> &s, vector<int> adj[])
{
    vis[start] = true;

    for (int nbr : adj[start])
    {
        if (!vis[nbr])
        {
            dfs(nbr, vis, s, adj);
        }
    }

    s.push(start);
}

vector<int> topoSort(int V, vector<int> adj[])
{
    vector<bool> vis(V, false);
    stack<int> s;

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, s, adj);
        }
    }

    vector<int> res;

    while (!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }

    return res;
}

int main()
{
    int V; // Number of vertices
    int E; // Number of edges

    cin >> V >> E;
    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> result = topoSort(V, adj);

    cout << "Topological Sort: ";
    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}

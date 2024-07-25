// *********************** GFG : BFS TRAVERSAL When Source is Given

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void bfs(vector<vector<int>> &adj, int v, int s)
// {
//     vector<bool> vis(v + 1, false);
//     queue<int> q;
//     vis[s] = true;
//     q.push(s);
//     while (q.empty() == false)
//     {
//         int u = q.front();
//         q.pop();
//         cout << u << " ";
//         for (auto &x : adj[u])
//         {
//             if (vis[x] == false)
//             {
//                 vis[x] = true;
//                 q.push(x);
//             }
//         }
//     }
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
//     int start_node;
//     cin >> start_node;

//     bfs(adj, v, start_node);
//     // cout << endl;

//     return 0;
// }

// ******************* GFG : BFS TRAVERSAL When Source is Not Given

#include <bits/stdtr1c++.h>
using namespace std;
#define ll long long int

void bfs(vector<vector<int>> &adj, int v, int s, vector<bool> &vis)
{
    // vector<bool> vis(v + 1, false);
    queue<int> q;
    vis[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (auto &v : adj[u])
        {
            if (vis[v] == false)
            {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

void bfsdis(vector<vector<int>> &adj, int v)
{
    vector<bool> vis(v + 1, false);
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == false)
        {
            bfs(adj, v, i, vis);
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
    bfsdis(adj, v);
    cout << endl;
    return 0;
}


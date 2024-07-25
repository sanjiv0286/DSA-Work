#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<bool> &vis, vector<vector<int>> &adj, int s, int par)
{
    vis[s] = true;
    for (auto &x : adj[s])
    {
        if (!vis[x])
        {
            if (dfs(vis, adj, x, s) == true)
            {
                return true;
            }
        }
        else if (x != par)
        {
            return true;
        }
    }
    return false;
}

int main()
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
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            if (dfs(vis, adj, i, -1) == true)
            {
                cout << "true" << endl;
                return 0;
            }
        }
    }
    cout << "False" << endl;
    return 0;
}
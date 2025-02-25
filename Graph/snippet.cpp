
#include <bits/stdtr1c++.h>
using namespace std;
#define ll long long int

void Bfs(vector<vector<int>> &adj, int n, int s, vector<bool> &vis)
{
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


void DFS(vector<vector<int>> &adj, int s, vector<bool> &vis)
{
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
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == false)
            {
                // DFS(adj, i, vis);
                // Bfs(adj, n, i, vis);
            }
        }
        cout << endl;
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

bool DFSRec(vector<vector<int>> &adj, int s, vector<bool> &vis, vector<bool> &recst)
{
    vis[s] = true;
    recst[s] = true;

    for (int u : adj[s])
    {
        if (vis[u] == false && DFSRec(adj, u, vis, recst) == true)
        {
            return true;
        }
        else if (recst[u] == true)
        {
            return true;
        }
    }
    recst[s] = false;
    return false;
}

bool DFS(vector<vector<int>> adj, int v)
{
    vector<bool> vis(v, false);
    vector<bool> recst(v, false);
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == false)
        {
            if (DFSRec(adj, i, vis, recst) == true)
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
    }
    if (DFS(adj, n))
        cout << "Cycle found";
    else
        cout << "No cycle found";

    return 0;
}

// ************* Detect Cycle in DAG using Khan BFS algorithms *****************

#include <bits/stdc++.h>

// #include <iostream>
// #include <vector>
// #include <queue>
using namespace std;
#define ll long long int

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
            // adj[v].push_back(u);
        }
        vector<int> indegree(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (auto &x : adj[i])
                indegree[x]++;
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        int ct = 0;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            cout << u << " ";
            for (auto &x : adj[u])
            {
                indegree[x]--;
                if (indegree[x] == 0)
                {
                    q.push(x);
                }
            }
            ct++;
        }
        if (ct != n)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}

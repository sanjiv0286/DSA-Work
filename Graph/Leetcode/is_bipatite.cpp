// ************************** Using BFS ************************************************

// DATE: 24-10-2023
// TIME: 00-36-15
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long

bool isBipartite(vector<vector<int>> &adj, int curr, vector<int> &color, int currcolor)
{
    queue<int> q;
    q.push(curr);
    color[curr] = currcolor;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        // cout << u << " ";
        for (auto &v : adj[u])
        {
            if (color[v] == color[u])
            {
                return false;
            }
            else if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        vector<vector<int>> adj(v);
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool Bipartite = true;

        vector<int> color(v, -1);
        for (int i = 0; i < v; i++)
        {
            if (color[i] == -1)
            {
                if (isBipartite(adj, i, color, 1) == false)
                {
                    Bipartite = false;
                    break;
                    // return false;
                }
            }
        }
        cout << (Bipartite ? "The graph is bipartite." : "The graph is not bipartite.") << endl;

        // return true;
    }
    return 0;
}

// *************************** Using DFS *********************************************

// DATE: 23-10-2023
// TIME: 19-28-17
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long

bool checkGraphBipartite(vector<vector<int>> &adj, int curr, vector<int> &color, int currcolor)
{
    color[curr] = currcolor;

    for (auto &v : adj[curr])
    {
        if (color[v] == color[curr])
        {
            return false;
        }
        if(color[v] == -1)
        {
            int colorOfAdj = 1 - currcolor;
            if (checkGraphBipartite(adj, v, color, colorOfAdj) == false)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int v, e;
    cin >> v >> e;
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool isBipartite = true;
    vector<int> color(v, -1);
    for (int i = 0; i < v; i++)
    {
        if (color[i] == -1)
        {
            if (checkGraphBipartite(adj, i, color, 1) == false)
            {

                isBipartite = false;
                break;
            }
        }
    }
    cout << (isBipartite ? "The graph is bipartite." : "The graph is not bipartite.") << endl;

    return 0;
}

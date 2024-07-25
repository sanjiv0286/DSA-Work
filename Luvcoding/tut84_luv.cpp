// ***** Depth First Search | DFS **************************

// *time complexity : O(v+E)

// DATE: 03-06-2023
// TIME: 13-48-54
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    // if (vis[child])  return; // *this code can also written here
    // or
    // if(vis[vertex])  return;
    cout << vertex << endl;
    //** Take action on vertex after entering the vertex
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "par " << vertex << ", child " << child << endl;
        if (vis[child])
            continue;
        //** Take action on child before entering the child node
        dfs(child);
        //** Take action on child  after exiting child node
    }
    //** Take action on vertex before  exiting the vertex
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 9; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
        dfs(v2);
    }

    return 0;
}

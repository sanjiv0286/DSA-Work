#include <bits/stdc++.h>
using namespace std;

// const int MAXN = 105;

bool canHearMessage(int u, int p, int k, vector<vector<int>> &graph, vector<bool> &visited)
{
    if (u == p)
    {
        return true; // Girl is at the same cell as the boy
    }

    visited[u] = true;

    for (int v : graph[u])
    {
        if (!visited[v])
        {
            if (canHearMessage(v, p, k, graph, visited))
            {
                // int or_val = (u | v);
                // int and_val = (u & v);
                // if (or_val - and_val <= k)
                // {
                return true;
                // }
            }
        }
    }

    return false;
}

int main()
{
    int n, k, p;
    cin >> n >> k >> p;

    vector<int> cells(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cells[i];
    }
    vector<vector<int>> graph(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int or_val = (cells[i] | cells[j]);
            int and_val = (cells[i] & cells[j]);
            if (or_val - and_val <= k)
            {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    if (canHearMessage(0, p - 1, k, graph, visited))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// **********************************************************************

// #include <bits/stdc++.h>
// using namespace std;

// bool canHearMessage(int u, int p, int k, vector<vector<int>> &graph, vector<bool> &visited)
// {
//     return (u == p) || (visited[u] = true, any_of(graph[u].begin(), graph[u].end(), [&](int v)
//                                                   { return !visited[v] && canHearMessage(v, p, k, graph, visited); }));
// }

// int main()
// {
//     int n, k, p;
//     cin >> n >> k >> p;

//     vector<int> cells(n);
//     for (int i = 0; i < n; cin >> cells[i++])
//         ;

//     vector<vector<int>> graph(n);
//     vector<bool> visited(n, false);

//     for (int i = 0; i < n - 1; i++)
//         for (int j = i + 1; j < n; j++)
//             if ((cells[i] | cells[j]) - (cells[i] & cells[j]) <= k)
//                 graph[i].push_back(j), graph[j].push_back(i);

//     cout << (canHearMessage(0, p - 1, k, graph, visited) ? "YES" : "NO") << endl;
//     return 0;
// }

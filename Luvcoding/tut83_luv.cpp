// *adjacency matrix

// DATE: 03-06-2023
// TIME: 09-31-29
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

const int N = 1e3 + 10;
int graph[N][N];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    // 0(N^2) - space complexity
    // N < 10^3
    // N != 10^5
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}
// *******************************************************
// *adjacency matrix Vs adjacency list

// DATE: 03-06-2023
// TIME: 11-22-17
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;
const int N = 1e3 + 10;
int graph1[N][N];
vector<int> graph2[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
    // Adjacency matrix
    // 0(N^2) - space complexity
    // N < 10^3
    // N != 10^5
    // Adjacency list
    // 0(n+m) - space complexity
    // E < 10^7
    // N = 10^5
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}
// **************************************************

// DATE: 03-06-2023
// TIME: 11-22-17
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;
const int N = 1e3 + 10;
int graph1[N][N];
vector<pair<int, int>> graph2[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;
        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
        // *****************************
        // // i, j connected?, i, j > wt ? 
        // if (graph1[i][j] == 1)
        // {
        //     // connected graph1 [i][j]
        // }
        // for (pair<int, int> child : graph2[i])
        // {
        //     (child.first == j)
        //     {
        //         // connected
        //         // child.second
        //     }
        // }
        // *************************
    }

    // Adjacency matrix
    // 0(N^2) - space complexity
    // N < 10^3
    // N != 10^5
    // Adjacency list
    // 0(n+m) - space complexity
    // E < 10^7
    // N = 10^5
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}

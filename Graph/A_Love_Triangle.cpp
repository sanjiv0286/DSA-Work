// ************************* Concept behind using a[a[a[i]]] *******************************

// DATE: 13-09-2023
// TIME: 14-12-16
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
//https://prod.liveshare.vsengsaas.visualstudio.com/join?59E9F4A7478D79BAE619FFBB14DBEC5938F3
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, arr[N];
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            // **************************
            // *The condition f[f[f[i]]] == i is used in the context of problems
            // *Where you are dealing with directed graphs or relationships between elements.
            // *Specifically, it's useful in problems that involve cycles of length 3,
            // *Such as "love triangles"
            // ***********************************
            int a = i, b = arr[a], c = arr[b], d = arr[c];
            if (a == d)
            // if (arr[arr[arr[i]]] == i) // ** same as    if (a == d)  this technics is useful in graph concept
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// *************** taking index 0 ******************************

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> f(n);
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        f[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        if (f[f[f[i]]] == i)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

// signed main()
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

// **************** Taking index 1 *******************************

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    // vector<int> f(n);
    vector<int> f(n + 1);
    for (int i = 1; i <= n; i++)
    // for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        // f[i]--;
    }
    for (int i = 1; i <= n; i++)
    // for (int i = 0; i < n; i++)
    {
        if (f[f[f[i]]] == i)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}


//  ************* Accepted : using BFS Approach *********************************

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 5001;

vector<int> graph[MAXN];

bool bfs(int start, const int n) {
    vector<int> visited(n + 1, 0); // Initialize visited array with 0 (not visited)
    queue<int> q;
    q.push(start);
    visited[start] = 1; // Mark as visited with depth 1

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current]) {
            if (visited[neighbor] == 0) {
                q.push(neighbor);
                visited[neighbor] = visited[current] + 1; // Increment depth
                // Check if the third level of preference leads back to the start
                if (visited[neighbor] == 3 && graph[neighbor].size() != 0 && graph[neighbor][0] == start) {
                    return true; // Cycle of length 3 found
                }
            }
        }
    }

    return false; // No cycle of length 3 found
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int fi;
        cin >> fi;
        graph[i].push_back(fi);
    }

    bool hasLoveTriangle = false;
    for (int i = 1; i <= n; i++) {
        if (bfs(i, n)) {
            hasLoveTriangle = true;
            break;
        }
    }

    if (hasLoveTriangle) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}



// ************************* using dfs approach *********************************

#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 5001;

vector<int> graph[MAXN];
int visited[MAXN];

bool dfs(int v, int depth)
{
    visited[v] = depth;
    for (int u : graph[v])
    {
        if (visited[u] == 0)
        {
            if (dfs(u, depth + 1))
            {
                return true;
            }
        }
        else if (visited[u] == depth - 2)
        {
            return true;
        }
    }
    visited[v] = 0;
    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int fi;
        cin >> fi;
        graph[i].push_back(fi);
    }

    bool hasLoveTriangle = false;
    for (int i = 1; i <= n; i++)
    {

        if (visited[i] == 0)
        {
            if (dfs(i, 1))
            {
                hasLoveTriangle = true;
                break;
            }
        }
    }

    if (hasLoveTriangle)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;

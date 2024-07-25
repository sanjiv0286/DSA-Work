#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1000;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool r[N][N] = {};
        for (int i = 0; i < n; ++i) {
            fill(r[i], r[i] + n, false);
        }

        int e = n * (n - 1) / 2;
        for (int i = 0; i < e; ++i) {
            int u, v;
            cin >> u >> v;
            --u;
            --v;
            r[u][v] = true;
        }

        for (int v = 0; v < n; ++v) {
            r[v][v] = true;
            for (int u = 0; u < n; ++u) {
                if (r[v][u]) {
                    for (int w = 0; w < n; ++w) {
                        r[v][w] |= r[u][w];
                    }
                }
            }
        }

        vector<int> k;
        for (int v = 0; v < n; ++v) {
            bool is_all_connected = true;
            for (int u = 0; u < n; ++u) {
                if (!r[v][u]) {
                    is_all_connected = false;
                    break;
                }
            }
            if (is_all_connected) {
                k.emplace_back(v + 1);
            }
        }

        for (int i = 0; i < k.size(); ++i) {
            cout << k[i];
            if (i < k.size() - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

// ==================================================================

// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// #define print(x) cout << x << "\n"
// #define vin(v)        \
//     for (auto &x : v) \
//     cin >> x
// // #define vin() for(ll i=0;i<n;i++) cin>>v[i]
// #define vout(v)           \
//     for (auto x : v)      \
//         cout << x << " "; \
//     cout << endl
// // #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// // #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
// #define vect(type1, name) vector<type1> name
// #define vectp(type1, type2, name) vector<pair<type1, type2>> name
// #define set(type, name) set<type> name
// #define mpp(type1, type2, name) map<type1, type2> name

// const int M = 1e9 + 7;
// // const int N = 1e5 + 7;
// #define Pi 3.1415926535897932384626
// // extern int x;

// const int N = 1000;

// void KingINTourment()
// {
//     int n;
//     cin >> n;
//     bool isReachable[N][N] = {};
//     for (int i = 0; i < n; ++i)
//     {
//         fill(isReachable[i], isReachable[i] + n, false);
//     }
//     int totalEdges = n * (n - 1) / 2;
//     for (int i = 0; i < totalEdges; ++i)
//     {
//         int u, v;
//         cin >> u >> v;
//         --u;
//         --v;
//         isReachable[u][v] = true;
//     }

//     for (int v = 0; v < n; ++v)
//     {
//         isReachable[v][v] = true;
//         for (int u = 0; u < n; ++u)
//         {
//             if (isReachable[v][u])
//             {
//                 for (int w = 0; w < n; ++w)
//                 {
//                     isReachable[v][w] |= isReachable[u][w];
//                 }
//             }
//         }
//     }

//     vector<int> kings;
//     for (int v = 0; v < n; ++v)
//     {
//         bool isAllConnected = true;
//         for (int u = 0; u < n; ++u)
//         {
//             if (!isReachable[v][u])
//             {
//                 isAllConnected = false;
//                 break;
//             }
//         }
//         if (isAllConnected)
//         {
//             kings.emplace_back(v + 1);
//         }
//     }

//     for (int i = 0; i < kings.size(); ++i)
//     {
//         cout << kings[i];
//         if (i < kings.size() - 1)
//         {
//             cout << " ";
//         }
//     }
//     cout << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         KingINTourment();
//     }
//     return 0;
// }

// #include <array>
// #include <iostream>
// #include <queue>
// #include <vector>
// #include <utility>
// using namespace std;

// inline bool move_valid(const vector<vector<int>> &cb, int r, int c)
// {
//     if (r < 0 || r >= static_cast<int>(cb.size()))
//         return false;
//     else if (c < 0 || c >= static_cast<int>(cb[r].size()))
//         return false;
//     else if (cb[r][c] != -1)
//         return false;
//     else
//         return true;
// }

// int minMoves(vector<vector<int>> &cb, const pair<int, int> &s, const pair<int, int> &e)
// {
//     static const array<pair<int, int>, 8> moves{{{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}}};

//     queue<pair<int, int>> q;
//     int nr, nc;
//     cb[s.first][s.second] = 0;
//     q.push(s);
//     while (!q.empty() && cb[e.first][e.second] == -1)
//     {
//         auto cur = q.front();
//         q.pop();

//         for (const auto &m : moves)
//         {
//             nr = cur.first + m.first;
//             nc = cur.second + m.second;

//             if (move_valid(cb, nr, nc))
//             {
//                 cb[nr][nc] = cb[cur.first][cur.second] + 1;
//                 q.emplace(nr, nc);
//             }
//         }
//     }

//     return cb[e.first][e.second];
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         char ac, ar, bc, br;
//         cin >> ac >> ar >> bc >> br;

//         vector<vector<int>> cb(8, vector<int>(8, -1));

//         auto s = pair<int, int>{ar - '0' - 1, ac - 'a'};
//         auto e = pair<int, int>{br - '0' - 1, bc - 'a'};

//         cout << minMoves(cb, s, e) << endl;
//     }

//     return 0;
// }
// ==================================
// sanjiv
// DATE: 20-09-2023
// TIME: 15-12-39
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x
// #define vin() for(ll i=0;i<n;i++) cin>>v[i]
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
// #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

const int M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

inline bool move_valid(const vector<vector<int>> &cb, int r, int c)
{
    if (r < 0 || r >= static_cast<int>(cb.size()))
        return false;
    else if (c < 0 || c >= static_cast<int>(cb[r].size()))
        return false;
    else if (cb[r][c] != -1)
        return false;
    else
        return true;
}

int minMoves(vector<vector<int>> &cb, const pair<int, int> &s, const pair<int, int> &e)
{
     const array<pair<int, int>, 8> moves{{{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}}};

    queue<pair<int, int>> q;
    int nr, nc;
    cb[s.first][s.second] = 0;
    q.push(s);
    while (!q.empty() && cb[e.first][e.second] == -1)
    {
        auto cur = q.front();
        q.pop();

        for (const auto &m : moves)
        {
            nr = cur.first + m.first;
            nc = cur.second + m.second;

            if (move_valid(cb, nr, nc))
            {
                cb[nr][nc] = cb[cur.first][cur.second] + 1;
                q.emplace(nr, nc);
            }
        }
    }

    return cb[e.first][e.second];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        char ac, ar, bc, br;
        cin >> ac >> ar >> bc >> br;

        vector<vector<int>> cb(8, vector<int>(8, -1));

        auto s = pair<int, int>{ar - '0' - 1, ac - 'a'};
        auto e = pair<int, int>{br - '0' - 1, bc - 'a'};

        cout << minMoves(cb, s, e) << endl;
    }

    return 0;
}

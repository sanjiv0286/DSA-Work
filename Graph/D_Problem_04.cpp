// // #include <bits/stdc++.h>
// // using namespace std ;


// // const int MAXN = 1005;
// // const int dx[] = {-1, 1, 0, 0};
// // const int dy[] = {0, 0, -1, 1};
// // const char dir[] = {'U', 'D', 'L', 'R'};

// // int n, m;
// // char labyrinth[MAXN][MAXN];
// // int dist[MAXN][MAXN];
// // pair<int, int> parent[MAXN][MAXN];

// // bool is_valid(int x, int y) {
// //     return x >= 0 && x < n && y >= 0 && y < m && labyrinth[x][y] != '#';
// // }

// // void bfs(int sx, int sy) {
// //     queue<pair<int, int>> q;
// //     q.push({sx, sy});
// //     dist[sx][sy] = 0;

// //     while (!q.empty()) {
// //         int x = q.front().first;
// //         int y = q.front().second;
// //         q.pop();

// //         for (int i = 0; i < 4; i++) {
// //             int nx = x + dx[i];
// //             int ny = y + dy[i];

// //             if (is_valid(nx, ny) && dist[nx][ny] == -1) {
// //                 dist[nx][ny] = dist[x][y] + 1;
// //                 parent[nx][ny] = {x, y};
// //                 q.push({nx, ny});
// //             }
// //         }
// //     }
// // }

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cin >> n >> m;

// //     int start_x, start_y, end_x, end_y;
// //     for (int i = 0; i < n; i++) {
// //         for (int j = 0; j < m; j++) {
// //             cin >> labyrinth[i][j];
// //             if (labyrinth[i][j] == 'A') {
// //                 start_x = i;
// //                 start_y = j;
// //             } else if (labyrinth[i][j] == 'B') {
// //                 end_x = i;
// //                 end_y = j;
// //             }
// //             dist[i][j] = -1;
// //         }
// //     }

// //     bfs(start_x, start_y);

// //     if (dist[end_x][end_y] == -1) {
// //         cout << "NO" << endl;
// //     } else {
// //         cout << "YES" << endl;
// //         cout << dist[end_x][end_y] << endl;

// //         string p = "";
// //         int x = end_x, y = end_y;
// //         while (x != start_x || y != start_y) {
// //             int px = parent[x][y].first;
// //             int py = parent[x][y].second;

// //             for (int i = 0; i < 4; i++) {
// //                 if (px + dx[i] == x && py + dy[i] == y) {
// //                     p += dir[i];
// //                     break;
// //                 }
// //             }

// //             x = px;
// //             y = py;
// //         }

// //         reverse(p.begin(), p.end());
// //         cout << p << endl;
// //     }

// //     return 0;
// // }

// // =========================
// //sanjiv 
// //DATE: 20-09-2023
// //TIME: 15-20-25 
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

// #define vout(v)           \
//     for (auto x : v)      \
//         cout << x << " "; \
//     cout << endl

// #define vect(type1, name) vector<type1> name
// #define vectp(type1, type2, name) vector<pair<type1, type2>> name
// #define set(type, name) set<type> name
// #define mpp(type1, type2, name) map<type1, type2> name

// const int M = 1e9 + 7;
// const int N = 1e5 + 7;
// #define Pi 3.1415926535897932384626

// const int MAXN = 1005;
// const int dx[] = {-1, 1, 0, 0};
// const int dy[] = {0, 0, -1, 1};
// const char dir[] = {'U', 'D', 'L', 'R'};

// int n, m;
// char grid[MAXN][MAXN];
// int distance_grid[MAXN][MAXN];
// pair<int, int> parent[MAXN][MAXN];

// bool isValid(int x, int y) {
//     return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
// }

// void bfs(int n, int m) {
//     queue<pair<int, int>> q;
//     q.push({n, m});
//     distance_grid[n][m] = 0;

//     while (!q.empty()) {
//         int x = q.front().first;
//         int y = q.front().second;
//         q.pop();

//         for (int i = 0; i < 4; i++) {
//             int nx = x + dx[i];
//             int ny = y + dy[i];

//             if (isValid(nx, ny) && distance_grid[nx][ny] == -1) {
//                 distance_grid[nx][ny] = distance_grid[x][y] + 1;
//                 parent[nx][ny] = {x, y};
//                 q.push({nx, ny});
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cin >> n >> m;

//     int startRow, startCol, endRow, endCol;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> grid[i][j];
//             if (grid[i][j] == 'A') {
//                 startRow = i;
//                 startCol = j;
//             } else if (grid[i][j] == 'B') {
//                 endRow = i;
//                 endCol = j;
//             }
//             distance_grid[i][j] = -1;
//         }
//     }

//     bfs(startRow, startCol);

//     if (distance_grid[endRow][endCol] == -1) {
//         cout << "NO" << endl;
//     } else {
//         cout << "YES" << endl;
//         cout << distance_grid[endRow][endCol] << endl;

//         string p = "";
//         int x = endRow, y = endCol;
//         while (x != startRow || y != startCol) {
//             int px = parent[x][y].first;
//             int py = parent[x][y].second;

//             for (int i = 0; i < 4; i++) {
//                 if (px + dx[i] == x && py + dy[i] == y) {
//                     p += dir[i];
//                     break;
//                 }
//             }

//             x = px;
//             y = py;
//         }

//         reverse(p.begin(), p.end());
//         cout << p << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const char dir[] = {'U', 'D', 'L', 'R'};

int n, m;
char grid[1005][1005];

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
}

int shortestPath(int sx, int sy, int ex, int ey) {
    if (sx == ex && sy == ey) return 0;

    int minPath = INT_MAX;

    for (int i = 0; i < 4; i++) {
        int nx = sx + dx[i], ny = sy + dy[i];
        if (valid(nx, ny) && grid[nx][ny] != 'A') {
            char original = grid[nx][ny];
            grid[nx][ny] = '#';
            int subPath = shortestPath(nx, ny, ex, ey);
            if (subPath != -1) {
                minPath = min(minPath, subPath + 1);
            }
            grid[nx][ny] = original;
        }
    }

    return (minPath == INT_MAX) ? -1 : minPath;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    int sx = -1, sy = -1, ex = -1, ey = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') sx = i, sy = j;
            else if (grid[i][j] == 'B') ex = i, ey = j;
        }
    }

    int result = shortestPath(sx, sy, ex, ey);

    if (result == -1) cout << "NO\n";
    else {
        cout << "YES\n" << result << '\n';
    }

    return 0;
}

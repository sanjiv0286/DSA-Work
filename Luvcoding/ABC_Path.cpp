// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
// int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// bool isValid(int r, int c, int H, int W)
// {
//     return (r >= 0 && r < H && c >= 0 && c < W);
// }

// int dfs(vector<vector<char>> &grid, int r, int c, int H, int W)
// {
//     int maxPathLength = 0;
//     char currentChar = grid[r][c];
//     grid[r][c] = '.'; // mark the current cell as visited

//     for (int i = 0; i < 8; i++)
//     {
//         int newR = r + dr[i];
//         int newC = c + dc[i];

//         if (isValid(newR, newC, H, W) && grid[newR][newC] == currentChar + 1)
//         {
//             int pathLength = 1 + dfs(grid, newR, newC, H, W);
//             maxPathLength = max(maxPathLength, pathLength);
//         }
//     }

//     grid[r][c] = currentChar; // restore the current cell
//     return maxPathLength;
// }

// int findLongestPath(vector<vector<char>> &grid, int H, int W)
// {
//     int maxLength = 0;

//     for (int i = 0; i < H; i++)
//     {
//         for (int j = 0; j < W; j++)
//         {
//             if (grid[i][j] == 'A')
//             {
//                 int pathLength = 1 + dfs(grid, i, j, H, W); // start with path length 1
//                 maxLength = max(maxLength, pathLength);
//             }
//         }
//     }

//     return maxLength;
// }

// int main()
// {
//     int H, W;
//     int caseNumber = 1;

//     while (cin >> H >> W && (H != 0 || W != 0))
//     {
//         vector<vector<char>> grid(H, vector<char>(W));

//         for (int i = 0; i < H; i++)
//         {
//             for (int j = 0; j < W; j++)
//             {
//                 cin >> grid[i][j];
//             }
//         }

//         int longestPath = findLongestPath(grid, H, W);
//         cout << "Case " << caseNumber << ": " << longestPath << endl;
//         caseNumber++;
//     }

//     return 0;
// }

// *****************************************************

// #include <cstdio>
// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <queue>
// #include <stack>
// #define in_range(x, y, r, c) (x < r && y < c && x >= 0 && y >= 0)
// using namespace std;

// char mat[51][51];
// int r, c, dis[51][51];

// void dfs(int i, int j, int dist)
// {
//     int x, y;
//     dis[i][j] = dist + 1;

//     x = i - 1;
//     y = j - 1;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i - 1;
//     y = j;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i - 1;
//     y = j + 1;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i;
//     y = j - 1;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i;
//     y = j + 1;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i + 1;
//     y = j - 1;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i + 1;
//     y = j;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }

//     x = i + 1;
//     y = j + 1;
//     if (in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1)
//     {
//         dfs(x, y, dis[i][j]);
//     }
// }

// int main()
// {

//     int max, tc = 0;

//     while (true)
//     {
//         cin >> r >> c;
//         if (!r && !c)
//             break;
//         tc++;
//         for (int i = 0; i < r; i++)
//         {
//             cin >> mat[i];
//             for (int j = 0; j < c; j++)
//                 dis[i][j] = 0;
//         }
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 if (mat[i][j] == 'A' && dis[i][j] == 0)
//                     dfs(i, j, 0);
//             }
//         }
//         max = dis[0][0];
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//                 if (max < dis[i][j])
//                     max = dis[i][j];
//         }
//         cout << "Case " << tc << ": " << max << endl;
//     }
//     return 0;
// }

// ****************************************************

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int n, m, x, y, rr;
char a[55][55];
int dp[55][55];

int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

bool isValid(int fx, int fy, char cp)
{
    cp++;
    if (fx < 0 || fx >= n || fy < 0 || fy >= m)
        return false;
    if (a[fx][fy] != cp)
        return false;

    return true;
}

int dfs(int sx, int sy)
{
    if (dp[sx][sy] != -1)
        return dp[sx][sy];

    int pp = 1;

    int df = 0;

    for (int i = 0; i < 8; i++)
    {
        int nx = sx + dx[i];
        int ny = sy + dy[i];

        if (isValid(nx, ny, a[sx][sy]))
        {
            int rp = dfs(nx, ny);
            df = max(df, rp);
        }
    }
    pp += df;
    return dp[sx][sy] = pp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //    freopen("input.txt", "r", stdin);
    int pp = 1;
    while (1)
    {

        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        memset(dp, -1, sizeof(dp));
        vector<pair<int, int>> p;
        p.clear();

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'A')
                    p.push_back({i, j});
            }
        }
        if (p.size() == 0)
        {
            cout << ans << nl;
            continue;
        }
        for (int i = 0; i < p.size(); i++)
        {

            rr = dfs(p[i].first, p[i].second);
            ans = max(ans, rr);
        }
        cout << "Case " << pp++ << ": " << ans << nl;
    }

    return 0;
}
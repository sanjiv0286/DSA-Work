// #include <iostream>
// #include <cstring>
// #include <vector>
// #include <algorithm>

// int dx[]={1,1,0,-1,-1,-1,0,1};
// int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
// int maxPathLen = 0;

// inline bool isValid(const std::vector<std::vector<char>> &grid, 
//                     int cur_row, int cur_col)
// {
//     if(cur_row < 0 || cur_row >= grid.size() 
//         || cur_col < 0 || cur_col >= grid[cur_row].size()) return false;
//     return true;
// }

// void dfs(const std::vector<std::vector<char>> &grid, 
//         std::vector<std::vector<int>> &visited, 
//         int cur_row, int cur_col, int cur_len = 1)
// {
//     if(visited[cur_row][cur_col]) return;
//     visited[cur_row][cur_col] = 1;
//     maxPathLen = std::max(maxPathLen, cur_len);
//     // from this cell we can go to 8 neighboring cells
//     for(int i = 0 ; i < 8 ; ++i){
//         int n_x = cur_row + dx[i];
//         int n_y = cur_col + dy[i];
//         if(isValid(grid, n_x, n_y)){
//             if(grid[n_x][n_y] - grid[cur_row][cur_col] == 1){
//                 dfs(grid, visited, n_x, n_y, cur_len + 1);
//             }
//         }
//     }
// }

// void dfsFull(const std::vector<std::vector<char>> &grid, 
//             std::vector<std::vector<int>> &visited)
// {
//     for(int i = 0 ; i < grid.size() ; ++i){
//         for(int j = 0 ; j < grid[i].size() ; ++j){
//             if(grid[i][j] == 'A'){
//                 dfs(grid,visited, i,j);
//             }
//         }
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int row,column, k = 0;
//     while(std::cin >> row >> column){
//         if(!row && !column) break;
//         std::vector<std::vector<char>> grid(row, std::vector<char>(column));
//         std::vector<std::vector<int>> visited(row, std::vector<int>(column));
//         for(int i = 0 ; i < row ; ++i){
//             for(int j = 0 ; j < column ; ++j){
//                 std::cin >> grid[i][j];
//             }
//         }
//         dfsFull(grid, visited);
//         std::cout << "Case " << ++k << ": " << maxPathLen << '\n';
//         maxPathLen = 0;
//     }
//     return 0;
// }

// =============================================

// sanjiv 
//DATE: 20-09-2023
//TIME: 14-52-26 
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


int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
int maxPathLen = 0;

inline bool isValid(const vector<std::vector<char>> &grid, 
                    int cur_row, int cur_col)
{
    if(cur_row < 0 || cur_row >= grid.size() 
        || cur_col < 0 || cur_col >= grid[cur_row].size()) return false;
    return true;
}

void dfs(const std::vector<std::vector<char>> &grid, 
        vector<std::vector<int>> &visited, 
        int cur_row, int cur_col, int cur_len = 1)
{
    if(visited[cur_row][cur_col]) return;
    visited[cur_row][cur_col] = 1;
    maxPathLen = max(maxPathLen, cur_len);
    // from this cell we can go to 8 neighboring cells
    for(int i = 0 ; i < 8 ; ++i){
        int n_x = cur_row + dx[i];
        int n_y = cur_col + dy[i];
        if(isValid(grid, n_x, n_y)){
            if(grid[n_x][n_y] - grid[cur_row][cur_col] == 1){
                dfs(grid, visited, n_x, n_y, cur_len + 1);
            }
        }
    }
}


void dfsFull(const vector<vector<char>> &grid, 
            vector<std::vector<int>> &visited)
{
    for(int i = 0 ; i < grid.size() ; ++i){
        for(int j = 0 ; j < grid[i].size() ; ++j){
            if(grid[i][j] == 'A'){
                dfs(grid,visited, i,j);
            }
        }
    }
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
       int row,column, k = 0;
    while(cin >> row >> column){
        if(!row && !column) break;
        vector<std::vector<char>> grid(row, std::vector<char>(column));
        vector<std::vector<int>> visited(row, std::vector<int>(column));
        for(int i = 0 ; i < row ; ++i){
            for(int j = 0 ; j < column ; ++j){
                cin >> grid[i][j];
            }
        }
        dfsFull(grid, visited);
        cout << "Case " << ++k << ": " << maxPathLen << '\n';
        maxPathLen = 0;
    }
   
    }
    return 0;
}

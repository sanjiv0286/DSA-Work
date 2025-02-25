#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }

        int numIslands = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    numIslands++;
                    dfs(grid, i, j);
                }
            }
        }

        return numIslands;
    }

private:
    void dfs(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == '0') {
            return;
        }

        grid[row][col] = '0'; // Mark the current cell as visited

        // Explore the neighboring cells
        dfs(grid, row - 1, col); // Up
        dfs(grid, row + 1, col); // Down
        dfs(grid, row, col - 1); // Left
        dfs(grid, row, col + 1); // Right
    }
};

int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    Solution solution;
    int numIslands = solution.numIslands(grid);

    cout << "Number of Islands: " << numIslands << endl;

    return 0;
}
// ******************************* Taking Input By the Users ******************************

// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution
// {
// public:
//     int numIslands(vector<vector<char>> &grid)
//     {
//         if (grid.empty())
//         {
//             return 0;
//         }

//         int numIslands = 0;
//         for (int i = 0; i < grid.size(); i++)
//         {
//             for (int j = 0; j < grid[0].size(); j++)
//             {
//                 if (grid[i][j] == '1')
//                 {
//                     numIslands++;
//                     dfs(grid, i, j);
//                 }
//             }
//         }

//         return numIslands;
//     }

// private:
//     void dfs(vector<vector<char>> &grid, int row, int col)
//     {
//         if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == '0')
//         {
//             return;
//         }

//         grid[row][col] = '0'; // Mark the current cell as visited

//         // Explore the neighboring cells
//         dfs(grid, row - 1, col); // Up
//         dfs(grid, row + 1, col); // Down
//         dfs(grid, row, col - 1); // Left
//         dfs(grid, row, col + 1); // Right
//     }
// };

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<char>> grid(n, vector<char>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             char x;
//             cin >> x;
//             grid[i][j] = x; // Assign the character to the grid
//         }
//     }

//     Solution solution;
//     int numIslands = solution.numIslands(grid);

//     cout << "Number of Islands: " << numIslands << endl;

//     return 0;
// }

// ******************************************************************************************
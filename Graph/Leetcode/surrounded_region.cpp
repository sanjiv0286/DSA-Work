
// ******************************************************************************
#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>> &board, int i, int j)
{
    int rows = board.size();
    int cols = board[0].size();

    if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != 'O')
    {
        return;
    }

    board[i][j] = '#';

    dfs(board, i - 1, j);
    dfs(board, i + 1, j);
    dfs(board, i, j - 1);
    dfs(board, i, j + 1);
}

void solve(vector<vector<char>> &board)
{
    // if (board.empty() || board[0].empty()) {
    if (board.empty())
    {
        return;
    }

    int rows = board.size();
    int cols = board[0].size();

    // Mark boundary 'O' cells
    for (int i = 0; i < rows; i++)
    {
        dfs(board, i, 0);
        dfs(board, i, cols - 1);
    }

    for (int j = 0; j < cols; j++)
    {
        dfs(board, 0, j);
        dfs(board, rows - 1, j);
    }

    // Capture surrounded regions
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (board[i][j] == 'O')
            {
                board[i][j] = 'X';
            }
            else if (board[i][j] == '#')
            {
                board[i][j] = 'O';
            }
        }
    }
}

int main()
{
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}};

    solve(board);

    for (const vector<char> &row : board)
    {
        for (char cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
// *************************** Taking Input By users ******************************************************
// #include <iostream>
// #include <vector>

// using namespace std;
// // https://leetcode.com/problems/surrounded-regions/

// class Solution
// {
// public:
//     void convert(vector<vector<char>> &board)
//     {
//         int n = board.size();
//         int m = board[0].size();

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (board[i][j] == 'B')
//                 {
//                     board[i][j] = 'O';
//                 }
//                 else if (board[i][j] == 'O')
//                 {
//                     board[i][j] = 'X';
//                 }
//             }
//         }
//     }

//     bool isValid(int i, int j, int n, int m, vector<vector<char>> &board)
//     {
//         if (i >= 0 && i < n && j >= 0 && j < m && board[i][j] == 'O')
//         {
//             return true;
//         }
//         return false;
//     }

//     void dfs(vector<vector<char>> &board, int i, int j, int n, int m)
//     {
//         board[i][j] = 'B';

//         if (isValid(i + 1, j, n, m, board))
//         {
//             dfs(board, i + 1, j, n, m);
//         }
//         if (isValid(i - 1, j, n, m, board))
//         {
//             dfs(board, i - 1, j, n, m);
//         }
//         if (isValid(i, j + 1, n, m, board))
//         {
//             dfs(board, i, j + 1, n, m);
//         }
//         if (isValid(i, j - 1, n, m, board))
//         {
//             dfs(board, i, j - 1, n, m);
//         }
//     }

//     void solve(vector<vector<char>> &board)
//     {
//         int n = board.size();
//         int m = board[0].size();

//         for (int i = 0; i < n; i++)
//         {

//             // left -> top bottom
//             int j = 0;
//             if (board[i][j] == 'O')
//             {
//                 dfs(board, i, j, n, m);
//             }

//             j = m - 1;
//             // right -> top bootm
//             if (board[i][j] == 'O')
//             {
//                 dfs(board, i, j, n, m);
//             }
//         }

//         for (int j = 0; j < m; j++)
//         {

//             // top -> left right
//             int i = 0;
//             if (board[i][j] == 'O')
//             {
//                 dfs(board, i, j, n, m);
//             }

//             i = n - 1;
//             // bottom -> left right
//             if (board[i][j] == 'O')
//             {
//                 dfs(board, i, j, n, m);
//             }
//         }

//         convert(board);
//     }
// };

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<char>> board(n, vector<char>(m));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             char x;
//             cin >> x;
//             board[i][j] = x; // Assign the character to the board
//         }
//     }

//     Solution solution;
//     solution.solve(board);

//     cout << "Board after solving:" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

bool isSafe(vector<vector<int>> &arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(vector<vector<int>> &arr, int x, int y, int n, vector<vector<int>> &solarr)
{
    if (x == n - 1 && y == n - 1)
    {
        solarr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solarr[x][y] = 1;

        // left
        // if (ratInMaze(arr, x, y - 1, n, solarr))
        // {
        //     return true;
        // }
        // right
        if (ratInMaze(arr, x, y + 1, n, solarr))
        {
            return true;
        }
        // upward
        // if (ratInMaze(arr, x - 1, y, n, solarr))
        // {
        //     return true;
        // }
        // downward
        if (ratInMaze(arr, x + 1, y, n, solarr))
        {
            return true;
        }
        solarr[x][y] = 0; // backtrack
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> solarr(n, vector<int>(n, 0));
    if (ratInMaze(arr, 0, 0, n, solarr))
    {
        cout<<"YES"<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solarr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    cout<<"NO"<<endl;
    return 0;
}

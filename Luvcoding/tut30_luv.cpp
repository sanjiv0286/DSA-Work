// ***************Nesting In Vectors: C++ STL*****************************
// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
#define forn(i, n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

// ===========================================================================

// ***********************pair of vector************************************
// void printVec(vector<pair<int, int>> &v)
// {
//     cout << "size: " << v.size() << endl;
//     for (int i = 0; i < v.size(); ++i)
//     {
//         cout << v[i].first << " " << v[i].second << "\n";
//     }
//     cout << endl;
// }

//***********************array of vector***********************************
// void printVec(vector<int> &v)
// {
//     cout << "size: " << v.size() << endl;
//     for (int i = 0; i < v.size(); ++i)
//     {
//         cout << v[i] << " "
//              << "\n";
//     }
//     cout << endl;
// }
// ************************vector of vector*****************************
void printVec(vector<int> v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " "
             << "\n";
    }
    cout << endl;
}
// ========================================================================
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    // ***********************pair of vector************************************
    // vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    // printVec(v);
    //*****************array of vector *************************

    // int m;
    // cin >> m;
    // vector<int> v[m];
    // for (int i = 0; i < m; i++)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; ++j)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // for (int i = 0; i < m; ++i)
    // {
    //     printVec(v[i]);
    // }
    // cout << v[0][0] << " ";
    // cout << v[1][2];
    // *: row fix hai length varring hai col dynamic hai

    // ************************   Vector of Vector  *****************************

    int m;
    cin >> m;
    vector<vector<int>> v;
    for (int i = 0; i < m; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;  //*method 1
        // v.push_back(vector<int>()); //*method 2
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x); //*method 1
            // v[i].push_back(x); //*method 2
        }
        v.push_back(temp); //*method 1
    }
    v[0].push_back(10);
    v.push_back(vector<int>()); //*empty vector add kiya hai
    // for (int i = 0; i < m; ++i)
    for (int i = 0; i < v.size(); ++i)
    {
        printVec(v[i]);
    }
    cout << v[0][0] << " ";
    cout << v[1][2]<<" ";
    cout << v[0][3];

    return 0;
}
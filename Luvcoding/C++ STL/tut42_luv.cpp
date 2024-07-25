// ******************* Comparator Function *********************************

// DATE: 27-05-2023
// TIME: 16-28-26
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
        return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    forn(i, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    forn(i, n)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}

// ****************************************************

// 2d array ko only sort function se sort nhi kar sakte  .
// so we required custom sort function -> comparator function .

// ***************************************************

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool compare(const vector<int> &a, const vector<int> &b)
// {
//     return a[0] < b[0]; // Compare based on the first column
// }
// bool compare(const vector<int> &a, const vector<int> &b)
// {
//     return a[2] < b[2]; // Compare based on the third column
// }
// bool compare(const vector<int> &a, const vector<int> &b)
// {
//     return a[2] > b[2]; // Compare based on the third column decending order
// }

// int main()
// {
//     int n, m;
//     cin >> n;
//     cin >> m;
//     vector<vector<int>> arr(n, vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//*     // *******************************
//     sort(arr.begin(), arr.end());
//     //by defaltly 1 col. ke acc sort hoga ascending order
//     // if 1st element same hai to second col. element ke basis pr sort hoga
//     // **********************************
//     // sort(arr.begin(), arr.end(), greater<vector<int>>());
//     // by defaltly 1 col. ke acc sort hoga decending order
//     // ******************************************
//     // Sort the array based on comparator function
//     // sort(arr.begin(), arr.end(), compare);
//     // ************************************

//     cout << "\nSorted array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// **********************************************************

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool comp(const vector<int> &a, const vector<int> &b)
// {
//     if (a[1] == b[1])
//     {
//         return a[2] > b[2];
//     }
//     else
//     {
//         return a[1] < b[1];
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int>(m));

//     cout << "Enter the elements of the 2D array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     sort(arr.begin(), arr.end(), comp);

//     cout << "\nSorted array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


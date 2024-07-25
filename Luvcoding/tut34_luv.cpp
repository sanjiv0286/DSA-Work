// ************ Everything about C++ STL MAPS - Part 2: Unordered Maps & Multimaps *******

/*
Given N strings, print unique strings in any order with their frequency
N <= 10^5
|S| <= 100
*/

// // GOOD LUCK
// //     | |      |    Ķ
// //    (         |  Ķ
// //     | |      |Ķ
// //        )     |  Ķ
// //     | |   •  |    Ķ

// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         unordered_map<string, int> m;
//         int n;
//         cin >> n;
//         string s;
//         forn(i, n)
//         {
//             cin >> s;
//             m[s]++;
//             cout << m[s] << " ";
//         }
//         cout << endl;
//         for (auto &x : m)
//         {
//             cout << x.first << " " << x.second << endl;
//         }
//     }
//     return 0;
// }

// **************************************************************************

// *practice problem 1

// // DATE: 22-05-2023
// // TIME: 08-48-49
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// void solve()
// {
//     unordered_map<string, int> m;
//     int n;
//     cin >> n;
//     string s;
//     forn(i, n)
//     {
//         cin >> s;
//         m[s]++;
//     }
//     int ct = 0;
//     for (auto &x : m)
//     {
//         if (x.second == 2)
//         {
//             ct++;
//         }
//     }

//     cout << ct << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }


// ******************use mostly unordered map give better time complexity********

// https://www.geeksforgeeks.org/tag/cpp-map/

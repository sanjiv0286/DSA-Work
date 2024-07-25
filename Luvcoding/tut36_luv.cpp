// ********* solve pratice problem on multiset : luv c++ : practice problem 1**********

// // DATE: 22-05-2023
// // TIME: 13-35-37
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
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         multiset<ll> bags;
//         int n, k;
//         cin >> n >> k;
//         forn(i, n)
//         {
//             ll x;
//             cin >> x;
//             bags.insert(x);
//         }
//         ll total_candies = 0;
//         forn(i, k)
//         {
//             // auto last_it = (bags.end()--); // * NOT Allowed
//             auto last_it = (--bags.end()); // * Allowed
//             // auto last_it = (bags.end()); // *Allowed
//             // --last_it;
//             ll max_candi_ct = *last_it;
//             total_candies += max_candi_ct;
//             // * multiple values ko erase kar sakta hai don't use this here
//             // bags.erase(max_candi_ct);
//             bags.erase(last_it);
//             bags.insert(max_candi_ct / 2);
//         }
//         cout << total_candies << "\n";
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }

// ********************   practice problem 2  **********************

// // DATE: 22-05-2023
// // TIME: 14-38-43
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// // set<int> s;

// void solve()
// {
//     set<int> s;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         int ty, x;
//         cin >> ty >> x;
//         if (ty == 1)
//         {
//             s.insert(x);
//         }
//         else if (ty == 2)
//         {
//             // s.erase(x);
//             auto it = s.find(x);
//             if (it != s.end())
//             {
//                 s.erase(it);
//             }
//         }
//         else if (ty == 3)
//         {

//             if (s.find(x) != s.end())
//             {
//                 cout << "Yes"
//                      << "\n";
//             }
//             else
//             {
//                 cout << "No"
//                      << "\n";
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }

// ********************** practice problem : 3 *********************************

//  ************  correct ** method 1 ******************************

// #include <bits/stdc++.h>
// #include <unordered_set>

// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (ll i = 0; i < n; i++)

// const double PI = 3.14;
// // extern ll x;

// void solve()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         unordered_set<ll> s; // Moved inside the while loop
//         ll n, m;
//         cin >> n >> m;
//         forn(i, n)
//         {
//             ll x;
//             cin >> x;
//             s.insert(x);
//         }
//         for (ll i = n; i < n + m; i++)
//         {
//             ll y;
//             cin >> y; // galat kar diya yaha m student koto tu insert hi nhi kiya set me
//             auto it = s.find(y);
//             if (it != s.end())
//             {
//                 cout << "YES"
//                      << "\n";
//             }
//             else
//             {
//                 cout << "NO"
//                      << "\n";
//             }
//             s.insert(y);
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }

// ***********************  correct ** Method 2 ************************************

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N, M;
//         cin >> N >> M;

//         unordered_map<long long, int> candies;

//         for (int i = 0; i < N; i++)
//         {
//             long long candy;
//             cin >> candy;
//             candies[candy]++;
//             // cout << candies[candy] << " ";
//         }
//         // cout << endl;

//         for (int i = 0; i < M; i++)
//         {
//             long long candy;
//             cin >> candy;

//             if (candies[candy] > 0)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }

//             candies[candy]++;
//         }
//     }

//     return 0;
// }

// ********************** practice problem : 4 *********************************

// // DATE: 22-05-2023
// // TIME: 23-19-15
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
//     int t;
//     cin >> t;
//     string str;
//     int n;
//     while (t--)
//     {
//         set<string> s;
//         cin >> n;
//         forn(i, n)
//         {
//             cin >> str;
//             s.insert(str);
//         }
//         for (auto &x : s)
//         {
//             cout << x << endl;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }

// ********************** practice problem : 5 *********************************

// ******************** Important concept : revise time to time **********************

#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<int, multiset<string>> m;

    int t;

    cin >> t;

    while (t--)
    {

        int marks;

        string name;

        cin >> name >> marks;

        m[-1 * marks].insert(name);
    }

    for (auto it : m)
    {

        for (auto it2 : it.second)
        {

            cout << it2 << " " << (-1) * (it.first) << endl;
        }
    }

    return 0;
}

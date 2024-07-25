// *********************** FULLY correct **************************************

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

// ************************** partially correct  & wrong******************************

// #include <iostream>
// #include <unordered_set>
// #include <vector>

// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N, M;
//         cin >> N >> M;

//         unordered_set<long long> candies; // Using unordered_set for O(1) lookup
//         vector<long long> students(N + M);

//         // Input candies of existing students
//         for (int i = 0; i < N; i++)
//         {
//             cin >> students[i];
//             candies.insert(students[i]);
//         }

//         // Process the remaining students
//         for (int i = 0; i < M; i++)
//         {
//             cin >> students[N + i];
//             if (candies.find(students[N + i]) != candies.end())
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//             // candies.insert(students[N + i]); // Add the new student's candies to the set
//         }
//     }

//     return 0;
// }

// ***************************correct*************************************

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (ll i = 0; i < n; i++)

const double PI = 3.14;
// extern ll x;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        unordered_set<ll> s; // Moved inside the while loop
        ll n, m;
        cin >> n >> m;
        forn(i, n)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }
        for (ll i = n; i < n + m; i++)
        {
            ll y;
            cin >> y; // galat kar diya yaha m student koto tu insert hi nhi kiya set me
            auto it = s.find(y);
            if (it != s.end())
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
            s.insert(y);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}

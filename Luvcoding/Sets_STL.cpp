// DATE: 22-05-2023
// TIME: 14-38-43
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

// set<int> s;

void solve()
{
    set<int> s;
    ll t;
    cin >> t;
    while (t--)
    {
        int ty, x;
        cin >> ty >> x;
        if (ty == 1)
        {
            s.insert(x);
        }
        else if (ty == 2)
        {
            // s.erase(x);
            auto it = s.find(x);
            if (it != s.end())
            {
                s.erase(it);
            }
        }
        else if (ty == 3)
        {

            if (s.find(x) != s.end())
            {
                cout << "Yes"
                     << "\n";
            }
            else
            {
                cout << "No"
                     << "\n";
            }
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

// ================================================================

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     int numQueries;
//     cin >> numQueries;

//     set<int> elements;

//     while (numQueries--)
//     {
//         int queryType, element;
//         cin >> queryType >> element;

//         if (queryType == 1)
//         {
//             elements.insert(element);
//         }
//         else if (queryType == 2)
//         {
//             elements.erase(element);
//         }
//         else if (queryType == 3)
//         {
//             if (elements.count(element) > 0)
//             {
//                 cout << "Yes" << endl;
//             }
//             else
//             {
//                 cout << "No" << endl;
//             }
//         }
//     }

//     return 0;
// }

// ***************************problem************************************

// #include <iostream>
// #include <set>

// // std::set<int> s; // no problem on declare here

// void solve()
// {
//     std::set<int> s; // * problem because of this
//     int ty, x;
//     std::cin >> ty >> x;
//     if (ty == 1)
//     {
//         s.insert(x);
//     }
//     else if (ty == 2)
//     {
//         s.erase(x);
//     }
//     else if (ty == 3)
//     {
//         if (s.find(x) != s.end())
//         {
//             std::cout << "Yes" << std::endl;
//         }
//         else
//         {
//             std::cout << "No" << std::endl;
//         }
//     }
// }

// int main()
// {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     std::cout.tie(nullptr);
//     int t;
//     std::cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


// Everything about C++ STL MAPS - Part 1

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

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    map<int, string> m;
    m[1] = "abc"; // O(log(n)) // n --> map ka current size
    // insertion ki  time complexity also depend on key
    // if map<string, string > m; // time complexity = O(log n) * s.size(){string size}

    m[3] = "cejhchec";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[5] = "bveub";
    // ****************
    map<int, string>::iterator it;
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
        // all elements are stored in sorted order according to key values
    }
    cout << m.size() << endl;
    // ******************
    // m.clear();
    // **********************
    it = m.find(3);
    m.erase(4); // O(log n)
    m.erase(1);
    // m.erase(it);// segmentation falt
    if (it != m.end())
    { // so use this
        m.erase(it);
    }
    //**************** shortcut code  ******************
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
        // all elements are stored in sorted order according to key values
    }
    cout << m.size() << endl;
    // *********************************
    it = m.find(5); // O(log(n)) n --> map ka current size
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    // ******************************
    it = m.find(7); // O(log(n)) n --> map ka current size
    if (it == m.end())
    {
        cout << "No value"
             << "\n";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}

// ******************** solve pratice problem on map : luv c++ **********************

// ***************** problem **********************************

/*
Given N strings, print unique strings in lexiographical order with their frequency
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
//         map<string, int> m;
//         int n;
//         cin >> n;
//         string s;
//         forn(i, n)
//         {
//             cin >> s;
//             m[s]++;
//             // cout<<m[s]<<" ";
//         }
//         // cout<<endl;
//         for (auto &x : m)
//         {
//             cout << x.first << " " << x.second << endl;
//         }
//     }
//     return 0;
// }

// *****************************************************
//* practice problem 1

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
//     map<string, int> m;
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
//         // cout << x.first << " " << x.second << endl;
//     }
//     cout << ct << endl;
//     return 0;
// }

// =====================================================

// * pratice problem 2

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
//     // map<char,int>m;
//     unordered_map<char, int> m;
//     int n, ct = 0;
//     cin >> n;
//     string s;
//     cin >> s;
//     for (int i = 0; i < 2 * n - 2; i += 2)
//     {
//         m[s[i]]++;
//         auto it = m.find('a' + (s[i + 1] - 'A'));
//         if (it != m.end())
//         {
//             if (m['a' + (s[i + 1] - 'A')] > 1)
//             {
//                 m['a' + (s[i + 1] - 'A')]--;
//             }
//             else
//             {
//                 m.erase('a' + (s[i + 1] - 'A'));
//             }
//         }
//         else
//         {
//             ct++;
//         }
//     }
//     cout << ct << endl;
//     return 0;
// }

// =======================================================================

//* pratice problem 3

// #include <iostream>
// #include <unordered_map>
// #include <string>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     unordered_map<string, int> m;

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         m[s]++;

//         if (m[s] == 1)
//         {
//             cout << "OK"
//                  << "\n";
//         }
//         else
//         {
//             // cout << "NOT OK";
//             string new_s = s + to_string(m[s] - 1);
//             cout << new_s << "\n";
//         }
//     }

//     return 0;
// }

// ==============================================================================

//* pratice problem 4

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

// #define forn(i, q) for (int i = 0; i < q; i++)
// // #define forn(i,q) for (const int &q : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     unordered_map<string, int> m;
//     int q;
//     cin >> q;
//     int t, marks;
//     string name;
//     for (int i = 1; i <= q; i++)
//     {
//         cin >> t >> name;
//         if (t == 1)
//         {
//             cin >> marks;
//             m[name] += marks;
//         }
//         else if (t == 2)
//         {
//             m.erase(name);
//         }
//         else if (t == 3)
//         {
//             cout << m[name] << endl;
//         }
//     }
//     return 0;
// }

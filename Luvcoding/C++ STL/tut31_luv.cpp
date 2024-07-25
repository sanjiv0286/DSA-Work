// **********ITERATORS: Pointer like structure in C++ STL ******************

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
    // vector<int> v = {2, 3, 5, 6, 7};
    // forn(i, v.size())
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // // ******************************

    // vector<int>::iterator it = v.begin();
    // cout << (*(it + 1)) << endl;
    // for (it = v.begin(); it != v.end(); it++) //*******************
    // {
    //     cout << (*it) <<" ";
    // }
    // cout << endl;

    // ***********iterator point to pair *******************
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)//******************
    {
        cout << (*it).first << " " << (*it).second << endl;//***************
    }
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;//**********
         // it works same as cout << (*it).first << " " << (*it).second << endl;

    }
    return 0;
}

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
    map<string, int> m;
    int n;
    cin >> n;
    string s;
    forn(i, n)
    {
        cin >> s;
        m[s]++;
    }
    int ct = 0;
    for (auto &x : m)
    {
        if (x.second == 2)
        {
            ct++;
        }
        // cout << x.first << " " << x.second << endl;
    }
    cout << ct << endl;
    return 0;
}

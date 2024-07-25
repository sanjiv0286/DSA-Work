
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

#define forn(i, q) for (int i = 0; i < q; i++)
// #define forn(i,q) for (const int &q : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    unordered_map<string, int> m;
    int q;
    cin >> q;
    int t, marks;
    string name;
    for (int i = 1; i <= q; i++)
    {
        cin >> t >> name;
        if (t == 1)
        {
            cin >> marks;
            m[name] += marks;
        }
        else if (t == 2)
        {
            m.erase(name);
        }
        else if (t == 3)
        {
            cout << m[name] << endl;
        }
    }
    return 0;
}
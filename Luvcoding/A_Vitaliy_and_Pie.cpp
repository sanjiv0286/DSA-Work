
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
    // map<char,int>m;
    unordered_map<char, int> m;
    int n, ct = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < 2 * n - 2; i += 2)
    {
        m[s[i]]++;
        auto it = m.find('a' + (s[i + 1] - 'A'));
        if (it != m.end())
        {
            if (m['a' + (s[i + 1] - 'A')] > 1)
            {
                m['a' + (s[i + 1] - 'A')]--;
            }
            else
            {
                m.erase('a' + (s[i + 1] - 'A'));
            }
        }
        else
        {
            ct++;
        }
    }
    cout << ct << endl;
    return 0;
}
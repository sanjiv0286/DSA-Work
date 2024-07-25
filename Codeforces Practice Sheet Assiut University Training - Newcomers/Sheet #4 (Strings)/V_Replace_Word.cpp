// DATE: 15-01-2024
// TIME: 11-58-52
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    string s;
    cin>>s;
    regex p("EGYPT");
    cout<<regex_replace(s,p," ");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
// another ques same type
// https://codeforces.com/contest/208/problem/A
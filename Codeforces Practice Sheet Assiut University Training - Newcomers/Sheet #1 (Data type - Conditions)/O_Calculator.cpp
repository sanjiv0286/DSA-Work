// DATE: 16-05-2023
// TIME: 15-10-32
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
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '+')
    {
        cout << a + b;
    }
    else if (s == '-')
    {
        cout << a - b;
    }
    else if (s == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << a / b;
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

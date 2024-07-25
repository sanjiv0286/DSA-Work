// DATE: 05-06-2023
// TIME: 14-58-31
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

bool lucky(int n)
{
    int ct1 = 0, ct2 = 0;
    while (n != 0)
    {
        int d = n % 10;
        if (d == 4 || d == 7)
        {
            ct1++;
        }
        // else
        // {
        ct2++;
        // }
        n /= 10;
    }
    if (ct1 == ct2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int x = 0;
    for (int i = n; i <= m; i++)
    {
        if (lucky(i) == true)
        {
            cout << i << " ";
        }
        else
        {
            x++;
        }
    }
    if (x == m - n + 1)
    {
        cout << -1 << endl;
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

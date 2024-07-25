// DATE: 29-05-2023
// TIME: 23-21-58
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    long long int n;
    cin >> n;
    long long int ans = n * (n + 1) / 2;
    if (ans % 2 == 0)
        cout << "0";
    else
        cout << "1";
}

void testcase()
{
    int n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    cout << (sum & 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    // testcase();
    return 0;
}

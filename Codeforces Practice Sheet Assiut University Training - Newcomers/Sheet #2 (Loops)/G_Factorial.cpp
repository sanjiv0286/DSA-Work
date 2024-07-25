#include <bits/stdc++.h>
using namespace std;

long long int fac(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * fac(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = fac(n);
        cout << res << endl;
        // long long int fac = 1;
        // for (int i = 1; i <= n; i++)
        // {
        //     fac = fac * i;
        // }
        // cout << fac << endl;
    }

    return 0;
}

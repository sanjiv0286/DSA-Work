// DATE: 29-05-2023
// TIME: 12-31-09
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
    int n;
    cin >> n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    cout << reverse << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// ===============================================

// DATE: 29-05-2023
// TIME: 12-31-09
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int rev_num(int n, int reverse)
{
    if (n == 0)
    {
        return reverse;
    }
    reverse = reverse * 10 + n % 10;
    return rev_num(n / 10, reverse);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num = rev_num(n, 0);
        cout << num << endl;
    }

    return 0;
}

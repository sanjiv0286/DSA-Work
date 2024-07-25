
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int m = min(a, b);

    for (int i = m; i >= 1; i--)
    {
        if (((a % i) == 0) and ((b % i) == 0))
        {
            cout << i;
            break;
        }
    }
}

// **************************************************************

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

void solve()
{
    int m, n;
    cin >> m >> n;
    cout << __gcd(m, n); // use this function to cal. gcd of two numbers
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}
// *****************************************************

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n";
    return 0;
}

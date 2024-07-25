
// DATE: 01-06-2023
// TIME: 16-43-22
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

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
        int arr[n];
        ll mul = 1;
        forn(i, n)
        {
            cin >> arr[i];
            mul *= arr[i];
        }
        // cout<<mul;
        int ans = mul % 10;
        if (ans == 2 || ans == 3 || ans == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// ***********************************************

// DATE: 01-06-2023
// TIME: 16-43-22
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

int solve(ll &n)
{
    return n % 10;
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
        int arr[n];
        ll mul = 1;
        forn(i, n)
        {
            cin >> arr[i];
            mul *= arr[i];
        }
        // cout<<mul;
        int ans = solve(mul);
        if (ans == 2 || ans == 3 || ans == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
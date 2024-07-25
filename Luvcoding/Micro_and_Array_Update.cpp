// DATE: 31-05-2023
// TIME: 14-34-07
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

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
        // solve();
        int n, k;
        cin >> n >> k;
        int arr[n];
        forn(i, n)
        {
            cin >> arr[i];
        }
        int min = *min_element(arr, arr + n);
        if (k - min > 0)
        {
            cout << (k - min) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

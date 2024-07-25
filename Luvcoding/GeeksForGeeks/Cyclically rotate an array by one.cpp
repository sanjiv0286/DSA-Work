// DATE: 31-05-2023
// TIME: 16-22-05
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

    int n;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    rotate(arr, arr + (n - 1), arr + n);
    // starting point , jaha se jaha tak rtate karna hai vo
    forn(i, n)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

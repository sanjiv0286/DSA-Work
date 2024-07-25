// DATE: 29-05-2023
// TIME: 17-14-06
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

const int m = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    ll mul = 1;
    forn(i, n)
    {
        // mul = (arr[i] % m) * mul; // wrong
        mul = (arr[i] * mul) % m;
    }
    cout << mul;

    return 0;
}
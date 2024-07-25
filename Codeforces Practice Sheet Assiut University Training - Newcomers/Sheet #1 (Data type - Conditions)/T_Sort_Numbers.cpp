// DATE: 16-05-2023
// TIME: 15-39-34
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;


void sanjiv()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << min({a, b, c}) << endl
         << ((a + b + c) - (min({a, b, c}) + max({a, b, c}))) << endl
         << max({a, b, c}) << endl
         << endl;
    cout << a << endl
         << b << endl
         << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    sanjiv();
    
    return 0;
}

// ****** passing pointer to function ********************

// DATE: 01-06-2023
// TIME: 15-50-05
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

void solve(int *x)
{
    // x++;
    (*x)++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n = 9;
    cout << n << " ";
    // solve(n);
    solve(&n);
    cout << n << endl;
    return 0;
}

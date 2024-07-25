// ****** intro to recurrsion **********************


// *******************factorial*********************

// DATE: 28-05-2023
// TIME: 07-01-36
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}

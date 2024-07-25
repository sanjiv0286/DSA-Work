// DATE: 29-05-2023
// TIME: 12-24-28
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int sum_digit(int n)
{
    if (n == 0)
        return 0;
    return sum_digit(n / 10) + n % 10;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum_digit(n);
        cout << endl;
    }
    return 0;
}

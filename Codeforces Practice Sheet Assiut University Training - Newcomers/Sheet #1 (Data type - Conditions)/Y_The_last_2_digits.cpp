// ******************* Important ********************************

//****************** wrong ans on test 3 : signed integer overflow *******************************

// // DATE: 16-05-2023
// // TIME: 16-40-39
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// void solve()
// {
//     ll a, b, c, d;
//     cin >> a >> b >> c >> d;
//     cout << (a * b * c * d) % 100;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }

// ===============================  pass ===============================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d;
    e = a % 100;
    f = b % 100;
    g = c % 100;
    h = d % 100;
    long long i = (e * f * g * h);
    if (i % 100 <= 9)
    {
        cout << "0" << i % 100 << endl;
    }
    else
    {
        cout << i % 100 << endl;
    }

    return 0;
}
// =========================================================

// To calculate the last two digits of a large product,
//  we need to consider the properties of modular arithmetic.
// Instead of multiplying all the numbers first and then calculating the remainder
// we can take the remainder at each step to prevent overflow.
// Here's an updated version of the code that correctly calculates the last two digits
// ======================================================
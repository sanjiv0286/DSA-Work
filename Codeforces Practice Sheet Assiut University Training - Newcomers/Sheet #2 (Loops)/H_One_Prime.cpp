// DATE: 06-06-2023
// TIME: 10-29-08
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

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

void solve()
{
    int n;
    cin >> n;
    int ct = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // ct++;
            cout << "NO" << endl;
            return;
        }
    }
    // if (ct > 0)
    // {
    //     cout << "NO" << endl;
    // }
    // else
    // {
    cout << "YES" << endl;
    // }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}
// *********************

// // ETHN
// // DATE: 21-10-2022
// // TIME: 10-15-21
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int n1 = n;
//     int rev = 0;
//     // for (int i = n; i > 0; i = i / 10)
//     while (n)
//     {
//         int r = n % 10;
//         rev = rev * 10 + r;
//         n = n / 10;
//     }
//     cout << rev << "\n";

//     if (n1 != rev)
//     {
//         cout << "NO";
//     }
//     else
//     {
//         cout << "YES";
//     }
//     return 0;
// }
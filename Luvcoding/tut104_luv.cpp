// *overflow in this case for large value of n
// *so lets come into the picture dynamic programming

// // DATE: 03-06-2023
// // TIME: 17-01-18
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const int N = 1e5 + 10;
// const double PI = 3.14;
// // extern int x;

// int fib(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     cout << fib(n) << endl;
//     return 0;
// }

// ********* all test case passes using DP ****************

// DATE: 03-06-2023
// TIME: 17-20-35
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

int dp[N];

// fib(n) --> nth fib number int dp [N];

// *TOP DOWN Apporach
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1) //* memoisation
        return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    // Bottom up apporach
    // dp[0] = 0;
    // dp[1] = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     dp[i] = dp[i - 1] + dp[i - 2];
    // }
    cout << fib(n);
}
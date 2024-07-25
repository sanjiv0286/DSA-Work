//  https://www.codechef.com/problems/GCDQ

// Constraints

// Subtask #1: 40 points
// 2 ≤ T, N ≤ 100, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
// 1 ≤ L, R ≤ N and L ≤ R

// Subtask #2: 60 points
// 2 ≤ T, N ≤ 105, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
// 1 ≤ L, R ≤ N and L ≤ R
// Sum of N over all the test cases will be less than or equal to 10^6.

// Input
// 1
// 3 3
// 2 6 9
// 1 1
// 2 2
// 2 3
// Output
// 3
// 1
// 2

// ********************* METHOD : 1 - Brute Force Approach *********************************

// TIME COMPLEXITY : O(T*(N+(Q*N)))= O(T*N + T*Q*N)=O(N^3)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         int a[n + 10];
//         for (int i = 1; i <= n; ++i)
//         {
//             cin >> a[i];
//         }
//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             int gc = 0;
//             for (int i = 1; i <= l - 1; ++i)
//             {
//                 gc = __gcd(gc, a[i]);
//             }
//             for (int i = r + 1; i <= n; ++i)
//             {
//                 gc = __gcd(gc, a[i]);
//             }
//             cout << gc << endl;
//         }
//     }
// }

// ********************* METHOD : 2 - Optimised Approach using Prefix Array ******************

// TIME COMPLEXITY : O(T*(N+Q))= O(T*N + T*Q)=O(N^2)=10^6

// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

DATE : 09 - 12 - 2022 TIME : 22 - 55 - 00
#include <bits/stdc++.h>
    using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int forward[n + 10];
        int backward[n + 10];
        forward[0] = backward[n + 1] = 0;

        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; ++i)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
            // cout << forward[i] << " ";
        }
        for (int i = n; i >= 1; --i)
        {
            backward[i] = __gcd(backward[i + 1], a[i]);
            // cout << backward[i] << " ";
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
        }
    }

    return 0;
}
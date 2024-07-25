// https://www.hackerearth.com/practice/...

// ******************* METHOD :1 - BRUTE FORCE SOLUTION *********************

// O(T*Q*N)=O(N^3)= 10*10^5*10^5 = 10^10

// //    GOOD LUCK
// //    | |      |    Ķ
// //   (         |  Ķ
// //    | |      |Ķ
// //       )     |  Ķ
// //    | |   •  |    k

// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         string s;
//         cin >> s;
//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             int hsh[26];
//             for (int i = 0; i < 26; ++i)
//             {
//                 hsh[i] = 0;
//             }
//             l--;
//             r--;
//             for (int i = l; i <= r; ++i)
//             {
//                 hsh[s[i] - 'a']++;
//             }
//             int oddCt = 0;
//             for (int i = 0; i < 26; ++i)
//             {
//                 if (hsh[i] % 2 != 0)
//                     oddCt++;
//             }

//             if (oddCt > 1)
//                 cout << "NO\n";
//             else
//                 cout << "YES\n";
//         }
//     }

//     return 0;
// }

// INPUT -

// 2

// 5 5
// abcec
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4

// 5 5
// aabbc
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4

// OUTPUT -

// NO
// NO
// YES
// NO
// NO

// YES
// NO
// YES
// YES
// YES

// **************** METHOD : 2 - Optimisation using Hashing + Prefix *************************

//    GOOD LUCK
//    | |      |    Ķ
//   (         |  Ķ
//    | |      |Ķ
//       )     |  Ķ
//    | |   •  |    k

// DATE: 09-12-2022
// TIME: 22-55-00
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

const int N = 1e5 + 10;
ll hsh[N][26];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < 26; ++i)
            {
                hsh[i][j] = 0;
            }
        }
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 0; i < n; ++i)
        {
            hsh[i + 1][s[i] - 'a']++;
        }
        for (int i = 0; i < 26; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int oddCt = 0;
            for (int i = 0; i < 26; ++i)
            {
                int charCt = hsh[r][i] - hsh[l - 1][i];
                if (charCt % 2 != 0)
                    oddCt++;
            }
            if (oddCt > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}
//  https://www.hackerrank.com/challenges...

// ******************* METHOD :1 - BRUTE FORCE SOLUTION *******************************

// O(M*N + N)=O(M*N)=2*10^5 + 10^7

// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

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
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)
const int N = 1e7 + 10;
ll arr[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int mx = 0;
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        REP(i, a, b)
        {
            arr[i] = arr[i] + k;
        }
    }
    REP(i, 1, n)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    cout << mx << "\n";

    return 0;
}

// **************** METHOD : 2 - Optimisation Precomputation Trick ***************

// 0 (m + n) = 2*10^5 + 10 ^ 7 = 10 ^ 7

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

const int N = 1e7 + 10;
long long int ar[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;
        ar[b + 1] -= d;
        // cout << ar[a] << " ";
        // cout << ar[b + 1] << " ";
    }
    // cout << endl;
    for (int i = 1; i <= n; ++i)
    {
        ar[i] += ar[i - 1];
        // cout << ar[i] << " ";
    }
    // cout << endl;
    long long mx = -1;
    for (int i = 1; i <= n; ++i)
    {
        if (mx < ar[i])
        {
            mx = ar[i];
        }
    }
    cout << mx << endl;
    return 0;
}

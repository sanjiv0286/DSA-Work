/*
QUES(1)- test case a number N. Print its factorial for each test case % M where M = 10^9+7.
Constraints
1 <=T <= 10^5
1 <= N <= 10^5
*/

// *********************** METHOD : 1 ************************************

// TIME COMPLEXITY : 0(T*N) = 10^10

// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long fact = 1;
//         for (int i = 1; i <= n; ++i)
//         {
//             fact = (fact * i) % M;
//         }
//         cout << fact << endl;
//     }
// }

// *********************** METHOD : 2 ************************************

// TIME COMPLEXITY : 0(N) + O(T) = 10^5*2= O(N)

// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e5 + 10;
// long long fact[N];
// int main()
// {
//     fact[0] = fact[1] = 1;
//     for (int i = 2; i < N; ++i)
//     {
//         fact[i] = fact[i - 1] * i;
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << fact[n] << "\n";
//     }
//     return 0;
// }

// ================================================================================================
// ================================================================================================

/*
QUES(2) Given array a of N integers. Given Q queries and in each query given a number X, print
count of that number in array.
5 Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

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
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

// *********************** METHOD : 1 ************************************

// TIME COMPLEXITY : 0(Q) * O(T) = 10^10= O(N^2)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     int arr[n];
//     forn(i, n)
//     {
//         cin >> arr[i];
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         int ct = 0;
//         forn(i, n)
//         {
//             if (arr[i] == x)
//             {
//                 ct++;
//             }
//         }
//         cout << ct << "\n";
//     }

//     return 0;
// }

// *********************** METHOD : 2 ************************************

// TIME COMPLEXITY : 0(Q) + O(T) = 10^5*2= O(N)

const int N = 1e7 + 10;
int hsh[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << hsh[x] << "\n";
    }

    return 0;
}
// =================================================================
// INPUT :--
// 6
// 3 5 5 7 7 8
// 5
// 3
// 7
// 5
// 8
// 9
// OUTPUT--
// 1
// 2
// 2
// 1
// 0
// ====================================================================================

// ************************** IMPORTANT PRACTICE PROBLEMS  **************************

// PRACTICE QUESTIONS FOR HASHING & PREFIX SUM : FROM LUV BHIYA DESCRIPTION LINK

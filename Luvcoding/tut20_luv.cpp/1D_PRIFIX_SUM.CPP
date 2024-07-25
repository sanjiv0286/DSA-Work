// /*
// Given array a of N integers. Given Q queries and in each query given L and R print sum of array elemnts from index L to R (L, R included)
// Constraints
// 1 <= N <= 10^5
// 1 <= a[i] <= 10^9
// 1 <= Q <= 10^5
// 1 <= L, R <= N
// */

// // *********************** METHOD : 1 *************************************

// // TIME COMPLEXITY : O(N)+O(Q)=O(N)=10^5

#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int a[N];         // original array
int prefixSum[N]; // prefix sum array

int main()
{
    int n; // size of the array
    cin >> n;
    // prefixSum[0] = 0;

    // prefixSum[1] = a[1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }
    int q; // number of queries
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // calculate the sum of the range using the prefix sum array
        int sum = prefixSum[r] - prefixSum[l - 1];
        cout << sum << endl;
    }

    return 0;
}

// ******************* METHOD : 2 *****************************************

// TIME COMPLEXITY : O(N)+O(Q*N)=O(N^2)

#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 1e5 + 10;

int a[N]; // original array

int main()
{
    int n; // size of the array
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int q; // number of queries
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        ll sum = 0;

        for (int i = l; i <= r; i++)
        {
            sum  += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}


// 6
// 3 6 2 8 9 2
// 2
// 2 3 // input
// 8 //output
// 4 6  // input
// 19 //output
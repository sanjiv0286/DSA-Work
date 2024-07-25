// ****************************** TLE : TEST 5 *************************************

// // DATE: 13-06-2023
// // TIME: 06-09-29
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int ll
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (ll i = 0; i < n; i++)

// const ll N = 1e5 + 10;
// const double PI = 3.14;
// // extern ll x;

// void solve()
// {
//     ll n;
//     cin >> n;
//     ll ct = 0;
//     for (ll i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ct++;
//         }
//     }
//     if (ct == 3)
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;
// }

// ll main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// ****************************** TLE : test 63************************************

// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;
// #define ll long long int ll

// bool isPrime(long long int num)
// {
//     if (num < 2)
//         return false;

//     for (long long int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// bool isTPrime(long long int num)
// {
//     long long int sqrtNum = sqrt(num);
//     return sqrtNum * sqrtNum == num && isPrime(sqrtNum);
// }

// ll main()
// {
//     ll n;
//     cin >> n;
//     vector<long long int> numbers(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> numbers[i];
//     }
//     for (ll i = 0; i < n; i++)
//     {
//         if (isTPrime(numbers[i]))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// ************************************** wrong test 4***********************************************

#include <iostream>
#include <cmath>

using namespace std;

// Helper function to check if a number is prime
bool isPrime(long long int num)
{
    if (num < 2)
        return false;

    // Binary search to check divisors up to sqrt(num)
    long long int low = 2;
    long long int high = sqrt(num);

    while (low <= high)
    {
        long long int mid = low + (high - low) / 2;
        long long int div = num / mid;
        long long int rem = num % mid;

        if (rem == 0 && div >= low && div <= high)
            return false;

        if (rem < 0)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return true;
}

int main()
{
    long long int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;

        // Check if x is T-prime
        long long int sqrtX = sqrt(x);
        if (sqrtX * sqrtX == x && isPrime(sqrtX))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

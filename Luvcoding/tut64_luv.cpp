// **GCD and LCM using Euclid's Algorithm With Applications : Luv C++ tut 64

// ***************************** METHOD : 1  **********************************

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b;
    cin >> a;
    cin >> b;
    ll m = min(a, b);

    for (ll i = m; i >= 1; i--)
    {
        if (((a % i) == 0) and ((b % i) == 0))
        {
            cout << i << " ";
            break;
        }
    }
    int x = max(a,b);
    for (ll i = x; i < (a * b); i++)
    {
        if (((i % a) == 0) and ((i % b) == 0))
        {
            cout << i;
            break;
        }
    }
}

// ***************************** METHOD : 2 **********************************

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll a, b;
//     cin >> a;
//     cin >> b;
//     ll m = min(a, b);
//     int gcd;
//     for (ll i = m; i >= 1; i--)
//     {
//         if (((a % i) == 0) and ((b % i) == 0))
//         {
//             cout << i << " ";
//             gcd = i;
//             break;
//         }
//     }
//     cout << (a * b) / gcd;
// }

// ********************IMPORTANT METHOD : 3 **********************************

// Here is an optimized version of the code that uses the Euclidean algorithm
// to calculate the GCD of two numbers:
// **************** TIME COMPLEXICITY :--  O(log(n)) ********************

#include <bits/stdc++.h>
using namespace std;
#define ll long long

gcd(ll a, ll b)
{
    // a%b
    // base case
    if (b == 0)
    {
        return a;
    }
    // if (a % b == 0)
    // {
    //     return b;
    // }

    // recursive step
    return gcd(b, a % b);
}

int main()
{
    ll a, b;
    cin >> a;
    cin >> b;

    cout << gcd(a, b) << " ";

    // LCM is a*b / GCD
    cout << (a * b) / gcd(a, b);
}

// ********************IMPORTANT METHOD : 4 **********************************

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll a, b;
//     cin >> a;
//     cin >> b;

//     cout << __gcd(a, b) << " ";

//     // LCM is a*b / GCD
//     cout << (a * b) / __gcd(a, b);
// }

// *****************************IMPORTANT***************************************

// minimum fraction of a/b = (a/gcd(a,b))/(b/gcd(a,b))
//  https://www.codechef.com/problems/GCDQ ---> Luv C++ tut 21
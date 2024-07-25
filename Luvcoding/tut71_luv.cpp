// ****************** Prime Check & Prime Factorisation **********************

// ********************** (1) Prime check ******************************

// ********************** Method 1 ********************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int i, n;
//         bool is_prime = true;

//         // cout << "Enter a positive integer: ";
//         cin >> n;

//         // 0 and 1 are not prime numbers
//         if (n == 0 || n == 1)
//         {
//             is_prime = false;
//         }

//         // loop to check if n is prime
//         //    for (i = 2; i < n; ++i) // TIME COMPLEXITY : O(N)
//         //   for (i = 2; i <= n/2; ++i) // TIME COMPLEXITY : O(N/2)
//         for (i = 2; i * i <= n; ++i) // TIME COMPLEXITY : O(sqrt(n))
//         {
//             if (n % i == 0)
//             {
//                 is_prime = false;
//                 break;
//             }
//         }

//         if (is_prime)
//             cout << n << " is a prime number"
//                  << "\n";
//         else
//             cout << n << " is not a prime number"
//                  << "\n";
//     }

//     return 0;
// }

// ************************************ Method (2) *********************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* variable definition and initialization */
//         int n, i, c = 0;

//         /* Get user input */
//         // cout << "Enter any number n: ";
//         cin >> n;

//         /*logic*/
//         for (i = 1; i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 c++;
//             }
//         }
//         if (c == 2)
//         {
//             cout << n << " is a Prime number" << endl;
//         }
//         else
//         {
//             cout << n << " is not a Prime number" << endl;
//         }
//     }
//     return 0;
// }

// ==========================================================================

// *************************** (2) Prime Factorization **************************

// ************** Method (1) ********* Time complexity : O(N) ******************

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prime_factors;
    for (int i = 2; i <= n; ++i)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }

    for (int prime : prime_factors)
    {
        cout << prime << " ";
    }
    return 0;
}

// *************************** Method (2) : O(sqrt(n))****************

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ct = 0;
    vector<int> prime_factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            ct++;
            prime_factors.push_back(i);
            n /= i;
        }
    }
    // This is right for 36 = 2*2*3*3  😊😊
    // But This is wrong for 24 = 2*2*2*3 . so we use

    if (n > 1)
    {
        prime_factors.push_back(n);
        ct++;
    }
    cout << ct << endl;
    for (int prime : prime_factors)
    {
        cout << prime << " ";
    }
}
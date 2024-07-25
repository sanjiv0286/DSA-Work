// *practice problem 1

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b, n;
//     cin >> a ;
//     cin >> b ;

//     for (int n = a; n <= b; n++)
//     {
//         // if (n >= a && n <= b)
//         // {
//         //     switch (n)
//         //     {
//         //     case 1:
//         //         cout << "one";
//         //         break;
//         //     case 2:
//         //         cout << "two";
//         //         break;
//         //     case 3:
//         //         cout << "three";
//         //         break;
//         //     case 4:
//         //         cout << "four";
//         //         break;
//         //     case 5:
//         //         cout << "five";
//         //         break;
//         //     case 6:
//         //         cout << "six";
//         //         break;
//         //     case 7:
//         //         cout << "seven";
//         //         break;
//         //     case 8:
//         //         cout << "eight";
//         //         break;
//         //     case 9:
//         //         cout << "nine";
//         //         break;
//         //     }
//         // }
//         if (n == 1)
//         {
//             cout << "one"<<endl;
//         }
//         else if (n == 2)
//         {
//             cout << "two"<<endl;
//         }
//         else if (n == 3)
//         {
//             cout << "three"<<endl;
//         }
//         else if (n == 4)
//         {
//             cout << "four"<<endl;
//         }
//         else if (n == 5)
//         {
//             cout << "five"<<endl;
//         }
//         else if (n == 6)
//         {
//             cout << "six"<<endl;
//         }
//         else if (n == 7)
//         {
//              cout << "seven"<<endl;
//         }
//         else if (n == 8)
//         {
//             cout << "eight"<<endl;
//         }
//         else if (n == 9)
//         {
//             cout << "nine"<<endl;
//         }
//         else if (n % 2 == 0 && n > 9)
//         {
//             cout << "even"<<endl;
//         }
//         else
//         {
//             cout << "odd"<<endl;
//         }
//     }

//     return 0;
// }

// *****************************************
// *practice problem 2

// // DATE: 29-05-2023
// // TIME: 12-15-22
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     for (;;)
//     {
//         int x;
//         cin >> x;
//         if (x == 42)
//             break;
//         cout << x << endl;
//     }
//     return 0;
// }

// *****************************************
// *practice problem 3

// // DATE: 29-05-2023
// // TIME: 12-24-28
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int sum_digit(int n)
// {
//     if (n == 0)
//         return 0;
//     return sum_digit(n / 10) + n % 10;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << sum_digit(n);
//         cout << endl;
//     }
//     return 0;
// }

// *****************************************
// *practice problem 4

// // DATE: 29-05-2023
// // TIME: 12-31-09
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int rev_num(int n, int reverse)
// {
//     if (n == 0)
//     {
//         return reverse;
//     }
//     reverse = reverse * 10 + n % 10;
//     return rev_num(n / 10, reverse);
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int num = rev_num(n, 0);
//         cout << num << endl;
//     }

//     return 0;
// }

// *****************************************
// *practice problem 5

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int w;
//     cin >> w;
//     if (w > 2)
//     {
//         if (w % 2 == 0)
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }
//     }
//     else{
//         cout<<"NO";
//     }

//     return 0;
// }

// practice problem - 6,7,8 , 12 ,15
// https://www.hackerearth.com/practice/

// *****************************************
// *practice problem 9 -- very imp

// // DATE: 29-05-2023
// // TIME: 17-14-06
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// const int m = 1e9 + 7;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll n;
//     cin >> n;
//     ll arr[n];
//     forn(i, n)
//     {
//         cin >> arr[i];
//     }
//     ll mul = 1;
//     forn(i, n)
//     {
//         // mul = (arr[i] % m) * mul; // wrong
//         mul = (arr[i] * mul) % m;
//     }
//     cout << mul;

//     return 0;
// }

// *****************************************
// *practice problem 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if ((i % 3 == 0) && (i % 5 == 0))
//             cout << "FizzBuzz\n";
//         else if (i % 3 == 0 && (i % 5 != 0))
//             cout << "Fizz\n";
//         else if (i % 5 == 0 && (i % 3 != 0))
//             cout << "Buzz\n";
//         else
//             cout << i << "\n";
//     }
//     return 0;
// }

// *****************************************
// *practice problem 11

#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n % 2 != 0)
        cout << 0;
    else
        cout << (n / 2 - 1) / 2;
    return 0;
}

// *practice problem - 13,16 printing pattern

// *practice problem 14
// DATE: 29-05-2023
// TIME: 23-21-58
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    long long int n;
    cin >> n;
    long long int ans = n * (n + 1) / 2;
    if (ans % 2 == 0)
        cout << "0";
    else
        cout << "1";
}

void testcase()
{
    int n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    cout << (sum & 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    // testcase();
    return 0;
}

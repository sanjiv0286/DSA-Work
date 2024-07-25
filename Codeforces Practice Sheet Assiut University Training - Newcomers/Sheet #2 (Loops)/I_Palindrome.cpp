
// ************************* reverse a number *********************************

// DATE: 19-08-2023
// TIME: 02-16-01
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

void solve()
{
    int n;
    cin >> n;
    // ******************************
    // string s = to_string(n);
    // reverse(s.begin(), s.end());
    // // cout<<s;
    // int rev = stoi(s);
    // if (rev == n)
    // {
    //     cout << rev << "\n"
    //          << "YES"
    //          << "\n";
    // }
    // ********************************
    int rev = 0;
    while (n != 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << rev;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// *****************reverse of a number using recurrsion **************

// DATE: 29-05-2023
// TIME: 12-31-09
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int rev_num(int n, int reverse)
{
    if (n == 0)
    {
        return reverse;
    }
    reverse = reverse * 10 + n % 10;
    return rev_num(n / 10, reverse);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num = rev_num(n, 0);
        cout << num << endl;
    }

    return 0;
}

// *************************** solution *********************

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1 = n; //*******think ***********
    int rev = 0;
    // for (int i = n; i > 0; i = i / 10)
    while (n) // while(n!=0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << rev << "\n";

    // if (n != rev)//wrong
    if (n1 != rev)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}

// *********************************************************

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

// void solve()
// {
//     int n;
//     cin >> n;
//     int n1 = n;
//     int reverse = 0;
//     while (n != 0)
//     {
//         reverse = reverse * 10 + n % 10;
//         n = n / 10;
//     }
//     cout << reverse << endl;
//     if (n1 != reverse)
//     {
//         cout << "NO";
//     }
//     else
//     {
//         cout << "YES";
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     solve();

//     return 0;
// }

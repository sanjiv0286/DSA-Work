// DATE: 16-05-2023
// TIME: 14-54-43
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()
#define print(a) cout << a << "\n";
#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    char c;
    cin >> c;
    // if (c >= 48 && c <= 57)
    // {
    //     cout << "IS DIGIT";
    // }
    // if (c >= 65 && c <= 90)
    // {
    //     cout << "ALPHA"
    //          << "\n"
    //          << "IS CAPITAL";
    // }
    // else if (c >= 97 && c <= 122)
    // {
    //     cout << "ALPHA"
    //          << "\n"
    //          << "IS SMALL";
    // }
    // ---------------
    if (isdigit(c))
    {
        print("IS DIGIT");
    }
    else
    {
        print("ALPHA");
        if (isupper(c))
        {
            print("IS CAPITAL");
        }
        else if (islower(c))
        {
            print("IS SMALL");
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}

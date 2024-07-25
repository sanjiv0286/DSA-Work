// ****** Inbuilt STL Algorithms & Lambda Function - Part 2 ****

// *Lambda Functions
// *All_of Algorithm
// *Any_of Algorithm
// *None_ of Algorithm

// *************************************************

// DATE: 24-05-2023
// TIME: 21-14-14
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    cout << [](int x)
    { return x + 2; }(2)
         << endl; // lamda function
    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(50, 50) << endl;
}
void algo()
{
    int n;
    cin >> n;
    vector<int> v;
    forn(i, n)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x > 0; })
         << endl;
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
        solve();
        algo();
    }
    return 0;
}

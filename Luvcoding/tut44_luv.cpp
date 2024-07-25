// ****************C++ STL Inbuilt Algorithms - Part1 ********

//  1 . max_element
//  2 . min_element
//  3 . accumulate
//  4 . count
//  5 . find
//  6 . reverse

// **************************************************************

// DATE: 24-05-2023
// TIME: 20-09-42
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
    int n;
    cin >> n;
    vector<int> v;
    forn(i, n)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // ****** Time complexity : O(n) *****************

    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin() + 2, v.end()) << endl;
    int sum = accumulate(v.begin(), v.end(), 5);
    cout << sum << endl;
    cout << count(v.begin(), v.end(), 6) << endl;
    auto it = find(v.begin(), v.end(), 7);
    if (it == v.end())
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND" << endl;
    }
    cout << *find(v.begin(), v.end(), 6) << endl;
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}

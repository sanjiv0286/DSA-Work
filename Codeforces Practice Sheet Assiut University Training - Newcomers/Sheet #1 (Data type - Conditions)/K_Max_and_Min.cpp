// DATE: 16-05-2023
// TIME: 14-08-59
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
    int a, b, c;
    cin >> a >> b >> c;
    // int x = min(a, min(b, c));
    // int y = max(a, max(b, c));
    int x = min({a, b, c});
    int y = max({a, b, c});
    cout << x << " ";
    cout << y;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    // -------------------------
    // solve();
    // ---------------------------
    int a[3];
    forn(i,3){
        cin>>a[i];
    }
    // sort(a,a+3);
    // cout<<a[0]<<" "<<a[2];
    cout<<*min_element(a,a+3)<<" "<<*max_element(a,a+3);
    // ----------------------------

    return 0;
}


// DATE: 17-06-2023
// TIME: 03-03-51
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

int lower_bound(vector<int> &v, int ele)
{
    int lo = 0;
    int hi = v.size() - 1;
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] < ele)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] >= ele)
        return lo;
    if (v[hi] >= ele)
        return hi;
    return -1;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, v.size())
    {
        cin >> v[i];
    }
    sort(all(v));
    int ele;
    cin >> ele;
    int lb = lower_bound(v, ele);
    cout << ele << " " << lb << endl;
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

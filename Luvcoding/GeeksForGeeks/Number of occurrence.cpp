// DATE: 30-05-2023
// TIME: 22-06-57
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    unordered_map<int, int> m;
    int n;
    int x;
    cin >> n >> x;
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    cout << m[x] << endl;

    cout << endl;
    return 0;
}

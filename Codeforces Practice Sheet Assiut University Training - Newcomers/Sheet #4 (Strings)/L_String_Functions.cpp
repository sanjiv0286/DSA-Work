// DATE: 14-01-2024
// TIME: 05-25-54
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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    cout << s.substr(0, 6) << endl; //*********(starting index,size)
    sort(s.begin() + 4, s.begin() + 9);
    cout << s << endl;
    s.pop_back();//*******
    cout << s << endl;
    cout << s.back() << endl;//********
    string org = s;
    reverse(s.begin(), s.begin() + 6);
    cout << s << endl;
    cout << s.front() << endl;//*********
    s.push_back('i');//*******
    cout << s << endl;
    cout<<s[4]<<endl;
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

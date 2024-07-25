// DATE: 29-05-2023
// TIME: 23-36-38
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
    string s;
    getline(cin, s);
    cin.ignore();
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}

// DATE: 29-05-2023
// TIME: 23-52-43
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
    string o_s = s;
    reverse(s.begin(), s.end());
    string rev_string = s;
    // reverse(s.begin(), s.end());
    // string o_s = s;
    if (rev_string == o_s)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";
    return 0;
}

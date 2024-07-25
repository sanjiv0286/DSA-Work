// DATE: 29-05-2023
// TIME: 23-32-06
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

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cin.ignore();
    cout << s1.size() << " " << s2.size() << endl;
    cout << s1 + s2 << endl;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;
    return 0;
}

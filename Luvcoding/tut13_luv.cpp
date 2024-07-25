// ****************** contest 1 ****************************

// ETHN
// DATE: 03-10-2022
// TIME: 21-07-54
#include <bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string s;
        // getline(cin, s);
        // cin.ignore();
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            // s[i] = upper(s[i]);
            s[i] = 'A' + (s[i] - 'a');
        }
        cout << s << endl;
    }
}

// **********************************************************


// DATE: 01-06-2023
// TIME: 16-43-22
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        ll mul = 1;
        forn(i, n)
        {
            cin >> arr[i];
            mul *= arr[i];
        }
        // cout<<mul;
        int ans = mul % 10;
        if (ans == 2 || ans == 3 || ans == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// *****************************************************


// DATE: 01-06-2023
// TIME: 17-01-38
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

// const ll N = 1e5 + 10;
const double PI = 3.14;
// extern ll x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        int n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        ll ans = 0;
        // cout << s;
        forn(i, n)
        {
            ll x = pow(2, i);
            if (s[i] == '1')
            {
                ans = ans + x * 1;
            }
            else
            {
                ans = ans + 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

// ******************************************************

// DATE: 01-06-2023
// TIME: 17-26-09
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const int N = 1e5 + 10;
const double PI = 3.14;
// extern int x;

void solve()
{
    ll n;
    cin >> n;
    cout << n * 4<<endl;
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
    }
    return 0;
}

// ****************************************************


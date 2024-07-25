// DATE: 31-05-2023
// TIME: 12-21-05
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
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
        // solve();
        int g, p;
        cin >> g >> p;
        int n;
        cin >> n;
        vector<pair<int, int>> v_p(n);
        forn(i, n)
        {
            cin >> v_p[i].first >> v_p[i].second;
        }
        // for (auto &x : v_p)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }
        // int mini = min(g, p);
        // cout << mini << endl;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v_p[i].first == 1 && v_p[i].second == 1)
            {
                // sum1 += g * v_p[i].first + p * v_p[i].second;
                // sum2 += p * v_p[i].first + g * v_p[i].second;
                sum1 += g + p;
                sum2 += g + p;
            }
            if (v_p[i].first == 0 && v_p[i].second == 1)
            {
                // sum1 += g * v_p[i].first + p * v_p[i].second;
                // sum2 += p * v_p[i].first + g * v_p[i].second;
                sum1 += p;
                sum2 += g;
            }
            if (v_p[i].first == 1 && v_p[i].second == 0)
            {
                // sum1 += g * v_p[i].first + p * v_p[i].second;
                // sum2 += p * v_p[i].first + g * v_p[i].second;
                sum1 += g;
                sum2 += p;
            }
        }
        if (sum1 > sum2)
        {
            cout << sum2 << endl;
        }
        else
            cout << sum1 << endl;
        // cout << endl;
    }

    return 0;
}

//**************************************************************

#include <iostream>
using namespace std;
int main()
{
    int cgreen, cpurple, t, n;
    cin >> t;
    while (t--)
    {
        cin >> cgreen >> cpurple;
        cin >> n;
        int cost1 = 0, cost2 = 0, first, second;
        for (int i = 0; i < n; i++)
        {
            cin >> first >> second;
            cost1 = cost1 + (first * cgreen) + (second * cpurple);
            cost2 = cost2 + (first * cpurple) + (second * cgreen);
        }
        if (cost1 > cost2)
        {
            cout << cost2 << endl;
        }
        else
        {
            cout << cost1 << endl;
        }
    }
}
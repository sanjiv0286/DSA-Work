// ************* Array ******************************

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,a+n);
      for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

// ******Number of occurrence****************************

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

// ************ Cost of balloons **********************

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

// *************Micro and Array Update******************

// DATE: 31-05-2023
// TIME: 14-34-07
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
    ll t;
    cin >> t;
    while (t--)
    {
        // solve();
        int n, k;
        cin >> n >> k;
        int arr[n];
        forn(i, n)
        {
            cin >> arr[i];
        }
        int min = *min_element(arr, arr + n);
        if (k - min > 0)
        {
            cout << (k - min) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

// *************** Cyclically rotate an array by one **********

// DATE: 31-05-2023
// TIME: 16-22-05
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

    int n;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    rotate(arr, arr + (n - 1), arr + n);
    // starting point , jaha se jaha tak rtate karna hai vo
    forn(i, n)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

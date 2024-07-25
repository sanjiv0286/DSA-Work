// DATE: 24-05-2023
// TIME: 11-10-12
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void arr()
{
    // ll n;
    // cin >> n;
    int a[6];
    forn(i, 6)
    {
        cin >> a[i];
    }
    sort(a, a + 6);
    forn(i, 6)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // ************** lower_bound : time complexity O(logn) ******************

    // int *ptr1 = lower_bound(a, a + 6, 5);
    // cout << *ptr1 << endl;
    // int *ptr2 = lower_bound(a, a + 6, 6);
    // cout << *ptr2 << endl;
    // int *ptr3 = lower_bound(a, a + 6, 26); // garbage valve
    // cout << *ptr3 << endl;
    // int *ptr4 = lower_bound(a, a + 6, 27);
    // if (ptr4 == a + 6)
    // {
    //     cout << "Not Found" << endl;
    // }
    // ************** upper_bound : time complexity O(logn) ******************
    // int *ptr = upper_bound(a, a + 6, 27);
    // if (ptr == a + 6)
    // {
    //     cout << "Not Found" << endl;
    // }
    // int *ptr = upper_bound(a + 4, a + 6, 5);
    // cout << *ptr << endl;
}

// ********** mostly used with vect these functions ********************

void vect()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    forn(i, n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    auto it = upper_bound(v.begin(), v.end(), 5);
    cout << *it << endl;
    auto itr = upper_bound(v.begin(), v.end(), 26);
    if (itr == v.end())
    {
        cout << "Not Found" << endl;
    }
}

// ***********mostly people use this but they find TLE ******************
void pet()
{
    // int n;
    // cin >> n;
    set<int> s;
    // forn(i, n)
    forn(i, (int)(1e6))
    {
        // int x;
        // cin >> x;
        // s.insert(x);
        s.insert(rand());
    }
    for (auto &x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    // auto it = lower_bound(s.begin(), s.end(), 5); // not good method o(n) function
    // cout << (*it) << endl;
    // forn(i, (int)(1e6))
    // {
    //     auto it = lower_bound(s.begin(), s.end(), rand()); // TLE O(n) function
    // }
     forn(i, (int)(1e6))
    {
        auto it = s.lower_bound( rand());    // good method O(log(n)) 
    }
    // for map m.lower_bound( rand()) but work only on key these functions
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    // arr();  // for array
    // vect(); // for vect
    pet(); // for set

    return 0;
}


//  ************* solve practie ques ************************
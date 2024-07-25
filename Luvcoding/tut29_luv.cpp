//  **********************pairs and vectors*******************************

// ======================================================================
// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

//  **********************pairs *******************************

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    //************************
    pair<int, string> p;
    cin >> p.first >> p.second;
    // p = make_pair(2, "abc");
    // p = {2, "abcd"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    // *******************************
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; ++i)
    {
        cout << p_array[i].first << " " << p_array[i].second << "\n";
    }
    return 0;
}

//  ********************** vectors*******************************

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    vector<int> v(5);
    // vector<int> v(5,3);

    v.push_back(7); //--->O(1)
    cout << " ";

    v.push_back(6); //--->O(1)
    cout << " ";

    v.push_back(8); //--->O(1)

    v.pop_back(); //--->O(1)
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // ***********************************************************************

    vector<int> v1 = v; //*--->O(n) --->expansive operation copy banti hai
    v1.push_back(10);
    v1.push_back(10);
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;
    forn(i, v1.size())
    {
        cout << v1[i] << " ";
    }

    // *******************************

    // if copy nhi banana hai use &
    vector<int> &v1 = v; //*--->O(n) time com. bachti hai --->expansive operation dono ko modifiy karta hai
    v1.push_back(10);
    v1.push_back(45);

    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;

    forn(i, v1.size())
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << v.size(); //*--->O(1)

    // ********************************

    int n;
    cin >> n;
    vector<int> v;
    forn(i, n)
    {
        int x;
        cin >> x;
        v.push_back(x);
        // cout << " ";
        // cout << v.size();
    }
    // cout << endl;
    forn(i, n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

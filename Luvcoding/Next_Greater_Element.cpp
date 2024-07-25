// DATE: 25-05-2023
// TIME: 22-24-58
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    forn(i, n)
    {
        cout << v[i] << " ";
        if (nge[i] == (-1))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << v[nge[i]] << endl;
        }
        // cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }

    return 0;
}

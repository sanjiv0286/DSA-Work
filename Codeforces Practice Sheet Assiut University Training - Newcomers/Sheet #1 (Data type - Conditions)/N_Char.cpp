// DATE: 16-05-2023
// TIME: 15-02-41
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()
#define print(a) cout<<a<<"\n"
#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    
    // char c;
    // cin >> c;
    // if (c >= 65 && c <= 90)
    // {
    //     c = c + 32;
    //     cout << (char)c;
    // }
    // else
    // {
    //     c = c - 32;
    //     cout << (char)c;
    // }
    // ------------------
    char c;
    cin>>c;
    if(islower(c)){
        print(char(c-32));
    }
    else{
        print(char(c+32));
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();
    return 0;
}

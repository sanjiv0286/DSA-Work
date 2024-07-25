// DATE: 16-05-2023
// TIME: 15-20-14
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()
#define print(a) cout << a << "\n"

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    // int x;
    // cin>>x;
    // while(x>=10){
    //     x=x/10;
    // }
    // // cout<<x;
    // if(x%2==0){
    //     cout<<"EVEN";
    // }
    // else{
    //     cout<<"ODD"<<endl;
    //     // cout<<max({5,349,347,173,4827,233,3,238284});
    // }
    // ---------------
    int n;
    cin >> n;
    while (n > 9)
    {
        n /= 10;
    }
    if ((n & 1) == 0)
        print("EVEN");

    else if ((n & 1) == 1)
    {
        print("ODD");
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

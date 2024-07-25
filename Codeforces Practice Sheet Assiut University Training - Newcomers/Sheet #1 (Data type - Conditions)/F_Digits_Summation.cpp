//DATE: 16-05-2023 
//TIME: 12-10-19 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
//extern int x;

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll r1,r2;
    r1 = a%10;
    r2=b%10;
    cout<<r1+r2;

}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
solve();
return 0;
} 

//DATE: 16-05-2023 
//TIME: 12-02-55 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double pi=3.141592653;
//extern int x;

void solve()
{
    double r;
    cin>>r;
    cout<<fixed<<setprecision(9)<<pi*pow(r,2);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
solve();
return 0;
} 

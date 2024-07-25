//DATE: 16-05-2023 
//TIME: 14-04-51 
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
    int a,b;
    cin>>a>>b;
    if(a%b==0 || b%a==0){
        cout<<"Multiples";
    }
    else
    cout<<"No Multiples";

}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
solve();
return 0;
} 

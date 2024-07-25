//DATE: 16-05-2023 
//TIME: 13-53-34 
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
    float a, b;
    cin>>a >>b;
    cout<<"floor "<<a<<" / "<< b<<" = "<<floor(a/b)<<"\n";
    cout<<"ceil "<<a<<" / "<< b<<" = "<<ceil(a/b)<<"\n";
    cout<<"round "<<a<<" / "<< b<<" = "<<round(a/b)<<"\n";
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 

solve();

return 0;
} 

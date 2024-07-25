
//GOOD LUCK
//    | |      |    Ķ
//   (         |  Ķ
//    | |      |Ķ     
//       )     |  Ķ
//    | |   •  |    Ķ

//DATE: 09-12-2022 
//TIME: 22-55-00 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
    vector<int> v = {2, 3, 5, 6, 7};
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // ******************************
    vector<int>::iterator it = v.begin();
    cout << (*(it + 1)) << endl;
    for (it = v.begin(); it != v.end(); it++)//***************
    {
        cout << (*it) <<" ";
    }
    cout << endl;
    // *****Ranged based for loop*******
    for (int x:v){
        cout<<x<<" ";
        // Original vector ke element ki copy aati hai 
    }
    cout << endl;
    // for access original elements not copy, use &(reference)
     for (int &x:v){
        cout<<x<<" ";
        // Original vector ke element  aate hai  fast process
    }
    cout << endl;
    // ***** iterator in Vector of pair ********************
    vector<pair<int,int>>p={{1,2},{2,3},{3,4}};
    for(pair<int ,int>&x:p){
        // syntex is large and complex for this use auto keyword
        cout<<x.first<<" "<<x.second<<endl;
    }
    //********************* Auto keyword in c++ 11 *****************************
     for (auto &x:v){
        cout<<x<<" ";
        //auto keyword automatically data type determine kr leta hai and
        //  & ke karan Original vector ke element  aate hai  fast process
    }
    cout << endl;
    for(auto &x:p){
        cout<<x.first<<" "<<x.second<<endl;
        //auto keyword automatically data type determine kr leta hai 

    }


return 0;
} 
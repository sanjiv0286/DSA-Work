#include <algorithm>
#include <bits/stdc++.h>
const int N = 256;
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size()!=s2.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // if (s1 == s2)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    // *******************************************
    int count[N] = {0};
    for (int i = 0; i < n; i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<N;i++){
        if(count[i]!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
// ************* Sieve Algorithm: How to find Prime Numbers Optimally ********************

// ******************* Time Complexity : N * [log(log(N))] ***************************************

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime (N, 1);

int main() {
    isPrime [0] = isPrime [1] = false;
    for(int i = 2; i<N; ++i) {
        if(isPrime[i] == true){
            for(int j = 2*i; j<N;j+=i) { 
            isPrime [j] = false;
            }
        }
    }
    // for(int i = 1; i < 100; ++i){ 
    //     cout << isPrime[i] << endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int num ;
        cin>>num ;
        if(isPrime[num]==true){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }

    return 0;
}
// if Q=10^7 and N = 10^7

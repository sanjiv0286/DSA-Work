// *** Divide and concure *****Binary Exponentiation : Recurrsive Method**************************

#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;

// **************************************
// *here a,b < 10^9                   //*
// *what happen when a,b <10^18       //*
// *what happen m = 1e18 +7           //*
// *------------> Large exp...        //*
// **************************************

int binaryExpRecurr(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binaryExpRecurr(a, b / 2);
    if (b & 1)
    { // odd number
        return (a * ((res * 1LL * res) % m)) % m;
    }
    else
    { // even number
        return (res * 1LL * res) % m;
    }
}

int binaryExpIterative(long long a, long long b)
{
    // a = a % m;
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = binaryMul(ans, a);
        }
        a = binaryMul(a , a);
        b = b >> 1;
    }
    return ans;
}

int binaryMul(long long a, long long b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % m;
        }
        a = (a + a) % m;
        b = b >> 1;
    }
    return ans;
}



int main()
{
    long long a;
    long long b;
    cin >> a >> b;
    cout << binaryExpRecurr(a, b) << endl;
    cout << binaryExpIterative(a, b);
    
}
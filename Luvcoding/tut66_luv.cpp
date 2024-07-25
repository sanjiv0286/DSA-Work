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

int binaryExpIterative(int a, int b)
{
    // a = a % m;
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return ans;
}



int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << binaryExpRecurr(a, b) << endl;
    cout << binaryExpIterative(a, b);
}
// *** Divide and concure *****Binary Exponentiation : Recurrsive Method**************************

#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;

int binaryExpRecurr(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binaryExpRecurr(a, b / 2);
    if (b & 1)
    { // odd number
        return (a * ((  res * 1LL * res) % m)) % m;
    }
    else
    { // even number
        return (res * 1LL * res) % m;
    }
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << binaryExpRecurr(a, b);
}
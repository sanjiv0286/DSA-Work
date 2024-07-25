#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    temp = temp * temp;
    if (b % 2 == 0)
    {
        return temp;
    }
    else
    {
        return temp * a;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    ll ans = power(a, b);
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    cout << "FACTORIAL OF THE NUMBER IS :" << endl;
    cout << fact;
    // cout<<__gcd(0,10);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 13; i++)
    {
        int res;
        res = n * i;
        cout << n << " * " << i << " = " << res << "\n";
    }
    return 0;
}
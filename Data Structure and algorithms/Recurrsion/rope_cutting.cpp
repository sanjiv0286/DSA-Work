#include <bits/stdc++.h>
using namespace std;

int cutrod(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int x = cutrod(n - a, a, b, c);
    int y = cutrod(n - b, a, b, c);
    int z = cutrod(n - c, a, b, c);
    int res = max({x, y, z});
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = cutrod(n, a, b, c);
    cout << ans << endl;

    return 0;
}
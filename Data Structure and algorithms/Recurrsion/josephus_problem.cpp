#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    return (jos(n - 1, k) + k) % n;
}

int myjos(int n, int k)
{
    return jos(n, k) + 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = jos(n, k);
    // starting with 0 indices
    cout << ans << endl;
    int res = myjos(n, k);
    // starting with 0 indices
    cout << res << endl;
    return 0;
}
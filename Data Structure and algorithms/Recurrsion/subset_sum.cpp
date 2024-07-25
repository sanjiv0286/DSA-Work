#include <bits/stdc++.h>
using namespace std;

int subsetSum(int n, vector<int> &v, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }

    return subsetSum(n - 1, v, sum) + subsetSum(n - 1, v, sum - v[n - 1]);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum;
    cin >> sum;
    int ans = subsetSum(n, v, sum);
    cout << ans << endl;
    return 0;
}
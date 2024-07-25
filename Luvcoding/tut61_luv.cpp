// *given a array of n integer . all integers are in even count expect one .
// *we have to find that number in array which has odd count .
// *Time complexity : O(1)

// ********** IMPORTANT PROBLEM FOR INTERVIEW ******************************

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans ^= x;
    }
    cout << ans << endl;
    return 0;
}
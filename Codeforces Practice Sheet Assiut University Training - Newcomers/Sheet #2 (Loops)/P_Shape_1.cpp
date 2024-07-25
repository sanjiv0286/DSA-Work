// CODE WRITTEN BY SK
// DATE: 26-10-2022
// TIME: 11-26-00
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
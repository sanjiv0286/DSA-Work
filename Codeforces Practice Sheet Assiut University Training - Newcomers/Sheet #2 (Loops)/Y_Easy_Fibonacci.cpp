
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cout << "Enter the number of terms: ";
    cin >> n;

    int fn = 0, sn = 1;

    // cout << "Fibonacci Series: ";

    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            cout << fn << " ";
            continue;
        }
        if (i == 1)
        {
            cout << 1 << " ";
            continue;
        }
        int next = fn + sn;
        fn = sn;
        sn = next;
        cout << next << " ";
    }

    return 0;
}

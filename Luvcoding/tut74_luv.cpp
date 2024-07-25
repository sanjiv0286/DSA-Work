#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int a, m;
    cin >> a >> m;
    for (int i = 1; i <=m-1; i++)
    {
        if ((a * i) % m == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}

// *************************** fermat little theorm for large m value *****************


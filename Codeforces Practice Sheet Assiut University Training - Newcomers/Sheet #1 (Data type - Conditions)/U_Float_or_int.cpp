#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;
    int m = (int)n;
    if (n - m > 0)
    {
        cout << "float"
             << " " << m << " " << fixed << setprecision(3) << n - m;
    }
    else
    {
        cout << "int"
             << " " << m;
    }

    return 0;
}
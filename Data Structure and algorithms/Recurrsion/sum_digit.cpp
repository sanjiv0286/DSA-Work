#include <bits/stdc++.h>
using namespace std;

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum_of_digit(n / 10) + n % 10;
}

int main()
{

    int n;
    cin >> n;
    int ans = sum_of_digit(n);
    cout << ans << endl;
    return 0;
}
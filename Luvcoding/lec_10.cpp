// ETHN
// DATE: 03-10-2022
// TIME: 09-08-52
#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int a,b;
    cin >> a>>b;
    cout << digit_sum(a) + digit_sum(b);

    return 0;
}
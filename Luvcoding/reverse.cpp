#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int reverse = 0;
        // while(n) is equivalent to while(n!=0)
        while (n != 0)
        {
            reverse = reverse * 10 + n % 10;
            n = n / 10;
        }
        cout << "REVERSE OF THE NUMBER IS : ";
        cout << reverse << endl;
    }

    return 0;
}

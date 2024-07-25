// *************Basics of Factors and Divisors related problems ************

// **********(1) TIME COMPLEXITY : O(N) ***********************************

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ct = 0;
//     int sum = 0;
//     for (int i = 1; i <= n; ++i)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//             ct++;
//             sum += i;
//         }
//     }
//     cout << ct << " " << sum << endl;
// }

// **********(2) TIME COMPLEXITY : O[sqrt(n)] ***********************************

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ct = 0;
    int sum = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << endl;
            ct += 1;
            sum += i;
            if (n / i != i)
            {
                sum += n / i;
                ct += 1;
            }
        }
    }
    cout << ct << " " << sum << endl;
}
// perfect square ke case me  ye code nhi chlega
// ***************************************************************************
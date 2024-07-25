
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         int m = i;
//         int check = 0;
//         for (int j = 1; j <= m; j++)
//         {
//             if (m % j == 0)
//             {
//                 check++;
//             }
//         }
//         if (check == 2)
//         {
//             cout << m << " ";
//         }
//     }

//     return 0;
// }
// **********************************************

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n > 1)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
                        }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
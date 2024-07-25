// #include <bits\stdc++.h>

// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     int cnt = 0;
//     // cout<<s.size();
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] > 64)
//         {
//             // if(s[i-1]==' ' || s[i-1]<=64)cnt++;
//             if (s[i - 1] <= 64)
//             {
//                 cnt++;
//                 // cout << s[i - 1] << endl;
//             }
//         }
//     }
//     cout << cnt;
//     return 0;
// }
// =========================================================================
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (i == 0 || !isalpha(s[i - 1]))
            {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}

// =========================================================================

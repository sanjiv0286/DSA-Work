#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;

        if (m[s] == 1)
        {
            cout << "OK"
                 << "\n";
        }
        else
        {
            // cout << "NOT OK";
            string new_s = s + to_string(m[s] - 1);
            cout << new_s << "\n";
        }
    }

    return 0;
}

// *******************************************
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     unordered_map<string, int> m;

//     // for (int i = 0; i < n; i++)
//     while (n--)
//     {
//         string s;
//         cin >> s;

//         if (m.find(s) == m.end())
//         {
//             m.insert({s, 1});
//             cout << "OK" << endl;
//         }
//         else
//         { // s already exists in hash table
//             int ct = m[s];
//             // cout<<count;
//             string new_s = s + to_string(ct);
//             // cout<< to_string(count);
//             m[s] = ct + 1;
//             m.insert({new_s, 1});
//             cout << new_s << endl;
//         }
//     }

//     return 0;
// }

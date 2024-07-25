// DATE: 30-05-2023
// TIME: 01-09-47
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string or_s, s;
    getline(cin, or_s);
    cin.ignore();
    // cin >> or_s;
    int i = 0;
    while (i < or_s.length())
    {

        if (or_s[i] == 'G')
        {
            s.push_back('G');
            i++;
        }
        else if ((or_s[i] == '(') && (or_s[i + 1] == ')'))
        {
            s.push_back('o');
            i += 2;
        }
        else if (or_s[i] == '(' && or_s[i + 1] == 'a' && or_s[i + 2] == 'l' && or_s[i + 3] == ')')
        {
            s.push_back('a');
            s.push_back('l');
            i += 4;
        }
    }
    cout << s;

    return 0;
}

//*********************************************************

// #include <iostream>
// #include <string>
// using namespace std;

// string interpretCommand(string command) {
//     string result;
//     int i = 0;
//     while (i < command.length()) {
//         if (command[i] == 'G') {
//             result += 'G';
//             i++;
//         } else if (command[i] == '(' && command[i + 1] == ')') {
//             result += 'o';
//             i += 2;
//         } else if (command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
//             result += "al";
//             i += 4;
//         }
//     }
//     return result;
// }

// int main() {
//     string command;
//     cin >> command;
//     string interpretation = interpretCommand(command);
//     cout << interpretation << endl;
//     return 0;
// }

// ETHN
// DATE: 03-10-2022
// TIME: 21-07-54
#include <bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string s;
        // getline(cin, s);
        // cin.ignore();
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            // s[i] = upper(s[i]);
            s[i] = 'A' + (s[i] - 'a');
        }
        cout << s << endl;
    }
}

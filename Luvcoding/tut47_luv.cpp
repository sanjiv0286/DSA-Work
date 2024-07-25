// ***** Generate Parenthesis: Advanced Recursion and Backtracking *****

// DATE: 28-05-2023
// TIME: 09-56-43
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;
vector<string> valid;
void generateparanthesis(string &s, int open, int close)
{
    // base condition
    if (open == 0 && close == 0)
    {
        valid.push_back(s);
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        generateparanthesis(s, open - 1, close);
        s.pop_back(); // *backtraking
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            generateparanthesis(s, open, close - 1);
            s.pop_back(); // *backtraking
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    generateparanthesis(s, n, n);
    for (auto str : valid)
    {
        cout << str << endl;
    }
    return 0;
}

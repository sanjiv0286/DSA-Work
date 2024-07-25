#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbol = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};

string solve(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbol[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (symbol[top] + symbol[bracket] != 0)
            {
                return "NO";
            }
        }
    }
    if (st.empty())
        return "YES";

    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}

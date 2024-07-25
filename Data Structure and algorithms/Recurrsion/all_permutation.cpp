#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<string> res;

    void solve(string s, int i)
    {
        if (i >= s.size())
        {
            res.push_back(s);
            return;
        }
        // ***remove dublicate permutation
        unordered_set<int> st;
        // ******************************
        for (int j = i; j < s.size(); j++)
        {
            // **********************
            if (st.find(s[j]) != st.end())
            {
                continue;
            }
            st.insert(s[j]);
            // **************************
            swap(s[i], s[j]);
            solve(s, i + 1);
            swap(s[i], s[j]);
        }
    }
    vector<string> find_permutation(string s)
    {
        int index = 0;
        solve(s, index);
        return res;
        sort(s.begin(), s.end());
        // **********************************
        // res.push_back(s);
        // while (next_permutation(s.begin(), s.end()))
        // {
        //     res.push_back(s);
        // }
        // return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

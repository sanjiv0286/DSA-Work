
#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<int, multiset<string>> m;

    int t;

    cin >> t;

    while (t--)
    {

        int marks;

        string name;

        cin >> name >> marks;

        m[-1 * marks].insert(name);
    }

    for (auto it : m)
    {

        for (auto it2 : it.second)
        {

            cout << it2 << " " << (-1) * (it.first) << endl;
        }
    }

    return 0;
}

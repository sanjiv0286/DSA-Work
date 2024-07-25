#include <bits/stdc++.h>
using namespace std;

int main()
{

    int w;
    cin >> w;
    if (w > 2)
    {
        if (w % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}
// =========================================
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int w;
    cin >> w;
    if (w >= 4)
    {
        if (w % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if (w <= 3)
    {
        cout << "NO";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a ;
    cin >> b ;


    for (int n = a; n <= b; n++)
    {
        // if (n >= a && n <= b)
        // {
        //     switch (n)
        //     {
        //     case 1:
        //         cout << "one";
        //         break;
        //     case 2:
        //         cout << "two";
        //         break;
        //     case 3:
        //         cout << "three";
        //         break;
        //     case 4:
        //         cout << "four";
        //         break;
        //     case 5:
        //         cout << "five";
        //         break;
        //     case 6:
        //         cout << "six";
        //         break;
        //     case 7:
        //         cout << "seven";
        //         break;
        //     case 8:
        //         cout << "eight";
        //         break;
        //     case 9:
        //         cout << "nine";
        //         break;
        //     }
        // }
        if (n == 1)
        {
            cout << "one"<<endl;
        }
        else if (n == 2)
        {
            cout << "two"<<endl;
        }
        else if (n == 3)
        {
            cout << "three"<<endl;
        }
        else if (n == 4)
        {
            cout << "four"<<endl;
        }
        else if (n == 5)
        {
            cout << "five"<<endl;
        }
        else if (n == 6)
        {
            cout << "six"<<endl;
        }
        else if (n == 7)
        {
             cout << "seven"<<endl;
        }
        else if (n == 8)
        {
            cout << "eight"<<endl;
        }
        else if (n == 9)
        {
            cout << "nine"<<endl;
        }
        else if (n % 2 == 0 && n > 9)
        {
            cout << "even"<<endl;
        }
        else
        {
            cout << "odd"<<endl;
        }
    }

    return 0;
}
// ETHN
// DATE: 24-09-2022
// TIME: 14-43-32

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "Origem";
    }
    else if (y == 0)
    {
        cout << "Eixo X";
    }
    else if (x == 0)
    {
        cout << "Eixo Y";
    }
    else if (x > 0 && y > 0)
    {
        cout << "Q1";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Q4";
    }
    return 0;
}
// ******************* Important ********************************

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, d; //, e, f;
    cin >> a >> b >> c >> d;
    // e = pow(a, b);// wrong ans on test 12
    // f = pow(c, d);
    // *The pow function returns a double value, which can introduce floating-point precision errors.
    // *Due to these precision errors, the comparison between e and f may produce unexpected results,
    // *especially when dealing with large numbers.

    // if (e > f)
    if (b * log(a) > d * log(c))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

//=============================================================

//* In the code you provided, the log function is used without explicitly specifying the base.
// *By default, the log function in C++ returns the natural logarithm (base e) of its argument.
// *So in the line if (b * log(a) > d * log(c)), the base of the logarithm used is the natural logarithm,
// *which is logarithm base e.
// *If you want to calculate the logarithm with a different base, you can use the log10 function for base 10 logarithm
// *the log2 function for base 2 logarithm. These functions are available in the <cmath> library.
// *For example, if you want to compare the exponents using the base 10 logarithm,
// *you can modify the code as follows:

// ===============================================================

#include <bits/stdc++.h>
// #include <iostream>
// #include <cmath>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * log10(a) > d * log10(c))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

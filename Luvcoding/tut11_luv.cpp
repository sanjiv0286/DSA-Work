// ****Functions, C++ references ******

// // DATE: 01-06-2023
// // TIME: 13-12-17
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int increment(int n)
// {
//     n++;
//     return n;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     cout << n << endl;
//     n = increment(n);//error
//     // int value = increment(n);
//     cout << n << endl;
//     // cout << value << endl;
//     return 0;
// }

// *******************************************************

// // DATE: 01-06-2023
// // TIME: 13-12-17
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// // void swap(int a, int b)// *pass by value and
// void swap(int &a, int &b) // *pass by reference
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void increment(int &n, int m) // *pass by value and pass by reference
// // void increment(int n)
// {
//     n++;
//     m++;
//     // return n;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     // ***********************
//     int n, m;
//     cin >> n >> m;
//     cout << n << m << endl;
//     increment(n, m);
//     cout << n << m << endl;
//     // *************************
//     int a, b;
//     cin >> a >> b;
//     swap(a, b);
//     cout << a << " " << b << endl;
//     // *******************
//     return 0;
// }

// *c language me ye sab pointers ke through karte hai
// *c me reference exist hi nhi karte

// ***************pass array in function *******************

//*string

// // DATE: 01-06-2023
// // TIME: 14-06-12
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// // void solve(string s) // pass by value
// void solve(string &s) // pass by reference
// {
//     s = "sanjiv kushwaha";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     string s = "abcd";
//     cout << s << endl;
//     solve(s);
//     cout << s << endl;

//     return 0;
// }

//******************************************
// *ek data structure jo ye rule follow nhi karte
// *array kabhi bhi ye rule follow nhi karte hai aur always
// *by reference pass hote hai
// ********************************************

// *array

// // DATE: 01-06-2023
// // TIME: 14-17-58
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// // void solve(int a[][]) // error
// void solve(int b[][20]) // right
// // void solve(int b[10][20]) // right
// {
//     b[0][0] = 19;
// }

// // *by default array always by reference pass hote hai

// // void func(int a[10]) // 1d array
// void func(int a[])
// {
//     a[0] = 19;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     // ***********************************************
//     int a[10];
//     a[0] = 7;
//     cout << a[0] << " ";
//     func(a);
//     cout << a[0] << endl;
//     // ************************************************
//     int b[10][20];
//     b[0][0] = 7;
//     cout << b[0][0] << " ";
//     solve(b);
//     cout << b[0][0] << endl;
//     // ************************************************

//     return 0;
// }

// *********************************************************

// // DATE: 01-06-2023
// // TIME: 14-53-50
// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 10;

// // kabhi kabhi kisi compiler me chal jata hai
// // but this is not a valid method
// // intial array ka size yaha excess nhi kar sakte

// void func(int n, int m, int a[][m])
// {
//     a[0][0] = 20;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     // * array ko func me competative programming ke duran pass karna
//     //  *avoid karte hai
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     a[0][0] = 7;
//     cout << a[0][0] << " ";
//     func(a);
//     cout << a[0][0] << endl;
//     // *jab kabhi esa array jo main me diya hai func me bhi excess karna hai
//     // *to  globally declare kar lo

//     return 0;
// }

// *****************************************************

// DATE: 01-06-2023
// TIME: 15-01-58
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

// const ll N = 1e5 + 10;
const ll N = 1e3 + 10;
const double PI = 3.14;
// extern int x;
ll a[N][N];

void func()
{
    a[0][0] = 20;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    a[0][0] = 7;
    cout << a[0][0] << " ";
    func();
    cout << a[0][0] << endl;
    return 0;
}

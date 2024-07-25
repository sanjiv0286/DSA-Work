// ***************** array sum using recurrsion ***********

// // DATE: 28-05-2023
// // TIME: 06-43-26
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int array_sum(int n, int a[])
// {
//     if (n < 0)
//         return 0;
//     return array_sum(n - 1, a) + a[n];
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     int a[n];
//     forn(i, n)
//     {
//         cin >> a[i];
//     }
//     cout << array_sum(n, a);
//     return 0;
// }

// *****************digit_sum using recurrsion************

// //DATE: 28-05-2023
// //TIME: 06-55-27
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a)*(a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// //extern int x;

// int digit_sum(int n)
// {
//     if(n==0) return 0;
//     return digit_sum(n/10)+(n%10);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(NULL);
// int n;
// cin >> n;
// cout<<digit_sum(n);
// return 0;
// }

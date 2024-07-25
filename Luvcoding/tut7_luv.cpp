// *practice problem 1

// // DATE: 29-05-2023
// // TIME: 23-32-06
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     string s1, s2;
//     getline(cin, s1);
//     getline(cin, s2);
//     cin.ignore();
//     cout << s1.size() << " " << s2.size() << endl;
//     cout << s1 + s2 << endl;
//     swap(s1[0], s2[0]);
//     cout << s1 << " " << s2 << endl;
//     return 0;
// }

// ******************************************************
// *practice problem 2

// // DATE: 29-05-2023
// // TIME: 23-36-38
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     string s;
//     getline(cin, s);
//     cin.ignore();
//     reverse(s.begin(), s.end());
//     cout << s;
//     return 0;
// }

// ******************************************************
// *practice problem 3

// // DATE: 29-05-2023
// // TIME: 23-52-43
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     string s;
//     getline(cin, s);
//     cin.ignore();
//     string o_s = s;
//     reverse(s.begin(), s.end());
//     string rev_string = s;
//     // reverse(s.begin(), s.end());
//     // string o_s = s;
//     if (rev_string == o_s)
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO";
//     return 0;
// }

// ******************************************************
// *practice problem 4

//  *practice problem 5,9
// https://www.hackerearth.com/practice/

// ******************************************************
// *practice problem 6

// // DATE: 30-05-2023
// // TIME: 01-09-47
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     string or_s, s;
//     getline(cin, or_s);
//     cin.ignore();
//     // cin >> or_s;
//     int i = 0;
//     while (i < or_s.length())
//     {

//         if (or_s[i] == 'G')
//         {
//             s.push_back('G');
//             i++;
//         }
//         else if ((or_s[i] == '(') && (or_s[i + 1] == ')'))
//         {
//             s.push_back('o');
//             i += 2;
//         }
//         else if (or_s[i] == '(' && or_s[i + 1] == 'a' && or_s[i + 2] == 'l' && or_s[i + 3] == ')')
//         {
//             s.push_back('a');
//             s.push_back('l');
//             i += 4;
//         }
//     }
//     cout << s;

//     return 0;
// }


// ******************************************************
// *practice problem 7

// ******************************************************
// *practice problem 8

// ******************************************************
// *practice problem 10 : Basics of String Manipulation
// // DATE: 14-01-2024
// // TIME: 23-34-46
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());
//     cout << s << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <iostream>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void bubbleSort(char arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    char S[N];
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    // Sorting the string using Bubble Sort
    bubbleSort(S, N);

    // Printing the sorted string
    for (int i = 0; i < N; i++)
    {
        cout << S[i];
    }

    return 0;
}

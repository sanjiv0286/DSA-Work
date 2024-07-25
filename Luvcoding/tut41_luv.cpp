// ********************* Inbuilt Sort in C++ STL *************
// inbuilt sort (sort function) it is the mixtureof three sorting algorithm.
// Quicksort, Heapsort and Insertion Sort
// ********************************************************
// DATE: 27-05-2023
// TIME: 16-50-01
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    forn(i, n)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

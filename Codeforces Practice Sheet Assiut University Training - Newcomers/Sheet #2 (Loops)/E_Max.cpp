#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

int main()
{
    int n;
    cin >> n;
    int arr[N];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = *max_element(arr, arr + n);
    cout<<m;
    return 0;
}
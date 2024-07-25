#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[n];
    cout << "ENTER THE SIZE OF AN ARRAY :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[n];
    }
    int sum = 0, prdt = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        prdt = prdt * i;
    }
    cout << "SUM OF THE ARRAY :" << sum << endl;
    cout << "PRODUCT OF THE ARRAY :" << prdt << endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[10], n, i, sum = 0, pro = 1;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     cout << "\nEnter the elements of the array : ";
//     for (i = 0; i < n; i++)
//     cin >> arr[i];
//     for (i = 0; i < n; i++)
//     {
//         sum += arr[i];
//         pro *= arr[i];
//     }
//     cout << "\nSum of array elements : " << sum;
//     cout << "\nProduct of array elements : " << pro;
//     return 0;
// }
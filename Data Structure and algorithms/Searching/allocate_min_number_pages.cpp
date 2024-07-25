// ************************** Brute Force ***************************************
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// // Helper function to calculate the sum of elements from index b to e in the array
// int sum(int arr[], int b, int e) {
//     int s = 0;
//     for (int i = b; i <= e; i++) {
//         s += arr[i];
//     }
//     return s;
// }

// // Function to find the minimum number of pages
// int minPages(int arr[], int n, int k) {
//     if (k == 1) return sum(arr, 0, n - 1);
//     if (n == 1) return arr[0];

//     int res = INT_MAX;

//     for (int i = 1; i < n; i++) {
//         res = min(res, max(minPages(arr, i, k - 1), sum(arr, i, n - 1)));
//     }

//     return res;
// }

// int main() {
//     int arr[] = {10,20 , 30 ,40};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 2; // Number of students

//     cout << "The minimum number of pages allocated to the maximum loaded student is: " << minPages(arr, n, k) << endl;

//     return 0;
// }
// ************************** Binary search *******************************

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// Function to check if it is feasible to allocate books such that no student reads more than 'ans' pages
bool isFeasible(int arr[], int n, int k, long long ans) {
    long long ct = 1; // Start with one student
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if ((sum + arr[i]) > ans) {
            ct++; // Increase student count
            sum = arr[i]; // Start counting pages for the new student
        } else {
            sum += arr[i];
        }
    }

    return (ct <= k);
}

// Function to find minimum number of pages
long long findPages(int arr[], int n, int k) {
    if (k > n) {
        return -1; // Not enough books for each student
    }

    long long sum = 0;
    long long maxi = *max_element(arr, arr + n);

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    long long l = maxi;
    long long h = sum;
    long long res = 0;

    while (l <= h) {
        long long mid = (l + h) / 2;
        if (isFeasible(arr, n, k, mid)) {
            res = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return res;
}

int main() {
    int arr[] = {12, 34, 67, 90}; // Array of book pages
    int n = sizeof(arr) / sizeof(arr[0]); // Number of books
    int k = 2; // Number of students

    long long result = findPages(arr, n, k);
    if (result != -1) {
        cout << "The minimum number of pages allocated to the maximum loaded student is: " << result << endl;
    } else {
        cout << "Not enough books for each student." << endl;
    }

    return 0;
}

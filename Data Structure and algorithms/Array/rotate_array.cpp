// To solve the rotation problem in-place without using extra space, you can use the reversal algorithm. The reversal algorithm involves three steps:

// Reverse the first D elements of the array.
// Reverse the remaining N-D elements of the array.
// Reverse the entire array.

class Solution
{
public:
    void rotateArr(int arr[], int d, int n)
    {
        d = d % n;
        rotate(arr, arr + d, arr + n);
    }
};

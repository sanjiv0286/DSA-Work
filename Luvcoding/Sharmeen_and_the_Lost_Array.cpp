// ********************* wrong ANS *****************
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> clues(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> clues[i];
        }

        vector<int> arr(n, 1); // Initialize the array with all elements as 1

        for (int i = 0; i < n - 1; i++)
        {
            if (clues[i] == 0)
            {
                arr[i + 1] = arr[i]; // If Xi = 0, then ith element is equal to (i+1)th element
            }
            else if (clues[i] == 1)
            {
                arr[i + 1] = arr[i] + 1; // If Xi = 1, then ith element is less than (i+1)th element
            }
            else if (clues[i] == 2)
            {
                arr[i] = arr[i + 1] + 1; // If Xi = 2, then ith element is greater than (i+1)th element
            }
        }

        // Print the restored array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

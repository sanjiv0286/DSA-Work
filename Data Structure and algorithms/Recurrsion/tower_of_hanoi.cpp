// Tower of hanoi Problem
#include <bits/stdc++.h>
using namespace std;

int TOH(int n, char A, char B, char C)
{

    if (n == 1)
    {
        cout << "Move disk 1 from source " << A << " to " << C << endl;
        return 1;
    }
    int moves1 = TOH(n - 1, A, C, B);
    cout << "Move disk " << n << " from source " << A << " to " << C << endl;
    int moves2 = TOH(n - 1, B, A, C);
    return moves1 + 1 + moves2;
}

int main()
{
    int n;
    cin >> n;
    char source = 'A', auxiliary = 'B', destination = 'C';
    // char a = 'A', b = 'B', c = 'C';
    cout << "The sequence of moves involved in the Tower of Hanoi are:\n";
    int ans = TOH(n, source, auxiliary, destination);
    cout << "Total Number of Moves are : " << ans << endl;
    return 0;
}
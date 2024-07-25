
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, size, start, end;
  cin >> n;
  size = 2 * n - 1;
  start = 0;
  end = size - 1;
  int a[size][size];
  while (n != 0)
  {
    for (int i = start; i <= end; i++)
    {
      for (int j = start; j <= end; j++)
      {
        if (i == start || i == end || j == start || j == end)
        {
          a[i][j] = n;
        }
      }
    }
    ++start;
    --end;
    --n;
  }
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout << a[i][j] << " ";
    }
    // cout << "\n";
    cout << endl;
  }
  return 0;
}
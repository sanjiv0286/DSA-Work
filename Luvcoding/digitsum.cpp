#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cout<<"ENTER NUMBER OF TEST CASES"<<endl;
	cin >> t;
	while (t--)
	{
		int n, l, sum;
		cin >> n;
		sum = 0;
		while (n != 0)
		{
			l = n % 10;
			sum = sum + l;
			n = n / 10;
		}
		cout << "SUM OF DIGIT :" << sum;
	}

	return 0;
}


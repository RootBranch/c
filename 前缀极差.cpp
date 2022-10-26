#include <iostream>
using namespace std;
const int num = 1e6 + 5;
int a[num], b[num];
int main()
{
	int n,q;
	cin >> n>>q;
	int max = 0, min = 100;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
		if (i!=1)
		{
			b[i] = max - min;
		}
	}
	for (int i = 1; i <= q; i++)
	{
		 cout << b[i]<<' ';
	}
	return 0;
 }
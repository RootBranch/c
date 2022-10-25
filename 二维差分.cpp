#include <iostream>
using namespace std;
int a[1100][1100],d[1100][1100];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			d[i][j] = a[i][j] - a[i - 1][j] - a[i][j - 1] + a[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << d[i][j]<<' ';
		}
		cout << endl;
	}
	int x1, y1, x2, y2;
	int x;
	cin >> x1 >> y1 >> x2 >> y2 >> x;
	d[x1][y1] += x;
	d[x1][y2 + 1] -= x;
	d[x2 + 1][y1] -= x;
	d[x2 + 1][y2 + 1] += x;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			d[i][j] += d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
			cout << d[i][j]<<' ';
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int a[11000][11000], d[11000][11000];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		d[x1][y1] += 1;
		d[x1][y2 + 1] -= 1;
		d[x2 + 1][y1] -= 1;
		d[x2 + 1][y2 + 1] += 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			d[i][j] += d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
			cout << d[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
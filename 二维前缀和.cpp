#include <iostream>
using namespace std;
int a[1100][1100], s[1100][1100];
int main()
{
	int n,m;
	cin >> n>>m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];
	}
	for (int d = 1; d <= m; d++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << s[x1 - 1][y1 - 1] + s[x2][y2] - s[x1 - 1][y2] - s[x2 - 1][y1];
	}
	return 0;
}
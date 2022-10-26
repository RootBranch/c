//https://www.luogu.com.cn/problem/P1719
#include <iostream>
using namespace std;
const int num = 1e3+10;
int a[num][num], s[num][num];
int main()
{
	int n;
	cin >> n;
	int ma = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			s[i][j] = s[i - 1][j] + s[i][j - 1] + a[i][j] - s[i - 1][j - 1];
		}
	}
	for (int x1=1;x1<=n;x1++)
	{
		for (int y1 = 1; y1 <= n; y1++)
		{
			for (int x2 = x1; x2 <= n; x2++)
			{
				for (int y2 = y1; y2 <= n; y2++)
				{
					ma = max(ma, s[x2][y2] + s[x1 - 1][y1 - 1] - s[x2][y1 - 1] - s[x1 - 1][y2]);
				}
			}
		}
	}
	cout << ma;
	return 0;
}
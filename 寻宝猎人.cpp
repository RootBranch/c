//http://acm.zzuli.edu.cn/problem.php?cid=1850&pid=2
#include <iostream>
#include <string>
using namespace std;
int a[250][240];
int s[240][230];
int d[240][240];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];
		}
	}
	for (int i = 1; i +2<= n; i++)
	{
		for (int j = 1; j+2 <= m; j++)
		{
			d[i][j] = s[i + 2][j + 2] - s[i-1][j + 2] - s[i + 2][j-1] + s[i-1][j-1];
		}
	}
	int maxn=-1;
	for (int i = 1; i + 2 <= n; i++)
	{
		for (int j = 1; j + 2 <= m; j++)
		{
			maxn = max(maxn, d[i][j]);
		}
	}
	cout << maxn;
	return 0;
}
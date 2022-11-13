//http://acm.zzuli.edu.cn/problem.php?cid=1851&pid=7
#include <iostream>
using namespace std;
int a[1000][1000];
int sum[1000][1000];
int n, m;
int main()
{
	cin >> n >> m;
	int l = min(n, m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + a[i][j];
		}
	}
	int ans=0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int x = 1;x<=l; x++)
			{
				int xx =i+ x - 1;
				int yy = j + x - 1;
				if (xx > n || yy > m || sum[xx][yy] - sum[xx][j - 1] - sum[i - 1][yy] + sum[i - 1][j - 1] != x * x) break;
				ans =max(ans, x);
			}
		}
	}
	cout << ans;
	return 0;
}
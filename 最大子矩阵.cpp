//https://vjudge.d0j1a1701.cc/contest/528118#problem/G
#include <iostream>
#include <set>
using namespace std;
int a[1004][1004];
int s[1005][1005];
int main()
{
	int t;
	cin >> t;
	int m, n, x, y;
	for (int k = 0; k < t; k++)
	{
		memset(a, 0, sizeof(a));
		memset(s, 0, sizeof(s));
		cin >> m >> n >> x >> y;
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
				s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i-1][j-1] + a[i][j];
			}
		}
		int maxn = 0;
		for (int i = 1; i + x-1 <= m; i++)
		{
			for (int j = 1; j + y-1 <= n; j++)
			{
				a[i][j] = s[i + x - 1][j + y - 1] - s[i-1][j + y - 1] - s[i + x - 1][j-1] + s[i - 1][j - 1];
				maxn = max(a[i][j], maxn);
			}
		}
		cout << maxn<<endl;
	}
	return 0;
}
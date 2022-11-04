//https://vjudge.d0j1a1701.cc/contest/526572#problem/A
#include <iostream>
#include <set>
using namespace std;
const int N = 200;
char s[N][N];
int n, m;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int st[N][N];
int dfs(int x0, int y0)
{
	int cnt = 1;
	st[x0][y0] = 1;
	for (int i = 0; i < 4; i++)
	{
		int xx = dx[i] + x0;
		int yy = dy[i] + y0;
		if (st[xx][yy] == 1 || s[xx][yy] != '.' || xx > n || yy > m || xx < 1 || yy < 1) continue;
		cnt += dfs(xx, yy);
	}
	return cnt;
}
int main()
{
	n = 1;
	while (n != 0 || m != 0)
	{
		int sum = 0;
		cin >> n >> m;
		int x0=0, y0=0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> s[i][j];
				if (s[i][j] == '@')
					x0 = i, y0 = j;
			}
		}
		memset(st, 0, sizeof(st));
		sum+=dfs(x0, y0);
		cout << sum<<endl;
	}
	return 0;
}
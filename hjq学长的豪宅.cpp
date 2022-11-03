#include <iostream>
#include <set>
using namespace std;
int ans;
int m, n;
const int N = 205;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,-1,1 };
char a[N][N];
void dfs(int x0, int y0)
{

	if (x0<1 || y0<1 || x0>n || y0>m) return;
	if (a [x0][y0] == '#') return ;
	ans++;
	a[x0][y0] = '#';
		for (int i = 0; i < 4; i++)
		{
			int xx = x0 + dx[i];
			int yy = y0 + dy[i];
			dfs(xx, yy);
		}
}
int main()
{
	m = 1;
	while (m != 0 || n != 0)
	{
		ans = 0;
		cin >> m >> n;
		int x0, y0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
				if (a[i][j] == '@')
					x0 = i, y0 = j;
			}
		}
		dfs(x0, y0);
		cout << ans<<endl;
	}
	return 0;
}
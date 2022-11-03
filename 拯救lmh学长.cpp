#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
typedef pair<int ,int > pii;
const int N = 249;
char s[N][N];
int x1[N];
int y2[N];
int dx[] = { 1,-1,0,0 }, dy[] = { 0,0,-1,1 };
int xr, yr;
int n, m;
int st[N][N];
int num[N][N];
int bfs(int x0, int y0)
{
	memset(st, 0, sizeof st);
	queue<pii>q;
	q.push({ x0,y0 });
	int k = 0;
	while (q.size())
	{
		pii t = q.front();
		int x = t.first, y = t.second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int xx = dx[i] + x;
			int yy = dy[i] + y;
			if (xx<1 || yy<1 || xx>n || yy>m) continue;
			if (st[xx][yy] == 1)continue;
			if (s[xx][yy] == '#')continue;
			if (s[xx][yy] == 'x' && k == 1)
			{
				st[xx][yy] = 1;
				num[xx][yy] ++;
				q.push({xx,yy});
				k = 0;
				continue;
			}
			if (s[xx][yy] == 'x')
			{
				k++;
				num[xx][yy]=num[x][y]+1;
				continue;
			}
			st[xx][yy] = 1;
			num[xx][yy] = num[x][y] + 1;
			q.push({ xx,yy });
			if (xx == xr && yy == yr) return num[xx][yy];
		}
	}
	return 99999;
}
int main()
{
	int k = 1;
	cin >> n >> m;
	int minn = 999;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> s[i][j];
			if (s[i][j] == 'r')
			{
				x1[k] = i;
				y2[k] = j;
				k++;
			}
			if (s[i][j] == 'a') xr = i, yr = j;
		}
	}
	for (int i = 1; i <= k; i++)
	{
		int d = bfs(x1[i], y2[i]);
		minn = min(d, minn);
	}
	if (minn == 99999) cout << "Poor ANGEL has to stay in the prison all his life.";
	else cout << minn;
	return 0;
}


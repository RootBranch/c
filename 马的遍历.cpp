//https://vjudge.d0j1a1701.cc/contest/526572#problem/H
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int, int> pii;
const int N = 220;
int a[N][N];
int st[N][N];

int dy[] = { 1,2,2,1,-1,-2,-2,-1 };
int dx[] = { 2,1,-1,-2,2,1,-1,-2 };
int n, m;
int x, y;
void bfs()
{
	int num[N][N] = {(0,0)};
	queue<pii>q;
	q.push({ x,y });
	st[x][y] = 1;
	while (q.size())
	{
		pii t = q.front();
		q.pop();
		int x1 = t.first;
		int y1 = t.second;
		for (int i = 0; i < 8; i++)
		{
			int xx = x1 + dx[i];
			int yy = y1 + dy[i];
			if (st[xx][yy] == 1) continue;
			if (xx > n || yy > m || xx < 1 || yy < 1) continue;
			st[xx][yy] = 1;
			num[xx][yy] = num[x1][y1] + 1;
			q.push({ xx,yy });
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (num[i][j] == 0 && (i != x && j != y)) num[i][j] = -1;
			if (j != m)cout << num[i][j] << ' ';
			else cout << num[i][j];
		}
		cout << endl;
	}
}
int main()
{
	cin >> n >> m >> x >> y;
	bfs();
	return 0;
}
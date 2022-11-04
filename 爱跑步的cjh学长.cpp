#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <math.h>
using namespace std;
const int N = 239;
typedef pair <int, int> pii;
int a[N][N];
int st[N][N];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,-1,1 };
int num[N][N];
void bfs(int n, int m, int xs, int ys, int d)
{
	queue<pii> q;
	q.push({1,1});
	while (q.size())
	{
		pii t = q.front();
		int x = t.first;
		int y = t.second;
		q.pop();
		st[x][y] = 1;
		for (int i = 0; i < 4; i++)
		{
			int xx = dx[i] + x;
			int yy = dy[i] + y;
			if (xx<1 || yy<1 || xx>max(n,xs) || yy>max(m,ys)) continue;
			if (abs(xx - xs) + abs(yy - ys) <= d) continue;
			if (st[xx][yy])continue;
			num[xx][yy] = num[x][y] + 1;
			q.push({ xx,yy });
			if (xx == n && yy == m) break;
		}
	}
	num[n][m] == 0 ? cout << -1 << endl : cout << num[n][m] << endl;
}
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		memset(st, 0, sizeof(st));
		memset(num, 0, sizeof(num));
		int n,m ;
		int xs, ys;
		int d;
		cin >> n >> m >> xs >> ys >> d;
		bfs(n, m, xs, ys, d);
	}
	return 0;
}
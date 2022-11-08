#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
#include <cstring>
using namespace std;
typedef pair <int, int > pii;
const int N = 105;
int a[N][N];
int n=5, m=5;
int st[N][N];
int num1[N][N];
int num2[N][N];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
struct line
{
	int x1;
	int y1;
}r[100];
void bfs(int x0,int y0,int num[N][N])
{
	memset(st, 0, sizeof(st));
	queue<pii>q;
	pii c;
	c.first = x0;
	c.second = y0;
	q.push(c);
	while (q.size())
	{
		pii t = q.front();
		int x = t.first, y = t.second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (st[xx][yy])continue;
			if (xx > n || yy > m || xx < 1 || yy < 1)continue;
			if (a[xx][yy])continue;
			st[xx][yy] = 1;
			num[xx][yy] = num[x][y] + 1;
			c.first = xx;
			c.second = yy;
			q.push(c);
		}
	}
}
int main()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	bfs(1, 1,num1);
	int sum = num1[n][m];
	num1[1][1] = 0;
	bfs(n, m,num2);
	num2[n][m] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (num1[i][j] + num2[i][j] == sum)
			{
				r[num1[i][j]].x1 = i;
				r[num1[i][j]].y1 = j;
			}
		}
	}
	for (int i = 0; i <= sum; i++)
	{
		cout << "(" << r[i].x1-1<<", "<<r[i].y1-1 << ")" << endl;
	}
	return 0;
}
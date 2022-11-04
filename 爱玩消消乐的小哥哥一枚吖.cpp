//https://vjudge.d0j1a1701.cc/contest/526572#problem/F
#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
typedef pair<char, char> pcc;
int n, m;
const int num = 200;
int dx[] = { 1,-1,0,0,1,-1,1,-1 };
int dy[] = { 0,0,1,-1,1,-1,-1,1 };
int st[num][num];
char s[num][num];
void bfs(int x0, int y0)
{
	queue<pcc>q;
	q.push({x0,y0});
	while (q.size() != 0)
	{
		pcc t = q.front();
		int x = t.first;
		int y = t.second;
		st[x][y] = 1;
		q.pop();
		for (int i = 0; i < 8; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (xx > n || yy > m || xx < 1 || yy < 1)continue;
			if (s[xx][yy] != '@')continue;
			if (st[xx][yy])continue;
			q.push({ xx,yy });
		}
	}
	return ;
}
int main()
{
	m = -1;
	while (cin >> m >> n&&m)
	{
		memset(s, 0, sizeof(s));
		memset(st, 0, sizeof(st));
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> s[i][j];
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (s[i][j] == '@'&&st[i][j]!=1)
				{
					bfs(i, j);
					sum++;
				}
			}
		}
		cout << sum<<endl;
	}
	return 0;
}
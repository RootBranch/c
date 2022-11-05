#include <iostream>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;
int n, m;
const int N = 230;
typedef pair<int,int> pii;
char s[N][N];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int num[N][N];
int st[N][N];
int x0, yk;
int k;
int bfs()
{
	queue <pii>q;
	q.push({ x0,yk });
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
				q.push({ xx,yy });
				k = 0;
				continue;
			}
			if (s[xx][yy] == 'x')
			{
				k++;
				num[xx][yy] = num[x][y] + 1;
				q.push({ x,y });
				continue;
			}
			st[xx][yy] = 1;
			num[xx][yy] = num[x][y] + 1;
			q.push({ xx,yy });
			if (s[xx][yy] == 'r') return num[xx][yy];
		}
	}
	return -1;
}

int main()
 {
	while (cin >> n >> m&&m!=0)
	{
		memset(s, 0, sizeof(s));
		memset(st, 0, sizeof(st));
		memset(num, 0, sizeof(num));
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> s[i][j];
				if (s[i][j] == 'a') x0 = i, yk = j;
			}
		}
		if (bfs() == -1)cout << "Poor ANGEL has to stay in the prison all his life."<<endl;
		else cout << bfs()<<endl;
	}
	return 0;
}
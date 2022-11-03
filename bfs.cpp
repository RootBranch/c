//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int N = 120;
//const int dx[] = { -1,1,0,0 }, dy[] = { 0,0,-1,1 };
//
//typedef pair<int, int> pii;
//
//int n, m;
//bool st[N][N];		
//int a[N][N];		
//int num[N][N];		
//void bfs()
//{
//	queue<pii>q;
//	q.push({ 1,1 });	
//
//	while (q.size())	
//	{
//		pii t = q.front();	
//		int x = t.first, y = t.second;
//		q.pop();	
//		for (int i = 0; i < 4; i++)
//		{
//			int xx = dx[i] + x;
//			int yy = dy[i] + y;
//			if (xx<1 || yy<1 || xx>n || yy>m) continue;
//			if (st[xx][yy] == 1)continue;
//			if (a[xx][yy] == 1)continue;
//			st[xx][yy] = 1;
//			num[xx][yy] = num[x][y] + 1;
//
//			q.push({xx,yy});
//		}
//	}
//	cout << num[n][m] << endl;
//}
//int main()
//{
//
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//			cin >> a[i][j];
//	}
//	bfs();
//	return 0;
//}

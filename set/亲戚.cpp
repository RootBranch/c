//https://www.luogu.com.cn/problem/P1551
#include <iostream>
using namespace std;
int a[1000010];
int find(int x)
{
	if (a[x] == x)
		return x;
	else
		return a[x] = find(a[x]);
}
void togther(int x, int y)
{
	a[find(x)] = find(y);
}
int main()
{
	int n, m, p;
	cin >> n >> m >> p;
	int x, y;
	for (int i = 1; i <= n; i++)
		a[i] = i;
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		togther(x, y);
	}
	int k, l;
	for (int i = 1; i <= p; i++)
	{
		cin >> k >> l;
		if (find(k) == find(l))
			cout << "Yes"<<endl;
		else
			cout << "No"<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int n;
int a[132];
int st[143];
void bfs(int u)
{
	if (u > n) 
	{
		for (int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!st[i])
		{
			st[i] = 1;
			a[u] = i;
			bfs(u + 1);
			st[i] = 0;
			a[u] = 0;
		}
	}
}
int main()
{
	cin >> n;
	bfs(1);
	return 0;
}
//https://vjudge.csgrandeur.cn/contest/532167#problem/D
#include <iostream>
using namespace std;
int a[15];
int st[15];
int n,k;
void dfs(int step)
{
	if (step == k+1)
	{
		for (int i = 1; i <= k; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		return;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (!st[i])
			{
				a[step] = i;
				st[i] = 1;
				dfs(step + 1);
				st[i] = 0;
			}
		}
	}
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		a[i] = i;
	dfs(1);
	return 0;
}
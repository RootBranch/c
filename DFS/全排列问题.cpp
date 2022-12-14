//https://vjudge.csgrandeur.cn/contest/532167#problem/A
#include <iostream>
using namespace std;
const int nn = 10;
int st[nn];
int n;
int a[nn];
void dfs(int step)
{
	if (step == n+1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i != n)
				cout << a[i] << "    ";
			else
				cout << a[i] << endl;
		}
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
	cin >> n;
	dfs(1);
	return 0;
}
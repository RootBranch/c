//对于n个数进行全排列，输出排列结果及总个数
#include <iostream>
#include <set>
using namespace std;
int n;
int a[1000];
int st[1000];
int b[1000];
int m;
int sum = 0;
void dfs(int step)
{
	if (step == n)
	{
		for (int i = 0; i < n; i++)
			cout << b[i] << ' ';
		cout << endl;
		sum++;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!st[i])
		{
			st[i] = 1;
			b[step] = a[i];
			dfs(step + 1);
			st[i] = 0;
		}
	}
	return;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		memset(st, 0, sizeof(st));
	}
	dfs(0);
	cout << sum;
	return 0;
}
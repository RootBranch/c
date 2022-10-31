//https://vjudge.d0j1a1701.cc/contest/523528#problem/H
#include <iostream>
using namespace std;
int a[100000], b[100000];
int main()
{
	int n, m;
	cin >> n >> m;
	int x=-1,ans;
	int ans1 = -1, ans2 = -1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		ans1 = a[i] / m;
		ans2 = a[i] % m;
		if (ans2 == 0) b[i] = ans1;
		else b[i] = ans1 + 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (b[i] >= x)
		{
			x = b[i];
			ans = i;
		}
	}
	cout << ans;
	return 0;
}
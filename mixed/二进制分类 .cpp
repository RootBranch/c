//https://www.luogu.com.cn/problem/B2140
#include <iostream>
using namespace std;
int n;
int lowbit(int m)
{
	return m & -m;
}
int main()
{
	cin >> n;
	int a = 0;
	int b = 0;
	for (int i = 1; i <= n; i++)
	{
		int t = i;
		int ans = 0;
		int num = 0;
		while (t)
		{
			t /= 2;
			num++;
		}
		t = i;
		while (t)
		{
			t -= lowbit(t);
			ans++;
		}
		if (ans > num - ans) a++;
		else b++;
	}
	cout << a << ' ' << b;
	return 0;
}
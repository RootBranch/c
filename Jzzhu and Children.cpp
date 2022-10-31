//https://vjudge.d0j1a1701.cc/contest/523528#problem/G
#include <iostream>
using namespace std;
int a[100005];
int main()
{
	int n, each;
	cin >> n >> each;
	int maxn1=-1, maxn2=-1;
	int maxn3 =-1,maxn4=-1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		int ans1 = a[i] / each;
		int ans2 = a[i] % each;
		if (ans2 != 0)
		{
			if (maxn1 <= ans1)
			{
				maxn1 = ans1;
				maxn2 = i;
			}
		}
		else if (ans2 == 0)
		{
			if (maxn3 <= ans1)
			{
				maxn3 = ans1;
				maxn4 = i;
			}
		}
		if (maxn1 < maxn3 - 1)
			maxn2 = maxn4;
		else if (maxn1 == maxn3 - 1 && maxn2 < maxn4)
			maxn2 = maxn4;
	}
	cout << maxn2;
	return 0;
}
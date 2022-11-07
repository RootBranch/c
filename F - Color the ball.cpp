//https://vjudge.d0j1a1701.cc/contest/528118#problem/F
#include <iostream>
#include <set>
using namespace std;
const int N = 1e6 + 5;
int a[N];
int main()
{
	int n = -1;
	int x1, x2;
	while (n != 0)
	{
		cin >> n;
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; i++)
		{
			cin >> x1>> x2;
			a[x1]++;
			a[x2 + 1]--;
		}
		for (int i = 1; i <= n; i++)
		{
			a[i] = a[i - 1] + a[i];
			if (i != n)cout << a[i] << ' ';
			else cout << a[i]<<endl;
		}
	}
	return 0;
}
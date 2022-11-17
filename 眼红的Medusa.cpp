//https://www.luogu.com.cn/problem/P1571
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
const long long int nn = 1e5+6;
int a[nn],b[nn];
int n, m;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < m; i++)cin >> b[i];
	sort(b, b + m);
	for (int i = 0; i < n; i++)
	{
		int l = 0, r = m;
		while (l <= r)
		{
			int mid = (l + r) / 2;
			if (a[i] == b[mid])
			{
				cout << a[i] << ' ';
				break;
			}
			else if (a[i] > b[mid]) l = mid + 1;
			else if (a[i] < b[mid])r = mid - 1;
		}
	}
	return 0;
}
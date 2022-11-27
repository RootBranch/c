//https://ac.nowcoder.com/acm/contest/48404/E
#include <iostream>
#include <math.h>
using namespace std;
int a[100];
int main()
{
	long long int n;
	cin >> n;
	if (n % 2 == 1)
	{
		cout << -1;
		return 0;
	}
	int cnt = 0;
	for (int i = 31; i >= 1; i--)
	{
		long long int m = pow(2, i);
		if (n >= m)
		{
			a[cnt++] = m;
			n -= m;
		}
	}
	for (int i = 0; i < cnt; i++)
	{
		if (i != cnt - 1)
			cout << a[i] << " ";
		else cout << a[i];
	}
	return 0;
}
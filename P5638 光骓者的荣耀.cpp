//https://www.luogu.com.cn/problem/P5638
#include <iostream>
using namespace std;
const long long  num = 1e7 + 5;
long long a[num], b[num];
int main()
{
	long long n, k;
	cin >> n >> k;
	long long ma = 0;
	for (int i = 1; i <= n-1; i++)
	{
		cin >> a[i];
		b[i] = a[i] + b[i - 1];
	}
	for (int i = 0; i+k < n; i++)
	{
		ma=max(a[i] = b[i + k] - b[i],ma);
	}
	cout << b[n-1] - ma;
	return 0;
}
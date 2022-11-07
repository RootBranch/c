//https://vjudge.d0j1a1701.cc/contest/528118#problem/M
#include <iostream>
using namespace std;
struct line
{
	int j, y, t;
}a[30];
int main()
{
	int n;
	cin >> n;
	int sumj = 0, sumy = 0, sumt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].j >> a[i].y >> a[i].t;
		sumj += a[i].j;
		sumt += a[i].t;
		sumy += a[i].y;
	}
	cout << sumj << ' ' << sumy << ' ' << sumt<<' '<<sumj+sumy+sumt;
	return 0;
}
//https://vjudge.d0j1a1701.cc/contest/528118#problem/L
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
const long long int N = 1e2 + 5;
long long int a[N];
int n;
long long int minn=9999999999;
long long int sum1 ;
long long int sum2 ;
int sum;
int st[N];
void dfs(int x)
{
	if (x > n)
	{
		sum2 = sum - sum1;
		minn = min(minn, abs(sum1-sum2));
		return ;
	}
	else
	{
		sum1 += a[x];
		dfs(++x);
		sum1 -= a[x];
		dfs(++x);
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	dfs(1);
	cout << minn;
	return 0;
}
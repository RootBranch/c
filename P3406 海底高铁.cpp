//https://www.luogu.com.cn/problem/P3406
#include <iostream>
using namespace std;
typedef long long ll;
const ll num = 10000005;
ll a[num], b[num], c[num];
ll m, n;
ll ans,mi;
	ll k[num] = {0}, ever[num] = { 0 }, sum[num] = { 0 };
int main()

{
	cin >> n>>m;
	for (int i = 1; i <= m; i++)
	{
		cin >> k[i];
		if (i == 1) continue;
		ever[min(k[i - 1], k[i])]++;
		ever[max(k[i - 1], k[i])]--;
	}
	for (int i = 1; i <= n; i++)
	{
		sum[i] = sum[i-1] + ever[i];
	}
	for (int i = 1; i < n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
		ans += min(a[i] * sum[i], b[i] * sum[i] + c[i]);
	}
	cout << ans;
	return 0;
}
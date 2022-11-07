//https://vjudge.d0j1a1701.cc/contest/528118#problem/J
#include <iostream>
using namespace std;
int main()
{
	int n, k, m;
	cin >> n >> k >> m;
	int an = n * k;
	if (an < m - k) cout << 0;
	else if (an == m - k) cout << 1;
	else
	{
		if (m % k == 0)cout << n - m / k;
		else cout << n - m / k - 1;
	}
			return 0;
}